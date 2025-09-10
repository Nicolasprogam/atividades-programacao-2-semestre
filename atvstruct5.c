#include <string.h>
#include <stdio.h>
typedef struct{
    char nome[50];
    int matricula;
    float nota1,nota2;
} descricao;

int main() {
    
    descricao aluno[4];
    for(int i=0;i <4;i++){
        printf("digite seu nome\n");
        scanf("%s", aluno[i].nome);
        printf("digite sua matricula\n");
        scanf("%d", &aluno[i].matricula);
        printf("digite suas notas\n");
        scanf("%f %f",&aluno[i].nota1,&aluno[i].nota2);
    }
    for(int i=0;i <4;i++){
        printf("nome: %s\n",aluno[i].nome);
        printf("matricula %d\n", aluno[i].matricula);
        printf("nota 1 = %f e nota 2 = %f\n",aluno[i].nota1,aluno[i].nota2);
        printf("\n");
    }
    
  return 0;
}