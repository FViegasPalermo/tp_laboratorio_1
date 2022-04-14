/*
 ============================================================================
 Name        : tp_1(2022).c
 Author      : Federico Viegas Palermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*
	 * 1 Enunciado
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
 2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
 3. Calcular todos los costos:
 a) Tarjeta de débito (descuento 10%)
 b) Tarjeta de crédito (interés 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
 4. Informar Resultados
“Latam:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerolíneas:
 a) Precio con tarjeta de débito: r
 b) Precio con tarjeta de crédito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir
	 */


int main(void) {

	float kms;
	float y; //Precio vuelo Aerolineas
	float z; //Precio vuelo Latam



	setbuf(stdout,NULL);

	do{

		printf ("Bienvenido a AgenTour");
		printf ("1. Ingresar Kilómetros: ( km=x) : %f\n",kms);
		printf ("2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n");
		printf ("Precio vuelo Aerolineas:  %f\n",y);
		printf ("Precio vuelo Latam:  %f\n",z);
		printf ("3. Calcular todos los costos\n");
		printf ("a) Tarjeta de débito (descuento 10%) \n ");
		printf ("b) Tarjeta de crédito (interés 25%)\n ");
		printf ("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");
		printf ("d) Mostrar precio por km (precio unitario) \n ");
		printf ("e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n");
		printf ("4-Informar  resultados\n");


		printf ("5. Carga forzada de datos");
		printf ("6. Salir\n");

	switch (opcion)
	{

	case 1:
		printf ("Ingrese")


	}








	return EXIT_SUCCESS;
}
