/* P1.c */
/* Vinícius Soares de Freitas Mendonça */
/* 11811ETE017 */

#include <stdio.h>
 
int main(){
int estado = 0;
int i = 0;
char nro[256];
printf("Digite o numero em binario: \n");
scanf("%s", nro);
while(nro[i] != '\0'){
if(nro[i] == '0'){
if(estado == 0);
else if(estado == 1) estado = 2;
else if(estado == 2) estado = 1;
i++;
}
else if(nro[i] == '1'){
if(estado == 0) estado = 1;
else if(estado == 1) estado = 0;
else if(estado == 2);
i++;
}
else{
printf("O numero que foi digitado nao e binario\n");
 return 0;
}}
if(estado == 0) printf("O numero %s e multiplo de 3\n",nro);
else printf("O numero %s nao e multiplo de 3\n",nro);
return 0;
}
