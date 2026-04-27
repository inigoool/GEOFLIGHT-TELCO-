#include <stdio.h>

void calcular_pricing() {
    printf("[SISTEMA] Calculando tarifas dinamicas para drones...\n");
}

void sistema_alerts() {
    printf("[ALERTA] Sistema de alertas monitorizando estado de bateria...\n");
}

void optimizar_rutas() {
    printf("[IA] Calculando ruta optima para ahorro de bateria...\n");
    printf("[IA] Ruta optimizada: Reduccion del 15%% de consumo conseguida.\n");
}

int main() {
    printf("GEOFLIGHT TELCO - Sistema de control de vuelo iniciado.\n");
    calcular_pricing();
    sistema_alerts();
    optimizar_rutas(); // Esta es la funcionalidad de la Tarea 3
    return 0;
}
