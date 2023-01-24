
#include <iostream>
using namespace std;

int main()

{
    int num[10];
    int i = 0;
    float suma = 0;
    int mayor = 0;
    int posicion = 0;
    int Opc;
    for (i = 1; i < 11; i++)
    {
        cout << "Digite un numero:";
        cin >> num[i];
    }
    cout << "¿Que desea realizar?: [1] Invertir los numeros   [2] Sacar la media aritmetica  [3] el mayor numero: ";
    cin >> Opc;
    switch (Opc)
    {
    case 1:
        for (i = 10; i > 0; i--)
        {
            cout << num[i] << endl;
        }
    case 2:
        for (i = 1; i < 11; i++)
        {
            suma += num[i];
        }
        cout << "la media es: " << suma / 10;
    case 3:
        for (i = 1; i < 11; i++)
        {

            if (num[i] > mayor) {
                mayor = num[i];
                posicion = i;
            }
        }
        cout << " posicion: " << posicion << " num:  " << mayor;
        break;




    }




}
