#include <stdio.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL,"");
    int opcmenu, opcmenu1, opcmenu2, opcmenu3, op2, op3, op4, op5, nquarto, nquarto1, nquarto2;
    char *camareira, hotel, op1[50], pedido[50];
    
    printf("Bem-vindo(a) ao hotel Mar's!\n");
    printf ("Quais são seus interesses?\n");
    printf ("1- Fazer checkin.\n");
    printf ("2- Solitar serviço de quarto.\n");
    printf ("3- Fazer pedido.\n");
    scanf("%d", &opcmenu);
    
    switch (opcmenu) {
    
    case 1:
        printf("Complete as informações:\n");
        printf("1- Nome completo:\n");
        scanf("%s", op1);
        printf("2- CPF:\n");
        scanf("%d", &op2);
        printf("3- Cartão:\n");
        scanf("%d", &op3);
        printf("4- CEP:\n");
        scanf ("%d", &op4);
        printf("5- Quantas pessoas:\n");
        scanf ("%d", &op5);
    break;

    case 2:
        printf("Selecione as opções desejadas:\n");
        printf("1- Camareira\n");
        printf("2- Comida\n");
        printf("3- Cobertores\n");
        printf("4- Toalhas\n");
        scanf ("%d", &op2);
        printf("Escreva seu numero de quarto:\n");
        scanf("%d", &nquarto);
    break;

    case 3: 
        printf("Qual pedido deseja fazer?\n");
        scanf("%s", pedido);
        printf("Escreva o numero do seu quarto:\n");
        scanf("%d", &nquarto2);
    break;
    default:
    return 1;
    }
    
    
    
        
    
return 0;
}

