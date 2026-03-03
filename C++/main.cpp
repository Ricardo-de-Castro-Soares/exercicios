#include <iostream> /* iostream e a biblioteca basica de esntrada e saida do c++ e includde e pra adicionar bibliotecas */

using namespace std; /* Usado para orgarnizar bibliotecas do mesmo tipo para que trabalhem de forma organizada */

int main() {
    int vida = 25;
    char letra = 'C';
    double decimal = 3.14;
    bool vivo = true;
    string nome = "Ricardo";

    cout << "Escreva a vida de seu personagem: ";
    cin >> vida;
    cout << "Escreva a inicial do seu nome: ";
    cin >> letra;
    cout << "Escreva a o dinheiro desejado: ";
    cin >> decimal;
    cout << "Escreva seu nome: ";
    cin >> nome;

    cout << vida << "\n";
    cout << letra << "\n";
    cout << "R$" << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
}