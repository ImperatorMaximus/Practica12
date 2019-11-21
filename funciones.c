#include "funciones.h"

complex suma(complex a, complex b){
	complex r;
	r.real = a.real + b.real;
	r.img = a.img + b.img;
	return r;
}
complex resta(complex a, complex b){
	complex r;
	r.real = a.real - b.real;
	r.img = a.img - b.img;
	return r;
}
complex multi(complex a, complex b){
	complex r;
	r.real = (a.real*b.real-a.img*b.img);
	r.img = (a.real*b.img + a.img*b.real);	
	return r;
}
complex div(complex a, complex b){
	complex r;
	r.real = (a.real*b.real+b.img*a.img)/(b.real*b.real+b.img*b.img);
	r.img = (b.real*a.img-a.real*b.img)/(b.real*b.real+b.img*b.img);
	return r;
}
complex con(complex a){
	complex r;
	r.real = a.real;
	r.img = a.img*(-1);
	return r;
}
void menu(){
	int opcion;
	printf("Ingrese la operación deseada a ejecutar:\na)Suma\nb)Resta\nc)Multiplicacion\nd)División\	\ne)Conjugado\n");   

}
void print_complex (complex a){
	if a.img>0{
		printf("%f + %f\n", a.real, a.img);
	}
	if a.img<0{
		printf("%f - %f\n", a.real, a.img);
	if a.img=0{
		printf("%f\n", a.real);
	}
void leer_complex(complex *a){
	printf("Ingresa la parte real\n");
	scanf("%f", a->real);
	printf("Ingresa la parte imaginaria\n");
	scanf("%f", a->img);
