#include "GestoreNotifiche.h"

GestoreNotifiche::~GestoreNotifiche() {
    for (Notifica* n : canali) {
        delete n;
    }
}

void GestoreNotifiche::aggiungi(Notifica* n) {
    if (n != nullptr) {
        canali.push_back(n);
    }
}

void GestoreNotifiche::inviaATutti(std::string messaggio) {
    for (Notifica* n : canali) {
        n->invia(messaggio); // polimorfismo: viene chiamata la invia del tipo reale
    }
}