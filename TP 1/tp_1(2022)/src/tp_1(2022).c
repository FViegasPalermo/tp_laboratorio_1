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
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
para ofrecerlos a sus clientes.
Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar Kil�metros: ( km=x)
 2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
 3. Calcular todos los costos:
 a) Tarjeta de d�bito (descuento 10%)
 b) Tarjeta de cr�dito (inter�s 25%)
 c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
 d) Mostrar precio por km (precio unitario)
 e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
 4. Informar Resultados
�Latam:
 a) Precio con tarjeta de d�bito: r
 b) Precio con tarjeta de cr�dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 Aerol�neas:
 a) Precio con tarjeta de d�bito: r
 b) Precio con tarjeta de cr�dito: r
 c) Precio pagando con bitcoin : r
 d) Precio unitario: r
 La diferencia de precio es : r �
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
		printf ("1. Ingresar Kil�metros: ( km=x) : %f\n",kms);
		printf ("2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)\n");
		printf ("Precio vuelo Aerolineas:  %f\n",y);
		printf ("Precio vuelo Latam:  %f\n",z);
		printf ("3. Calcular todos los costos\n");
		printf ("a) Tarjeta de d�bito (descuento 10%) \n ");
		printf ("b) Tarjeta de cr�dito (inter�s 25%)\n ");
		printf ("c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n");
		printf ("d) Mostrar precio por km (precio unitario) \n ");
		printf ("e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas) \n");
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
