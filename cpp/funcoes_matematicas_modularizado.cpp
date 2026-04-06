#include <iostream>
#include <cmath>
using namespace std;

// Potência
void calcularPotencia() {
    double base, expoente;
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;

    cout << "Resultado: " << pow(base, expoente) << endl << endl;
}

// Raiz
void calcularRaiz() {
    double numero;
    cout << "Digite um numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Nao existe raiz real." << endl << endl;
    } else {
        cout << "Raiz: " << sqrt(numero) << endl << endl;
    }
}

// Trigonometria
void calcularTrigonometria() {
    double angulo;
    cout << "Digite o angulo (radianos): ";
    cin >> angulo;

    cout << "Seno: " << sin(angulo) << endl;
    cout << "Cosseno: " << cos(angulo) << endl;
    cout << "Tangente: " << tan(angulo) << endl << endl;
}

// Logaritmo
void calcularLogaritmo() {
    double numero;
    cout << "Digite um numero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Valor invalido." << endl << endl;
    } else {
        cout << "Log: " << log(numero) << endl << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "=== MENU ===" << endl;
        cout << "1 - Potencia" << endl;
        cout << "2 - Raiz" << endl;
        cout << "3 - Trigonometria" << endl;
        cout << "4 - Logaritmo" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1: calcularPotencia(); break;
            case 2: calcularRaiz(); break;
            case 3: calcularTrigonometria(); break;
            case 4: calcularLogaritmo(); break;
        }

    } while(opcao != 0);

    return 0;
}
