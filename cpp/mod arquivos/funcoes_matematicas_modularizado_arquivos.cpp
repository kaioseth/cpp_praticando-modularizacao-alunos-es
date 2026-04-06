#include <iostream>
#include "funcoes_matematicas.h"
using namespace std;

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

        if (opcao == 1) {
            double base, expoente;
            cout << "Base: ";
            cin >> base;
            cout << "Expoente: ";
            cin >> expoente;

            cout << "Resultado: " << potencia(base, expoente) << endl << endl;
        }

        else if (opcao == 2) {
            double numero;
            cout << "Numero: ";
            cin >> numero;

            if (numero < 0) {
                cout << "Valor invalido" << endl << endl;
            } else {
                cout << "Raiz: " << raiz(numero) << endl << endl;
            }
        }

        else if (opcao == 3) {
            double angulo;
            cout << "Angulo (rad): ";
            cin >> angulo;

            cout << "Seno: " << seno(angulo) << endl;
            cout << "Cosseno: " << cosseno(angulo) << endl;
            cout << "Tangente: " << tangente(angulo) << endl << endl;
        }

        else if (opcao == 4) {
            double numero;
            cout << "Numero: ";
            cin >> numero;

            if (numero <= 0) {
                cout << "Valor invalido" << endl << endl;
            } else {
                cout << "Log: " << logaritmo(numero) << endl << endl;
            }
        }

    } while (opcao != 0);

    return 0;
}
