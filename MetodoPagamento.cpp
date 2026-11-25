#include "MetodoPagamento.h"
#include <iostream>

MetodoPagamento::~MetodoPagamento() {}

void MetodoPagamento::pagaConCommissione(double importo, double percCommissione) const {
    double commissione = importo * percCommissione / 100;
    double totale = importo + commissione;

    std::cout << "Importo " << importo << "€ + commissione "
              << commissione << "€" << std::endl;
    paga(totale);   // chiamata polimorfica dall'interno della classe base
}