#ifndef letrero_h
#define letrero_h
#include <stdio.h>
void Letrero(){
    int i;
	printf("\n     ======================================================================\n");
	printf("\t\t\t\t    Analisis Numerico\n");
    printf("\t\t\t\t        Grupo: 06\n");
    printf("\t\t   Metodo de eliminacion completa de Gauss-Jordan\n");
    printf("\n     ======================================================================\n");
    printf("\t\t     Integrantes:\tCesar Mejia, Daniel Ruiz\n");
    printf("\t\t     \t\t\tEduardo Jaimes, Leonardo Acevedo,\n");
	printf("\t\t     \t\t\tLuis Barcenas  y Gomez, Rodrigo\n");
    printf("\t\t\t\t        UNAM \n");
	printf("     ======================================================================\n");

	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

#endif