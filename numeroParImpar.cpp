#include <iostream>

int main (){
    int numero;
    std::cout << "Digite um número: "<< std::endl;
    std::cin >> numero;
    
    if(numero % 2 == 0) {
    std::cout << "O número é par." <<std::endl;
    
}else{
    
    std::cout << "O número é ímpar" << std::endl; 
}

return 0;

}