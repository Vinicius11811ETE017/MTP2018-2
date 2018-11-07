/*P4.c*/
/*Vinícius Soares de Freitas Mendonça*/
/*11811ETE017*/

#include<stdio.h>
int funcao (int a, int b);
int main(){
int a,b;
scanf("%d%d",&a,&b);
printf("%d\n",funcao(a,b));
}
int funcao (int a, int b){
if(a==0){return b+1;}
if(a>0 && b==0){return funcao(a-1,1);}
if(a>0 && b>0){return funcao(a-1,funcao(a,b-1));
}}