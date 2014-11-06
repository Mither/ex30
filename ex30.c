#include <stdio.h>

int caio(int c);
int rodrigo(int a);
int calado(int k);
int nmrn(int x);
int wesley(int x);//declaração da função Wesley entrada inteira x
int ruben(int x);	
int vinicius(int x);
int regina(int x);
int victor(int x);
int mither(int x);

int main(void)
{
	int i=1;
	i = nmrn(i);
	i = wesley(i);
	i = ruben(i);
	i = calado(i);
	i = caio(i);
	i = rodrigo(i);
	i = vinicius(i);
	i = mither(i);
	printf ("o prgrama termina aqui \n");
	return 0;
}

int calado(int k)
{
	return k+3;
}

int nmrn(int x)
{	
	return x-1;
}

int wesley(int x)//função wesley, recebe initeiro
{
	        return x*157; //retorna o numero inteiro de entrada multiplicado a 157
}

int vinicius(int x)
{
	return x=1;
}

int ruben(int x)
{
	return x+1;

}

int caio(int c)
{
	return c+10;
}

int rodrigo(int a)
{
	return a+6;
}

int regina(int x)
{
	return x+23;
}
int victor(int x)
{
	return x+x;
}
int mither(int x)
{
	return x * 8;
}

