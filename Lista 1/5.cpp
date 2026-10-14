#include <iostream>
using namespace std;
int main()
{
    float v1, v2, v3, v4, media;
    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;
    cout << "Digite o terceiro valor: ";
    cin >> v3;
    cout << "Digite o quarto valor: ";
    cin >> v4;
    media = (v1+v2+v3+v4)/4;
    cout << "A media eh "<<media;
}