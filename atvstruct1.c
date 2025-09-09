
#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[20];
    float salario;
    int codigo;
} funcionario;

int main()
{
    funcionario empregado;
    
     strcpy(empregado.nome, "Carlos");
    empregado.salario = 5500.00;
    empregado.codigo = 123;

   
    printf("Nome: %s\n", empregado.nome);
    printf("Salario: %.2f\n", empregado.salario);
    printf("Codigo: %d\n", empregado.codigo);

    return 0;
}
    

    