#include<stdio.h>

// ===== VARIÁVEIS GLOBAIS =====
float nota1 = 0, nota2 = 0, nota3 = 0;
float media = -1;
int notasInseridas = 0;

/ ===== FUNÇÃO PARA CALCULAR MÉDIA =====
float calcularMedia() {
    if (notasInseridas == 0) {
        printf("Primeiro insira as notas!\n");
        return -1;
    }
    media = (nota1 + nota2 + nota3) / 3;
    printf("Media calculada: %.2f\n", media);
    return media;
}
// ===== FUNÇÃO PARA VERIFICAR SITUAÇÃO =====
void verificarSituacao() {
    if (media < 0) {
        printf("Calcule a media primeiro!\n");
        return;
    }
    if (media >= 7) {
        printf("Situacao: APROVADO\n");
    } else if (media >= 5) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}
// ===== FUNÇÃO PARA EXIBIR RESULTADOS =====
void exibirResultados() {
    if (notasInseridas == 0 || media < 0) {
        printf("Dados incompletos! Insira notas e calcule a media.\n");
        return;
    }
    printf("\n========= RESULTADO =========\n");
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media: %.2f\n", media);
    verificarSituacao();
}

// ===== FUNÇÃO PARA INSERIR NOTAS =====
void inserirNotas() {
    do {
        printf("Digite a nota 1 (0 a 10): ");
        scanf("%f", &nota1);
    } while (nota1 < 0 || nota1 > 10);
    do {
        printf("Digite a nota 2 (0 a 10): ");
        scanf("%f", &nota2);
    } while (nota2 < 0 || nota2 > 10);
    do {
        printf("Digite a nota 3 (0 a 10): ");
        scanf("%f", &nota3);
    } while (nota3 < 0 || nota3 > 10);
    notasInseridas = 1;
    printf("\nNotas cadastradas com sucesso!\n");
}

int main() {}

int opcao;

do {
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
<<<<<<< HEAD
=======
    
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

>>>>>>> 771479d2527a4d7aad1aa6c91a2046343729af96

    

    
    return 0;
}