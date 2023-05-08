#include <stdio.h>
#include <conio.h>

#define ano 2023

int main () {

int idade;
printf("Qual a sua idade? ");
scanf("%d", &idade);
int ano_nascimento = ano-idade;
printf("O ano que voce nasceu e: %d\n", ano_nascimento);
getch();
return 0;

}
