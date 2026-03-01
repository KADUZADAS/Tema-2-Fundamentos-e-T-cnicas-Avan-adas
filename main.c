#include <stdio.h>

int main()
{
 int opcao;
   
   printf("=== MENU ===\n");
   printf("1 - Mostrar mensagem\n");
   printf("2 Sair\n");
   printf("Escolha: ");
   scanf("%d",&opcao);

    if(opcao ==1){
        printf("Fundadmentos de programacao em C\n");
    }
    return 0;
}
