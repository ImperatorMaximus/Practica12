#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>
#include "complex.h"

complex suma(complex a, complex b);
complex resta(complex a, complex b);
complex multi(complex a, complex b);
complex div(complex a, complex b);
complex con(complex a);
 
void menu();
void print_complex (complex a); 
void leer_complex (complex *a);

#endif
