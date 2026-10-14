#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Digite o primeiro numero: ";
    cin >> a;
    cout << "Digite o segundo numero: ";
    cin >> b;
    cout << "Digite o terceiro numero: ";
    cin >> c;
    if (a>b)
    {
        if (a>c)
        {
            cout << "O maior eh "<<a;
        }
        else
        {
            cout << "O maior eh "<<c;
        }
    }
    else
    {
        if (b>c)
        {
            cout << "O maior eh "<<b;
        }
        else
        {
            cout << "O maior eh "<<c;
        }
    }
}
