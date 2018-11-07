/*p2.c*/
/*Vinícius Soares de Freitas Mendonça*/
/*11811ETE017*/

#include <stdio.h>

int decimalpara(int nros[], int nro, int contador, int divisor){
int quociente = 1;
for(contador = 0; quociente != 0; contador++){
nros[contador] = nro%divisor;
quociente = nro/divisor;
nro = nro/divisor;
}
contador--;
return contador;
}
int paradecimal(char bits[], int nros[], int nro, int contador, int base){
int j, k, potencia;
contador--;
for(j = contador; j >= 0; j--){
potencia = 1;
for(k = contador; k > j; k--)
potencia *= base;
nros[j] = nros[j]*potencia;
}
for(j = 0; j <= contador; j++)
nro = nro + nros[j];
sprintf(bits, "%d", nro);
return nro;
}
int string_vetor(char bits[], int nros[], int contador){
for(contador = 0; bits[contador] != '\0'; contador++){
if(bits[contador] == '0')
nros[contador] = 0;
else if(bits[contador] == '1')
nros[contador] = 1;
else if(bits[contador] == '2')
nros[contador] = 2;
else if(bits[contador] == '3')
nros[contador] = 3;
else if(bits[contador] == '4')
nros[contador] = 4;
else if(bits[contador] == '5')
nros[contador] = 5;
else if(bits[contador] == '6')
nros[contador] = 6;
else if(bits[contador] == '7')
nros[contador] = 7;
else if(bits[contador] == '8')
nros[contador] = 8;
else if(bits[contador] == '9')
nros[contador] = 9;
else if(bits[contador] == 'A' || bits[contador] == 'a')
nros[contador] = 10;
else if(bits[contador] == 'B' || bits[contador] == 'b')
nros[contador] = 11;
else if(bits[contador] == 'C' || bits[contador] == 'c')
nros[contador] = 12;
else if(bits[contador] == 'D' || bits[contador] == 'd')
nros[contador] = 13;
else if(bits[contador] == 'E' || bits[contador] == 'e')
nros[contador] = 14;
else
nros[contador] = 15;
}
return contador;
}
int vetor_string(char bits[], int nros[], int contador){
int k, j;
for(j = contador, k = 0; j >= 0; j--, k++){
if(nros[j] == 0)
bits[k] = 48;
else if(nros[j] == 1)
bits[k] = 49;
else if(nros[j] == 2)
bits[k] = 50;
else if(nros[j] == 3)
bits[k] = 51;
else if(nros[j] == 4)
bits[k] = 52;
else if(nros[j] == 5)
bits[k] = 53;
else if(nros[j] == 6)
bits[k] = 54;
else if(nros[j] == 7)
bits[k] = 55;
else if(nros[j] == 8)
bits[k] = 56;
else if(nros[j] == 9)
bits[k] = 57;
else if(nros[j] == 10)
bits[k] = 'A';
else if(nros[j] == 11)
bits[k] = 'B';
else if(nros[j] == 12)
bits[k] = 'C';
else if(nros[j] == 13)
bits[k] = 'D';
else if(nros[j] == 14)
bits[k] = 'E';
else
bits[k] = 'F';
}
bits[k] = '\0';
return contador;
}
int main(){
int nro, opcao, nros[255], contador;
char bits[256];
printf("\nESCOLHA UMA OPÇÃO: \n 1 - BINÁRIO/DECIMAL \n 2 - BINÁRIO/HEXADECIMAL");
printf("\n 3 - HEXADECIMAL/DECIMAL \n 4 – HEXADECIMAL/BINÁRIO \n 5 - DECIMAL/BINÁRIO ");
printf("\n DECIMAL/HEXADECIMAL \n 7 - OCTAL/DECIMAL \n 8 - DECIMAL/OCTAL ");
printf("\n DIGITE OUTRO VALOR PARA SAIR DO PROGRAMA");
do{
contador = 0; nro = 0;
printf("\nOpção: ");
scanf("%d",&opcao); getchar();
switch(opcao){
case 1:
printf("Informe um número binário: ");
scanf("%s", bits);
contador = string_vetor(bits, nros, contador);
nro = paradecimal(bits, nros, nro, contador, 2);
printf("\n	O número em decimal é: %s \n", bits);
break;
case 2:
printf("Informe um número binário: ");
scanf("%s", bits);
contador = string_vetor(bits, nros, contador);
nro = paradecimal(bits, nros, nro, contador, 2);
contador = decimalpara(nros, nro, contador, 16);
contador = vetor_string(bits, nros, contador);
printf("\n	O número em hexadecimal é: %s \n", bits);
break;
case 3:
printf("Informe um número hexadecimal: ");
scanf("%s", bits);
contador = string_vetor(bits, nros, contador);
nro = paradecimal(bits, nros, nro, contador, 16);
printf("\n	O número em decimal é: %s \n", bits);
break;
case 4:
printf("Informe um número hexadecimal: ");
scanf("%s", bits);
contador = string_vetor(bits, nros, contador);
nro = paradecimal(bits, nros, nro, contador, 16);
contador = decimalpara(nros, nro, contador, 2);
contador = vetor_string(bits, nros, contador);
printf("\n	O número em binário é: %s \n", bits);
break;
case 5:
printf("Informe um número decimal: ");
scanf("%d", &nro);
contador = decimalpara(nros, nro, contador, 2);
contador = vetor_string(bits, nros, contador);
printf("\n	O número em binário é: %s \n", bits);
break;
case 6:
printf("Informe um número decimal: ");
scanf("%d", &nro);
contador = decimalpara(nros, nro, contador, 16);
contador = vetor_string(bits, nros, contador);
printf("\n	O número em hexadecimal é: %s \n", bits);
break;
case 7:
printf("Informe um número octal: ");
scanf("%s", bits);
contador = string_vetor(bits, nros, contador);
nro = paradecimal(bits, nros, nro, contador, 8);
printf("\n	O número em decimal é: %s \n", bits);
break;
case 8:
printf("Informe um número decimal: ");
scanf("%d", &nro);
contador = decimalpara(nros, nro, contador, 8);
contador = vetor_string(bits, nros, contadorador);
printf("\n	O número em octal é: %s \n", bits);
break;
default:
return 0;
}
}while(opcao >= 1 && opcao <=8);
}
