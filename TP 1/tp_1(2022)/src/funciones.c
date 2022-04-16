/*
 * funciones.c
 *
 *  Created on: 12 abr. 2022
 *      Author: Federico Viegas Palermo
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float PrecioDebito(float precio)
{
	return precio*0.9;
}

float PrecioCredito(float precio)
{
	return precio*1.25;
}

float PrecioBitcoin(float precio)
{
	return precio/4606954.55;
}

float PrecioPorKilometro(float precio,float kilometros)
{
	return precio/kilometros;
}

float PrecioDiferencia(float precioAerolineas,float precioLatam)
{
	float diferencia;

	if(precioAerolineas>precioLatam)
	{
		diferencia=precioAerolineas-precioLatam;
	}
	else
	{
		diferencia=precioLatam-precioAerolineas;
	}

	return diferencia;
}

void informarResultados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float dif)
{
	printf("\n\n*** INFORME DE RESULTADOS ***\n\n");
	printf("Latam: \n");
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoLatam);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoLatam);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinLatam);
	printf("d) Precio unitario: %f\n",precioUnitarioLatam);
	printf("Aerolineas: \n");
	printf("a) Precio con tarjeta de debito: %.2f\n",precioDebitoAerolineas);
	printf("b) Precio con tarjeta de credito: %.2f\n",precioCreditoAerolineas);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinAerolineas);
	printf("d) Precio unitario: %.2f\n",precioUnitarioAerolineas);
	printf("La diferencia de precio es: %.2f\n\n",dif);
}

void informarResultadosHarcodeados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float dif,float kms
						,float y,float z)
{
	printf("*** INFORME DE RESULTADOS ***\n\n");
	printf("KMs Ingresados: %d km\n\n",(int)kms);

	printf("Precio Aerolineas: $%.2f\n",y);
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoAerolineas);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoAerolineas);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinAerolineas);
	printf("d) Mostrar precio unitario: $%.2f\n\n",precioUnitarioAerolineas);

	printf("Precio Latam: $%.2f\n",z);
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoLatam);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoLatam);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinLatam);
	printf("d) Mostrar precio unitario: $%.2f\n\n",precioUnitarioLatam);
	printf("La diferencia de precio es: %.2f\n\n",dif);

}

int Menu(float kms,float y,float z)
{
	int opcion;

	printf("1.Ingresar Kilometros: ( km= %.2f)\n",kms);
	printf("2.Ingresar precio de vuelos: (Aerolineas= %.2f , Latam= %.2f)\n",y,z);
	printf("3.Calcular todos los costos: \n");
	printf("a) Tarjeta de débito (descuento 10%%)\n");
	printf("b) Tarjeta de crédito (interés 25%%)\n");
	printf("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf("d) Mostrar precio por km (precio unitario)\n");
	printf("e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");
	printf("4.Informar resultados\n");
	printf("5.Carga forzada de datos\n");
	printf("6.Salir\n");
	scanf("%d",&opcion);

	return opcion;
}

int subMenu()
{
	int opcion;

	printf(" 1- Precio vuelo Aerolineas: \n");
	printf(" 2- Precio vuelo Latam: \n");
	printf(" 3- Salir\n");
	scanf("%d",&opcion);

	return opcion;
}

