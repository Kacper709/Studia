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
     std::string napis = "Pamiêtaj, nigdy nie jesteœ bezu¿yteczny! Zawsze mo¿esz s³u¿yæ, jako z³y przyk³ad.";
    wypiszWynik( szukaj( napis, "Pam", "nie" ) );
    wypiszWynik( szukaj( napis, "Zaw", "s³u" ) );
    wypiszWynik( szukaj( napis, "nig", "lub" ) );
    wypiszWynik( szukaj( napis, "req", "fas" ) );
    return 0;
}
