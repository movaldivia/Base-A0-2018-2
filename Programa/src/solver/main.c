#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Modo de uso: ./solver test.txt\n");
		return 0;
	}

	/* Abrimos el archivo input en modo de lectura */
	FILE *input_file = fopen(argv[1], "r");

	/* Abrimos el archivo output en modo de escritura */
	FILE *output_file = fopen("output.txt", "w");

	/* Revisa que el archivo fue abierto correctamente */
	if (!input_file)
	{
		printf("¡El archivo %s no existe!\n", argv[1]);
		return 2;
	}

	/* Definimos y asignamos las constantes del problema */
	int n; int m; int l;
	fscanf(input_file, "%d %d %d", &n, &m, &l);

	for (int i = 0; i < l; i++)
	{
		/* Definimos las variables del problema */
		int o; int r; int c; int k;

		/* Leemos cada linea del archivo */
		fscanf(input_file, "%d %d %d %d", &o, &r, &c, &k);

		//////////////// Aqui agrega tu código ///////////////////

	}

	/* Cerramos los archivos correctamente */
	fclose(input_file);
	fclose(output_file);

	///////////////// Recuerda que antes de acabar tu programa debes liberar toda la memoria reservada ///////////////////


	/* Esta linea indica que el programa termino sin errores*/
	return 0;
}
