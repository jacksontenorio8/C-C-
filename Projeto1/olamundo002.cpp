# include <iostream>

using namespace std;

// No c uma string é um conjunto de caracter

int main() {
    
    //declarando variáveis.
    int numero = 10;
   
    // Linguagem c é case sensitive.
    float pi = 3.1415;
    
    // Para ponto flutuante muito grande usa o double
    double numero_maior = 9999999999999999999999999999999999.9999999999999999999999999999;

    //char aloca apenas um caracter
    char letra = 'a';

    cout << "O número é " << numero << endl;
    cout << "O valor de PI é " << pi << endl;
    cout << "O número gigante é " << numero_maior << endl;
    cout << "A letra é " << letra << endl;
}