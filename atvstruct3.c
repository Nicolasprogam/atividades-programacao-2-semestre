
#include <stdio.h>
#include <string.h>
typedef struct{
    char descricao[4];
    float valor;
    
}loja;

int main()
{
    loja produto[4];
    
    for(int i=0;i <4;i++){
        scanf("%s",produto[i].descricao);
        scanf("%f",&produto[i].valor);
    }
    
    for(int i=4;i>=0;i--){
        printf("descricao = %s\n",produto[i].descricao);
        printf("valor = %f\n",produto[i].valor);
    }

    return 0;
}
    
    