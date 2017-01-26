#include "Test.h"
#include <iostream>
using namespace std;

int numberExists(vector<int> numeros, int valor, int inicio, int final)
{
   if (final < inicio)
       return -1;
   int mid = (inicio + final) / 2;
   if (numeros[mid] > valor)
       return numberExists(numeros, valor, inicio, mid-1);
   else if (numeros[mid] < valor)
       return numberExists(numeros, valor, mid+1, final);
   else
       return mid;
}


bool numberExists(vector<int> ordered_numbers, int x)
{
    int num = numberExists(ordered_numbers, x, 0, ordered_numbers.size()-1);
    if(num == -1){
        return false;
    }else{
        return true;
    }
}

int main ()
{
    test();
    return 0;
}
