#include <stdio.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL,"");
    int opcmenu, opcmenu1, opcmenu2, opcmenu3, op2, op3, op4, op5, nquarto, nquarto1, nquarto2;
    char *camareira, hotel, op1[50], op11[50], pedido[50];
    
    do{
	
    printf("Bem-vindo(a) ao hotel Mar's!\n");
    printf ("Quais são seus interesses?\n");
    printf ("1- Fazer checkin.\n");
    printf ("2- Solitar serviço de quarto.\n");
    printf ("3- Fazer pedido.\n");
    printf ("4 -sair\n");
    scanf("%d", &opcmenu);
    
    switch (opcmenu) {
    
    case 1:
        printf("Complete as informações a seguir\n");
        printf("Nome:\n");
        scanf("%s", op1);
        printf("Sobrenome:\n");
        scanf("%s", op11);
        printf("CPF:\n");
        scanf("%d", &op2);
        printf("Cartão:\n");
        scanf("%d", &op3);
        printf("CEP:\n");
        scanf ("%d", &op4);
        printf("Quantas pessoas:\n");
        scanf ("%d", &op5);
        printf("Obrigado!");
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
        printf("Obrigado!");
    break;

    case 3: 
        printf("Qual pedido deseja fazer?\n");
        scanf("%s", pedido);
        printf("Escreva o numero do seu quarto:\n");
        scanf("%d", &nquarto2);
        printf("Obrigado!");
    break;

    default: 
		("digite numero valido");
	}
    }while (opcmenu != 4);
    
return 0;
}

