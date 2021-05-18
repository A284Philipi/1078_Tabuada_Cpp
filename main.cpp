#include <iostream>

using namespace std;

int main()
{
    int numero, cont = 1;
    cin >> numero;
    while (cont <= 10){
        int resultado;
        resultado = numero * cont;
        cout << cont << " x " << numero << " = " << resultado <<endl;
        cont++;
    }
}
