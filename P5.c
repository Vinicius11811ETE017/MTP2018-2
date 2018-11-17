/* P5.c */
/* Vinícius Soares de Freitas Mendonça */
/* 11811ETE017 */
#include <stdio.h>
typedef
unsigned long long int
Bytes8;
typedef
struct LCG { Bytes8 a, c, m, rand_max, atual; }
LCG;
void semente(LCG * r, Bytes8 seed)
{	
r->a = 0x5DEECE66DULL;
r->c = 11ULL;
r->m = (1ULL << 48);
r->rand_max = r->m - 1;
r->atual = seed;
}
Bytes8 lcg_rand(LCG * r) 
{
r->atual = (r->a * r->atual + r->c) % r->m;
return r->atual;
}
double lcg_rand_01(LCG * r) 
{
return ((double) lcg_rand(r))/(r->rand_max);
}
void gera_numeros(float * v, int tamanho, float min, float max, LCG * r)
{
int i;
for(i = 0; i < tamanho; i++)
v[i] = (max-min)*lcg_rand_01(r) + min;
}
float soma(float *i_v, float *f_v)
{
if(f_v == i_v)
return *i_v;
else
return *(f_v--) + soma(i_v, f_v--);
}
float prod(float *i_v, float *f_v)
{
if(f_v == i_v)
return *i_v;
else
return *(f_v--) * prod(i_v, f_v--);	
}
int main ()
{
LCG random;semente(&random, 123456);
int opcao, N = 50;
float v[50];
gera_numeros(v, N, 0.5, 1.5, &random);
printf("1 - Somatorio\n2 - prodrio\n\n");
printf("Serao gerados 50 numeros aleatorios\nOpcao: ");
scanf("%d", &opcao);
getchar();
opcao == 1 ? printf("\n%f", soma(&v[0], &v[49])) : printf("\n%f", prod(&v[0], &v[49]));
return 0;	
}