/* P6.c */
/* Vinícius Soares de Freitas Mendonça */
/* 11811ETE017 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
float x, y;
}pto;
pto * gera(int X)
{
pto * p = (pto *) calloc(X, sizeof(pto));
int i;
for(i=0; i<X; i++)
{
p[i].x = cos(i * 2.0 * M_PI / (X - 1));
p[i].y = sin(i * 2.0 * M_PI / (X - 1));
}
return p;
}
void mostrar_ptos(pto * pto_inicial, pto * pto_final)
{
if(pto_inicial < pto_final)
{
printf("(%.3lf, %.3lf)", pto_inicial -> x, pto_inicial -> y);
mostrar_ptos(pto_inicial + 1, pto_final);
}
}
int main()
{
unsigned int X;
pto * p;
printf("Quantos ptos deseja? ");
scanf("%u", &X);	getchar();
p = gera(X);
mostrar_ptos(p, p + X);
free(p);
}