#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
int cal;
 printf("\t\tcalculadora\n\n'");
 printf("\t\tGonzalez Avila Alejandro\n\n'");
 printf("\t\tpreciona [1] para suma\n");
 printf("\t\tpreciona [2] para resta\n");
 printf("\t\tpreciona [3] para multiplicacion\n");
 printf("\t\tpreciona [4] para divicion\n");
scanf("%i",&cal);

 switch(cal)
 {
 case 1:
    suma();
 break;
 case 2:
    resta();
 break;
 case 3:
    multiplicacion();
 break;
 case 4:
   divicion();
 break;


 }
 }


void suma()
{
    float x,y,z;
    printf("ingrese el primer numero: ");
    scanf("%f",&x);
    printf("ingrese el segundo numero: ");
    scanf("%f",&y);
    z=x+y;
    printf("el resultado es: %f",z);
}

void resta()
{
    float x,y,z;
    printf("ingrese el primer numero: ");
    scanf("%f",&x);
    printf("ingrese el segundo numero: ");
    scanf("%f",&y);
    z=x-y;
    printf("el resultado es: %f",z);
}

void multiplicacion()
{
    float x,y,z;
    printf("ingrese el primer numero: ");
    scanf("%f",&x);
    printf("ingrese el segundo numero: ");
    scanf("%f",&y);
    z=x*y;
    printf("el resultado es: %f",z);
}

void divicion()
{
    float x,y,z;
    printf("ingrese el primer numero: ");
    scanf("%f",&x);
    printf("ingrese el segundo numero: ");
    scanf("%f",&y);
    z=x/y;
    printf("el resultado es: %f",z);
}
