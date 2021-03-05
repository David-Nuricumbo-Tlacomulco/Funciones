#include <iostream>

int fac(int mm);

int main ()
{
    int No1;
    std:: cout <<"Ingresa un numero:"<< std:: endl;
    std:: cin >> No1;

    int factorial = fac(No1);

    std:: cout <<"El numero factorial de "<< No1 << " es " << factorial << std:: endl;

   return 0;
}

int fac(int mm)
{
    int i;
    int resultado = 1;

    for (i = 1; i <= mm; i++ ){resultado *= i;}

    return resultado;
}
