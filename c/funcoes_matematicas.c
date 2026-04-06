#include <stdio.h>
#include <math.h>

// Potência
void calcularPotencia() {
    double base, expoente;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);

    printf("Resultado: %.2lf\n\n", pow(base, expoente));
}

// Raiz quadrada
void calcularRaiz() {
    double numero;
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Nao existe raiz real.\n\n");
    } else {
        printf("Raiz: %.2lf\n\n", sqrt(numero));
    }
}

// Trigonometria
void calcularTrigonometria() {
    double angulo;
    printf("Digite o angulo (em radianos): ");
    scanf("%lf", &angulo);

    printf("Seno: %.2lf\n", sin(angulo));
    printf("Cosseno: %.2lf\n", cos(angulo));
    printf("Tangente: %.2lf\n\n", tan(angulo));
}

// Logaritmo
void calcularLogaritmo() {
    double numero;
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    if (numero <= 0) {
        printf("Valor invalido.\n\n");
    } else {
        printf("Log: %.2lf\n\n", log(numero));
    }
}

int main() {
    int opcao;

    do {
        printf("=== MENU ===\n");
        printf("1 - Potencia\n");
        printf("2 - Raiz\n");
        printf("3 - Trigonometria\n");
        printf("4 - Logaritmo\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: calcularPotencia(); break;
            case 2: calcularRaiz(); break;
            case 3: calcularTrigonometria(); break;
            case 4: calcularLogaritmo(); break;
        }

    } while(opcao != 0);

    return 0;
}
