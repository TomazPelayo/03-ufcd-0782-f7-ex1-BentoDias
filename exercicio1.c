// Escreva o seu c√≥digo a seguir
#include <stdio.h>
int main () {
    int a,a1,a2,res;
    char palavra [80];
    printf("O seu nome:\n");
    gets(palavra);
    printf("Dia de nascimento:\n");
    scanf("%d",&a);
    printf("Màs de nacimento:\n");
    scanf("%d",&a1);
    printf("Ano de nascimento:\n");
    scanf("%d",&a2);

    res=365*2023+30*2+15-365*a2-30*a1-a;

    printf("+------------------+\n");
    printf("| Dias de vida para|\n");
    printf("|   %3s          |\n",palavra);
    printf("+------------------+\n");
    printf("|   %3d           |\n",res);
    printf("+------------------+\n");



}    