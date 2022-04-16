/*
 * funciones.h
 *
 *  Created on: 12 abr. 2022
 *      Author: Federico Viegas Palermo
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

float PrecioDebito(float precio);
/*
 * Brief: Realiza la cuenta del precio pagando con debito
 * Param: precio
 * Return: Devuelve el precio con el descuento correspondiente (en formato float)
 */


float PrecioCredito(float precio);

/*
 * Brief: Realiza la cuenta del precio pagando con credito
 * Param: precio
 * Return: Devuelve el precio con el interes correspondiente (en formato float)
 */



float PrecioBitcoin(float precio);

/*
 * Brief: Realiza la cuenta del precio pagando con Bitcoin
 * Param: precio
 * Return: Devuelve el precio pagando con BTC, teniendo en cuenta que 1BTC= 4606954.55 pesos argentinos(en formato float)
 */



float PrecioPorKilometro(float precio,float kms);

/*
 * Brief: Realiza la cuenta del precio que se paga por kilometro
 * Param: precio
 * Param: kms
 * Return: Devuelve el precio que se paga por kilometro (en formato float)
 */


float PrecioDiferencia(float precioAerolineas,float precioLatam);

/*
 * Brief: Calcula la diferencia entre el precio de un vuelo por Aerolineas y un vuelo por Latam
 * Param: precioAerolineas
 * Param: precioLatam
 * Return: Devuelve el precio de la diferencia entre un vuelo de Aerolineas y uno de Latam  (en formato float)
 */


void informarResultados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float dif);

/*
 * Brief: Muestra el resultado de las operaciones realizadas
 * Param: (ver los parametros en el prototipo de la funcion)
 * Return: -
 */


void informarResultadosHarcodeados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float dif,float kms
						,float y,float z);

/*
 * Brief: Muestra el resultado de las operaciones basandose en datos harcodeados
 * Param: (ver los parametros en el prototipo de la funcion)
 * Return: -
 */



int Menu(float kms,float y,float z);

/*
 * Brief: Menu principal de opciones
 * Param: kms
 * Param: y
 * Param: z
 * Return: Devuelve la opcion escogida por el usuario (como un int)
 */


int subMenu();

/*
 * Brief: Menu accesorio que permite al usuario el ingreso del precio de un vuelo de aerolineas y/o de un vuelo de Latam
 * Param: -
 * Return: Devuelve la opcion escogida por el usuario (como un int)
 */


#endif /* FUNCIONES_H_ */
