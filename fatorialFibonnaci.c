#include <stdio.h>

int sequenciaFatorial(int valor){
    if (valor != 1)
    {   
        return valor * sequenciaFatorial(valor - 1);
       
    }else{
        return valor;
    }
    
}

int main(){
    int vFatorial;
    
    printf("Gostaria de saber o fatorial de qual numero ? (ex: 5):");
    scanf("%d", &vFatorial);

    printf("O fatorial de %d é %d\n", vFatorial, sequenciaFatorial(vFatorial));

}