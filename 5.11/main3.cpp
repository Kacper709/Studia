#include <iostream>
#include <string>

bool szukaj( std::string & tekst, std::string wyraz1, std::string wyraz2 )
{
     size_t z = tekst.find( wyraz1 );
    size_t z1 = tekst.find( wyraz2 );
    int i = 0;
   
    if(( z != std::string::npos ) &&( z1 != std::string::npos ) )
    {
        return true;
    }
    else return false;
}


void wypiszWynik( bool czyZnaleziono )
{
    if( czyZnaleziono )
         std::cout << "Prawda" << std::endl;
    else
         std::cout << "Falsz" << std::endl;
   
}

int main()
{
     std::string napis = "Pami�taj, nigdy nie jeste� bezu�yteczny! Zawsze mo�esz s�u�y�, jako z�y przyk�ad.";
    wypiszWynik( szukaj( napis, "Pam", "nie" ) );
    wypiszWynik( szukaj( napis, "Zaw", "s�u" ) );
    wypiszWynik( szukaj( napis, "nig", "lub" ) );
    wypiszWynik( szukaj( napis, "req", "fas" ) );
    return 0;
}
