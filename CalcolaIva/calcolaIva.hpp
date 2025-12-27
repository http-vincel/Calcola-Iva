#pragma once

void CalcolaIva(int importo, int iva, int &soloIva, int &totale)
{
    soloIva = importo * iva / 100;
    totale = importo + soloIva;
}