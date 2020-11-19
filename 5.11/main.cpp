#include <iostream>
#include <string>
using namespace std;

int main()
{
    string zmienna;
    string zmienna2;
    for (int i=0; i<10;i++)
    {
    cout<< "Podaj "<<i+1<<" zmienna: ";
     cin>> zmienna;
     zmienna2+=(zmienna+", ");
    }
       cout <<"Wynik: "<< zmienna2 ;
    return 0;
}
