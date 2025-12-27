#include <iostream>
#include "calcolaIva.hpp"

using namespace std;



int main(int argc, char* argv[])
{
    
    
    cout<<"============================"<<endl;
    cout<<"|    Calcola la tua iva    |"<<endl;
    cout<<"============================"<<endl;
    
    
    int iva;
    int totale;
    int importoInput = 0;
    int ivaInput = 0;
    
    cout<<"Inserisci importo: " << endl;
    cin>>importoInput;
    
    cout<<"Inserisci Iva: " << endl;
    cin>>ivaInput;

    CalcolaIva(importoInput, ivaInput, iva, totale);

    cout << "IVA: " << iva << endl;
    cout << "Totale con IVA: " << totale << endl;
    
    return 1;
}



