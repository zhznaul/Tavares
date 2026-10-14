#include <iostream>
using namespace std;
int main()
{
    float peso, altura, r;
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite a sua altura em metros: ";
    cin >> altura;
    r = peso/(altura*altura);
    if(r<20)

    {
        cout << "\nAbaixo do peso. "<<r;
    }
    else if(r<25)

        cout << "\nPeso ideal. "<<r;

    else

        cout << "\nAcima do peso. "<<r;

}
