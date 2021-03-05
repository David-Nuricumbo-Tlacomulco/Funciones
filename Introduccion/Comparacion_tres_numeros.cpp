#include<iostream>

int comparacion (int m, int n);

int main()
{
    int No1, No2, No3;

    std:: cout <<"Coloca un primer numero: "<< std:: endl;
    std:: cin >> No1;

    std:: cout <<"Coloca un segundo numero: "<< std:: endl;
    std:: cin >> No2;

    std:: cout <<"Por utlimo, coloca un tercer numero: "<< std:: endl;
    std:: cin >> No3;

    // Se puede poner asi

       /* 1er caso */

        // int comparacion1 = comparacion ( No1, No2);
        // int comparacion2 = comparacion (comparacion1, No3);


    // o se puede poner asi, es ms recomendable esta forma ya que ocupa menos recursos

       /* 2do caso */

           int Comparacion = comparacion(comparacion(No1, No2), No3);


                                         /* 1er caso -> comparacion2 */
    std:: cout <<"El numero mayor es "<<     Comparacion                << std::endl;
                                         /* 2do caso ->  Comparacion */


    return 0;
}

int comparacion (int m, int n)
{
    int XD;

    if (m>n){ XD = m ;}
    else { XD = n ;}

  return XD;
}
