#include <iostream>
using namespace std;
int main()
{
    float base, altura, area;
    cout << "Digite a base do terreno: ";
    cin >> base;
    cout << "Digite a altura do terreno: ";
    cin >> altura;
    area = base * altura;
    cout << "A area do terreno eh: "<<area;
    if(area>100)
    {
        cout << "\nTerreno grande";
    }
}
