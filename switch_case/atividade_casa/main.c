#include <stdio.h>
#include <stdlib.h>

// Funções
void menu(){
    printf("--- CONVERSOES ---\n");
    printf("1 - Celsius - Fahrenheit;\n");
    printf("2 - Celsius - Kelvin;\n");
    printf("3 - Fahrenheit - Celsius;\n");
    printf("4 - Fahrenheit - Kelvin;\n");
    printf("5 - Kelvin - Celsius;\n");
    printf("6 - Kelvin - Fahrenheit.\n");
}

float conversoes_c(float c, int destino_c){
    // c é celsius
    // destino_c é a escolha entre fahrenheit ou kelvin
    switch(destino_c){
        case 1: // C para F
        return (c * 9/5) + 32;
        
        case 2: // C para K
        return c + 273.15;

        default: 
        printf("Entrada invalida de funcao.\n");
        exit(0);
    }
}

float conversoes_f(float f, int destino_f){
    // f é fahrenheit
    // destino_f é a escolha entre celsius ou kelvin
    switch(destino_f){
        case 1: // F para C
        return (f - 32) * 5/9;

        case 2: // F para K
        return (f - 32) * 5/9 + 273.15;

        default: 
        printf("Entrada invalida de funcao.\n");
        exit(0);
    }

}

float conversoes_k(float k, int destino_k){
    // k é kelvin
    // destino_k é a escolha entre celsius ou fahrenheit
    switch(destino_k){
        case 1: // K para C
        return k - 273.15;

        case 2: // K para F
        return (k - 273.15) * 9/5 + 32;

        default: 
        printf("Entrada invalida de funcao.\n");
        exit(0);
    }
}

float input_celsius(){
    float C;
    printf("Digite a quantia de graus C: ");
    scanf("%f", &C);
    return C;
}

float input_fahrenheit(){
    float F;
    printf("Digite a quantia de graus F: ");
    scanf("%f", &F);
    return F;
}

float input_kelvin(){
    float K;
    printf("Digite a quantia de graus K: ");
    scanf("%f", &K);
    return K;
}

int main(){
    // Variáveis
    int opcao;
    float cel, fah, kel; // celsius, fahrenheit, kelvin
    // Código
    menu();
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("--- CELSIUS PARA FAHRENHEIT ---\n");
        cel = input_celsius();
        fah = conversoes_c(cel, 1);
        printf("%.1f graus C sao equivalentes a %.1f graus F.\n", cel, fah);

        break;
        
        case 2:
        printf("--- CELSIUS PARA KELVIN ---\n");
        cel = input_celsius();
        kel = conversoes_c(cel, 2);
        printf("%.1f graus C sao equivalentes a %.1f graus K.\n", cel, kel);

        break;

        case 3:
        printf("--- FAHRENHEIT PARA CELSIUS ---\n");
        fah = input_fahrenheit();
        cel = conversoes_f(fah, 1);
        printf("%.1f graus F sao equivalentes a %.1f graus C.\n", fah, cel);
        
        break;

        case 4:
        printf("--- FAHRENHEIT PARA KELVIN ---\n");
        fah = input_fahrenheit();
        kel = conversoes_f(fah, 2);
        printf("%.1f graus F sao equivalentes a %.1f graus K.\n", fah, kel);

        break;
        
        case 5:
        printf("--- KELVIN PARA CELSIUS ---\n");
        kel = input_kelvin();
        cel = conversoes_k(kel, 1);
        printf("%.1f graus K sao equivalentes a %.1f graus C.\n", kel, cel);

        break;

        case 6:
        printf("--- KELVIN PARA FAHRENHEIT ---\n");
        kel = input_kelvin();
        fah = conversoes_k(kel, 2);
        printf("%.1f graus K sao equivalentes a %.1f graus F.\n", kel, fah);

        break;

        default: printf("Opcao invalida.\n");
    }
    return 0;
}