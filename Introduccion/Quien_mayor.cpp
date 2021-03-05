#include<iostream>

void quienmayor(int a , int b);

int main ()
{
    int No1, No2;

    std::cout <<"Introduce un primer numero:"<< std::endl;
    std::cin >> No1;

    std::cout <<"introduce segundo numero:"<< std:: endl;
    std::cin >> No2;

    quienmayor(No1 , No2);


    return 0;
}


void quienmayor(int pri , int prd)
{

    if (pri > prd){
    std::cout <<"El valor de "<< pri <<" es mayor que"<< prd << std::endl;
    }
    else if (pri < prd){
    std:: cout <<"El valor de "<< prd <<" es mayor que "<< pri << std::endl;
    }
    else
        std::cout << "No te pases, esto no es valido"<< std::endl;

}
