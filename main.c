#include <stdio.h>

void calcular_pricing() {
    printf("[SISTEMA] Calculando tarifas dinamicas para drones...\n");
}

void sistema_alerts() {
    printf("[ALERTA] Bateria baja en Unidad 07. Regresando a base...\n");
    printf("[ALERTA] Viento lateral fuerte detectado en zona norte.\n");
}

int main() {
    printf("GEOFLIGHT TELCO - Sistema de control de vuelo iniciado.\n");
    calcular_pricing();
    sistema_alerts();
    return 0;
}
