#ifndef GESTORENOTIFICHE_H
#define GESTORENOTIFICHE_H

#include <string>
#include <vector>

#include "Notifica.h"

// Composizione: il gestore contiene i canali e ne è il proprietario,
// quindi li elimina nel distruttore.
class GestoreNotifiche {
private:
    std::vector<Notifica*> canali;

public:
    GestoreNotifiche() = default;

    // Niente copie: due gestori con gli stessi puntatori farebbero delete doppia.
    GestoreNotifiche(const GestoreNotifiche&) = delete;
    GestoreNotifiche& operator=(const GestoreNotifiche&) = delete;

    ~GestoreNotifiche();

    // Registra un canale (il gestore ne prende la proprietà: passare un oggetto creato con new).
    void aggiungi(Notifica* n);

    // Manda il messaggio su tutti i canali registrati.
    void inviaATutti(std::string messaggio);
};

#endif // GESTORENOTIFICHE_H