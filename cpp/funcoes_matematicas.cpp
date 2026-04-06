#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcao;

    do {
        cout << "=================" << endl;
        cout << "====== MENU =====" << endl;
        cout << "1 - Potencia" << endl;
        cout << "2 - Raiz" << endl;
        cout << "3 - Trigonometria" << endl;
        cout << "4 - Logaritmo" << endl;
        cout << "0 - Sair" << endl;
        cout << " " << endl;
        cout << "Digite a opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            double base, expoente;
            cout << " " << endl;
            cout << "Digite a base: ";
            cin >> base;
            cout << "Digite o expoente: ";
            cin >> expoente;

            cout << "Resultado: " << pow(base, expoente) << endl << endl;
            cout << " " << endl;
        }else if (opcao == 2) {
            double numero;
            cout << " " << endl;
            cout << "Digite um numero: ";
            cin >> numero;

            if (numero < 0) {
                cout << "Nao existe raiz real." << endl << endl;
            } else {
                cout << "Raiz: " << sqrt(numero) << endl << endl;
            }
            cout << " " << endl;
        }else if (opcao == 3) {
            double angulo;
            cout << " " << endl;
            cout << "Digite o angulo (radianos): ";
            cin >> angulo;

            cout << "Seno: " << sin(angulo) << endl;
            cout << "Cosseno: " << cos(angulo) << endl;
            cout << "Tangente: " << tan(angulo) << endl << endl;
            cout << " " << endl;
        }else if (opcao == 4) {
            double numero;
            cout << " " << endl;
            cout << "Digite um numero positivo: ";
            cin >> numero;

            if (numero <= 0) {
                cout << "Valor invalido." << endl << endl;
            } else {
                cout << "Log: " << log(numero) << endl << endl;
            }
            cout << " " << endl;
        }else if (opcao != 0) {
            cout << " " << endl;
            cout << "Opcao invalida!" << endl << endl;
            cout << " " << endl;
        }

    } while (opcao != 0);

    cout << " " << endl;
    cout << "Encerrando a execução..." << endl;

    return 0;
}
