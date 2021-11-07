#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int a=1;
    int b=2;
    int c;
    char login;
    char senha;
    char reg1;
    char reg2;

    while (c != a && c !=b){
        printf("Digite uma das opões sergir\n");
        printf("(1) Se ja tiver Login cadastrado:\n");
        printf("(2) Para Cadastrar um Login:");
            scanf("%d",&c);

        printf("\nValor invalido digite os valor correto\n");

        if (b == c){
            printf("\n\t\t---REGISTRO USUARIO---");

            printf("\n\n\t\tResgistro Login:");
                scanf("%s", &reg1);

            printf("\n\n\t\tRegistro Senha:");
                scanf("%s", &reg2);
            printf("\n\t\t\tUsurario Registrado!\n");

        }else{
            printf("\nUsuario ja cadastrado\n");
        }
    }

        printf("\n\t\t ---LOGIN---");

        printf("\n\t\t login: ");
            scanf("%s", &login);

        printf("\n\t\t Senha: ");
            scanf("%s", &senha);

        if(login == reg1 && senha == reg2){
            printf("Usuario Logado");
        }
        else if(login != reg1 && senha != reg2){
            printf("Dados Invalido");
        }


    return 0;
}
