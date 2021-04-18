#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	float numero1 = 0;
	float numero2 = 0;
	int respuestaSuma;
	int respuestaResta;
	int respuestaMultiplicacion;
	int respuestaDivision;
	int respuestaFactorial;
	int respuestaFactorial2;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	float resultadoFactorial;
	float resultadoFactorial2;
	int flag = 0;
	int flagB = 0;
	int flagC = 0;
	do
	{
		printf("\nSelecciona una opcion\n");
		printf("1-Ingresa primer operando(A = %.2f)\n",numero1);
		printf("2-Ingresa segundo operando(B = %.2f)\n",numero2);
		printf("3-Calcular todas las operaciones\n");
		printf("4-Informar resultados\n");
		printf("5-Salir\n");
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
     			if(utn_getNumero(&numero1,"Ingresa el numero\n","\n Volve a ingresar el numero\n",-50,50,3)==0){
     				printf("\nNumero correctamente ingresado\n");
     				flag = 1;
     			}
				break;
			case 2:
				if(utn_getNumero(&numero2,"Ingresa el siguiente numero\n","\n Volve a ingresar el numero\n",-50,50,3)==0){
					printf("\nNumero correctamente ingresado\n");
					flagB = 1;
				}
				break;
			case 3:
				if(flag == 1 && flagB == 1){
				respuestaSuma = sumar(&resultadoSuma,numero1,numero2);
				respuestaResta = restar(&resultadoResta,numero1,numero2);
				respuestaMultiplicacion = multiplicar(&resultadoMultiplicacion,numero1,numero2);
				respuestaDivision = dividir(&resultadoDivision,numero1,numero2);
				respuestaFactorial = sacarFactorial(&resultadoFactorial,numero1);
				respuestaFactorial2 = sacarFactorial(&resultadoFactorial2,numero2);
				flagC = 1;
				}
				else{
					printf("\nIngrese correctamente ambos numeros\n");
				}
				break;
			case 4:
				if(flag == 1 && flagB == 1 && flagC ==1){
					if(!respuestaSuma)
					{
						printf(" El resultado de %.2f + %.2f = %.2f",numero1,numero2,resultadoSuma);
					}
					else
					{
						printf("Error en la suma\n");
					}
					if(!respuestaResta)
					{
						printf("\n El resultado de %.2f - %.2f = %.2f",numero1,numero2,resultadoResta);
					}
					else
					{
						printf("Error en la resta");
					}
					if(!respuestaMultiplicacion)
					{
						printf("\n El resultado de %.2f * %.2f = %.2f",numero1,numero2,resultadoMultiplicacion);
					}
					else
					{
					 printf("Error en la multiplicacion");
					}
					if(!respuestaDivision)
					{
						 printf("\n El resultado de %.2f / %.2f = %.2f",numero1,numero2,resultadoDivision);
					}
					else
					{
						printf("\n Error en la division, no se puede dividir por 0");
					}
					if(!respuestaFactorial)
					{
						printf("\n El factorial de  %.2f es %.2f \n ",numero1,resultadoFactorial);
					}
					else
					{
						printf("\n Error, no se puede sacar el factorial de 0 o de un numero negativo\n");
					}
					if(!respuestaFactorial2)
					{
						printf("El factorial de  %.2f es %.2f \n ",numero2,resultadoFactorial2);
					}
					else
					{
						printf("\n Error, no se puede sacar el factorial de 0 o de un numero negativo\n");
					}
				}
				else{
					printf("\nIngrese correctamente ambos numeros y calculelos\n");
				}
			    break;
			case 5:
				printf("Adios!");
				break;
			default:
				printf("\nError!Ingresá un numero del 1 al 5\n");
			}
	}
	while(opcion <= 4);
	return 0;
}
