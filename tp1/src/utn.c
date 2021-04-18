#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(float* resultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	float bufferFloat;
	if(resultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
		   printf("%s", mensaje);
		   scanf("%f",&bufferFloat);
		   if(bufferFloat >= minimo && bufferFloat <= maximo)
		   {
			   *resultado = bufferFloat;
			   retorno = 0;
			   break;
		   }
		   else
		   {
			   printf("%s",mensajeError);
			   reintentos --;
		   }
		}
	    while(reintentos >= 0);
	}
	return retorno;
}
int sumar(float* resultado,float numero1,float numero2)
{
	float bufferFloat;
	int retorno = -1;
	if(resultado != NULL)
	{
		 bufferFloat = numero1 + numero2;
		*resultado = bufferFloat;
		retorno = 0;
	}
	return retorno;
}
int restar(float* resultado,float numero1,float numero2)
{
	float bufferFloat;
	int retorno = -1;
	if(resultado != NULL)
	{
		 bufferFloat = numero1 - numero2;
		 *resultado = bufferFloat;
		 retorno = 0;
	}
	return retorno;
}

int multiplicar(float* resultado,float numero1,float numero2)
{
	float bufferFloat;
    int retorno = -1;
	if(resultado != NULL)
	{
	   bufferFloat = numero1 * numero2;
	   *resultado = bufferFloat;
	   retorno = 0;
	}
	return retorno;
}
int dividir(float* resultado,float numero1,float numero2)
{
	float bufferFloat;
	int retorno = -1;
	if(resultado != NULL && numero2 != 0)
	{
		 bufferFloat = numero1 / numero2;
		 *resultado = bufferFloat;
		 retorno = 0;
	}
	return retorno;
}
int sacarFactorial(float* resultado,float numero)
{
	int retorno = -1;
	float acumulador = 1;
	int i;
	if(resultado != NULL && numero > 0)
	{
		for(i=1;i<=numero;i++)
		{
           acumulador = acumulador * i;
		}
		*resultado = acumulador;
		retorno = 0;
	}

	return retorno;

}

