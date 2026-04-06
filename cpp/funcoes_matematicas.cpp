#include <iostream>
#include <cmath>
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
            cout << "Digite a base: ";
            cin >> base;
            cout << "Digite o expoente: ";
            cin >> expoente;

            cout << "Resultado: " << pow(base, expoente) << endl << endl;
        }

        else if (opcao == 2) {
            double numero;
            cout << "Digite um numero: ";
            cin >> numero;

            if (numero < 0) {
                cout << "Nao existe raiz real." << endl << endl;
            } else {
                cout << "Raiz: " << sqrt(numero) << endl << endl;
            }
        }

        else if (opcao == 3) {
            double angulo;
            cout << "Digite o angulo (radianos): ";
            cin >> angulo;

            cout << "Seno: " << sin(angulo) << endl;
            cout << "Cosseno: " << cos(angulo) << endl;
            cout << "Tangente: " << tan(angulo) << endl << endl;
        }

        else if (opcao == 4) {
            double numero;
            cout << "Digite um numero positivo: ";
            cin >> numero;

            if (numero <= 0) {
                cout << "Valor invalido." << endl << endl;
            } else {
                cout << "Log: " << log(numero) << endl << endl;
            }
        }

        else if (opcao != 0) {
            cout << "Opcao invalida!" << endl << endl;
        }

    } while (opcao != 0);

    cout << "Encerrando..." << endl;

    return 0;
}
