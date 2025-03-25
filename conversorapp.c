#include <stdio.h>

void convertirMoneda(float cantidad, float tasa, char* moneda) {
    printf("Equivalente en %s: %.2f\n", moneda, cantidad * tasa);
}

int main() {
    int opcion;
    float cantidad;
    printf("Bienvenido al conversor de monedas\n");
    printf("Opciones disponibles:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opción (1-4): ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            convertirMoneda(cantidad, 0.13, "Dólares");
            break;
        case 2:
            convertirMoneda(cantidad, 0.12, "Euros");
            break;
        case 3:
            convertirMoneda(cantidad, 7.80, "Quetzales");
            break;
        case 4:
            convertirMoneda(cantidad, 8.50, "Quetzales");
            break;
        default:
            printf("Opción no válida.\n");
    }
    return 0;
}