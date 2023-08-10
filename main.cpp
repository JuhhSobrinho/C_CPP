#include <iostream>

int main() 
{
    std::cout << "Digite seu texto: ";
    
    // Declarar uma variável string para armazenar a entrada
    std::string text;
    
    // Usar a função std::cin para receber a entrada do usuário
    std::cin >> text;
    
    std::cout << "Você digitou: " << text << std::endl;
    
    return 0;
}
