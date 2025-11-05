#include <iostream>

int som_num(int n);

int main()
{
    int numeri = 5;
    int somma = som_num(numeri);

    std::cout << std::endl;
    std::cout << "\tLa somma dei primi " << numeri << " numeri e': " << somma;
    std::cout << std::endl;
    return 0;
}

int som_num(int n){
    if (n <= 0)
        return 0;
    else
        return n + som_num(n-1);
}
