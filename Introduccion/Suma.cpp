#include <iostream>

void suma (int a, int b);

int main ()
{
    int N1,N2;

    std::cout <<"Introducir primer numero:"<< std::endl;
    std::cin >>N1;
    std::cout <<"Introducir segundo numero:"<< std::endl;
    std::cin >>N2;
    suma (N1,N2);

    return 0;
}

void suma (int a, int b)
{
    int c = a + b;
    std::cout << "la suma de " << a << " + " << b << " es igual a " << c << std::endl;

}

