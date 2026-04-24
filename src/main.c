#include<stdio.h>

int main() {}

void menu(){
    printf("----------------MENU----------------\n");
    printf(" SISTEMA EQUIPE 1CCPF\n");
    printf("==============================\n");
    printf("1 - Inserir notas\n");
    printf("2 - Calcular media\n");
    printf("3 - Verificar situacao\n");
    printf("4 - Exibir resultado\n");
    printf("5 - Calcular derivada\n");
    printf("6 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao){

        case 1:

        float nota1, nota2, nota3, nota4;
 
        printf("informe a primeira nota do aluno:");
        scanf("%d",&nota1);
        printf("\ninforme a segunda nota do aluno:");
        scanf("%d",&nota2);
        printf("\ninforme a terceira nota do aluno:");
        scanf("%d",&nota3);
        printf("\ninforme a quarta nota do aluno:");
        scanf("%d",&nota4);
        break:


    

    
    return 0;
}