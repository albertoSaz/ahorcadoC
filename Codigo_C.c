#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
char frase[60],rep[100],temporal[100];
char pal=-87;
int longitud=0,i,j=0,inicial=0,acertado=0,temp=0,oportunidades=5;
int repetido=0,gano=0;

printf("\tJuego del Ahorcado\n");
printf("\t\t\t__\n\t\t\t| |\n\t\t\t| 0\n\t\t\t|/|\\ \n\t\t\t|/ \\ ");
printf("Di una palabra para adivinar:\n");
gets(frase);

system("cls");

do {

temp=0;

if(inicial == 0) {
for(i=0;i<strlen(frase);i++) {
if(frase[i] == ' ') {
temporal[i] = ' ';
longitud++;
}
else {
temporal[i] = '_';
longitud++;
}
}
inicial = 1;
temporal[longitud] = '\0';
}
else {

for(i=0;i<strlen(rep);i++) {
if(rep[i] == pal) {
repetido = 1;
break;
}
else {
repetido = 0;
}
}

if(repetido == 0) {
rep[j] = pal;
j++;
for(i=0;i<strlen(frase);i++) {
if(frase[i] == pal) {
temporal[i] = pal;
acertado++;
temp=1;
}
}
}

if(repetido == 0) {
if(temp == 0 && pal!=-87) {
oportunidades = oportunidades - 1;
}

system("cls");

for(i=0;i<strlen(temporal);i++) {
printf(" %c ",temporal[i]);
}

printf("\n");

if(strcmp(frase,temporal) == 0) {
gano = 1;
break;
}
printf("\n");
printf("Letras Acertadas: %d",acertado);
printf("\n");
printf("Oportunidades Restantes: %d",oportunidades);
printf("\n");
}
else {
printf("Ya se ha introducido la '%c' en esta partida. ",pal);
}
if (oportunidades!=0)
{
printf("Introduzca una letra:");
scanf(" %c",&pal);
}

}

}while(oportunidades != 0);


if(gano) {
printf("\n\n");
printf("Enhorabuena, has ganado :)");

}
else {
printf("\n\n");
printf("Has perdido.\n");
printf("\t\t\t__\n\t\t\t| |\n\t\t\t| 0\n\t\t\t|/|\\ \n\t\t\t|/ \\ ");
printf("R.I.P");
}

printf("\n\n");
system("PAUSE");
return 0;
}
