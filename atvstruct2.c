
#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[30];
    char cidade[20];
    unsigned long int CEP;
} endereco;

int main()
{
    endereco pessoa[3];
    int i;
    for(i=0;i <3;i++){
        scanf("%s", pessoa->nome);
        
        scanf("%s", pessoa->cidade);
        
        scanf("%lu",&pessoa->CEP);
       for(i=0;i <1;i++){
    printf("nome = %s\n",pessoa->nome);       
    printf("cidade = %s\n",pessoa->cidade);
    printf("CEP = %lu\n",pessoa->CEP);
    
       }
    }
    

    return 0;
}
    
    