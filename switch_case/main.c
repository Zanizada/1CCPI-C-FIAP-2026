#include <stdio.h>
#include <stdlib.h>

// Funções
float input_nota_1(){
    float nota1;
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    if (nota1 < 0 || nota1 > 10){
        printf("Nota invalida.\n");
        exit(0);
    } else {
        return nota1;
    }
}

float input_nota_2(){
    float nota2;
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    if (nota2 < 0 || nota2 > 10){
        printf("Nota invalida.\n");
        exit(0);
    } else {
        return nota2;
    }
}

void menu(void){
    printf("--- MENU ---\n");
    printf("1 - Calculadora da media do aluno;\n");
    printf("2 - Verificador de presenca;\n");
    printf("3 - Aprovacao.\n");
}

float media_aritmetica(float n1,float n2){
    // n1 e n2 são notas do aluno
    return (n1 + n2)/2;
}

void verificador_presenca(int p){
    // p é a presença/frequência do aluno de 0 a 100
    if (p < 0 || p > 100){
            printf("Valor de presenca invalida.\n");
        } else if (p == 100){
            printf("Aluno esta com presenca perfeita!\n");
        } else if (p >= 75){
            printf("Aluno esta com presenca em dia!\n");
        } else {
            printf("Aluno esta com presenca pendente!\n");
        }
}

void criterio_aprovacao_media(float m){
    // m --> media do aluno
    if (m < 0 || m > 10){
        printf("Media invalida.\n");
    } else if (m >= 6 && m <= 10){
        printf("Aluno Aprovado!\n");
    } else if (m >= 4 && m < 6){
        printf("Aluno em Recuperacao!\n");
    } else {
        printf("Aluno Reprovado!\n");
    }
}

int main(){
    // Declarações de Variáveis
    int opcao, presenca;
    float nota_1, nota_2;
    // Código
    menu();    
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
        printf("--- CALCULADORA DE MEDIA ---\n"); 
        nota_1 = input_nota_1();
        nota_2 = input_nota_2();
        printf("A nota do aluno e: %.2f", media_aritmetica(nota_1, nota_2));

        break;

        case 2:
        printf("--- VERIFICADOR DE PRESENCA ---\n");
        printf("Digite a frequencia do aluno (0-100): ");
        scanf("%d", &presenca);
        verificador_presenca(presenca);
        
        break;

        case 3:
        printf("--- APROVACAO ---\n");
        nota_1 = input_nota_1();
        nota_2 = input_nota_2();
        criterio_aprovacao_media(media_aritmetica(nota_1, nota_2));
        break;

        default: printf("Opcao invalida!\n");
    }

    return 0;
}