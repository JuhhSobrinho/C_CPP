#include <cstdio>

int valores(float a, float b, float c) {
    float liquidoInss = (a * (b / 100));
    float liquidoIr = (a * (c / 100));
    float liquido = a - (liquidoInss + liquidoIr);
    return liquido;
}

int main() {
    float salario, inss, ir, salLiquido;

    printf("digite o seu salario: ");
    scanf("%f", &salario);

    if (salario <= 1693.72)
    {
        inss = 8;
        ir = 0;
    }


    else if (salario > 1693.72 && salario <= 2822.90)
    {
        inss = 9;
        if (salario >= 1903.99)
        {
           ir = 7.5;
        }
    }


    else if (salario > 2824.90 && salario <= 5646.80)
    {
        inss = 11;
        if (salario <= 3751.05)
        {
           ir = 15;
        } else if (salario <= 4664,68)
        {
            ir = 22.5;
        }else
        {
            ir = 27.5;
        }
        
        
    }
    else if (salario > 5646.80)
    {
        inss=0;
        ir= 27.5;
        salario = salario - 621.04;
    }
    
    
    
    

    float sum= valores(salario, inss, ir);
    printf(" >> Salario Bruto: %7.2f \n >> Salario liquido: %7.2f \n >> Desconto INSS: %2.f%%\n >> Desconto IR: %2.f%%", salario, sum, inss, ir);

    return 0;
}
