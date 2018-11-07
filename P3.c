/*P3.c*/
/*Vinícius Soares de Freitas Mendonça*/
/*11811ETE017*/

#include <stdio.h>
int main(){
char string[256];
int i, x=0;
fflush(stdin);
scanf("%s", string);
for(i=0; string[i]!='\0'; i++)
if(string[i]>='0' && string[i]<='9')
x = x*10 + string[i] - 48;
printf("%d", x);
return 0;
}