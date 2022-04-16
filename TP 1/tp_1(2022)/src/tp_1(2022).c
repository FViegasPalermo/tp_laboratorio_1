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

	setbuf(stdout,NULL);


	float kms;
	float y; //Precio vuelo Aerolineas
	float z; //Precio vuelo Latam
	int menuDeOpciones=0;
	int submenuDeOpciones=0;
	int flagKilometros=0;
	float precioDebitoAerolineas;
	float precioDebitoLatam;
	float precioCreditoAerolineas;
	float precioCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float dif;


	do{
		menuDeOpciones=Menu( kms, y, z);


	switch (menuDeOpciones)
	{

	case 1:
		printf ("Ingrese kilometros: ");
		scanf ("%f",&kms);
		flagKilometros=1;
		break;

	case 2:
		if (flagKilometros==0)
		{
			printf ("Error. Por favor ingrese los kilometros: ");
		}
		else

		{
			submenuDeOpciones=subMenu();
			switch (submenuDeOpciones)
			{
			case 1:
				printf ("Ingrese precio vuelo Aerolineas: \n");
				scanf("%f",&y);

				break;

			case 2:
				printf ("Ingrese precio vuelo Latam: \n");
				scanf("%f",&z);

				break;

			}
		}break;

	case 3:

					precioDebitoAerolineas = PrecioDebito(y);
					precioDebitoLatam = PrecioDebito(z);
					precioCreditoAerolineas = PrecioCredito(y);
					precioCreditoLatam = PrecioCredito(z);
					precioBitcoinAerolineas = PrecioBitcoin(y);
					precioBitcoinLatam = PrecioBitcoin(z);
					precioUnitarioAerolineas = PrecioPorKilometro(y, kms);
					precioUnitarioLatam = PrecioPorKilometro(z,kms);
					dif = PrecioDiferencia(y,z);

					printf("Estamos calculando el costo de su vuelo \n\n");

					break;

	case 4:

		informarResultados (precioDebitoAerolineas, precioDebitoLatam,
				precioCreditoAerolineas, precioCreditoLatam,
				precioBitcoinAerolineas, precioBitcoinLatam,
				precioUnitarioAerolineas, precioUnitarioLatam,
				dif);

				break;

	case 5:
		//Carga forzada de datos (resultados harcodeados)
		kms = 7090;
		y = 162965;
		z = 159339;

		precioDebitoAerolineas = PrecioDebito(y);
		precioDebitoLatam = PrecioDebito(z);
		precioCreditoAerolineas = PrecioCredito(y);
		precioCreditoLatam = PrecioCredito(z);
		precioBitcoinAerolineas = PrecioBitcoin(y);
		precioBitcoinLatam = PrecioBitcoin(z);
		precioUnitarioAerolineas = PrecioPorKilometro(y,kms);
		precioUnitarioLatam = PrecioPorKilometro(z,kms);
		dif = PrecioDiferencia(y,z);

		informarResultadosHarcodeados(precioDebitoAerolineas,
		precioDebitoLatam, precioCreditoAerolineas,
		precioCreditoLatam, precioBitcoinAerolineas,
		precioBitcoinLatam, precioUnitarioAerolineas,
		precioUnitarioLatam, dif, kms,
		y, z);

		break;

	case 6:

		printf ("Gracias por elegir AgenTour");

		break;

	}

	}while(menuDeOpciones != 6);
	return EXIT_SUCCESS;
}

