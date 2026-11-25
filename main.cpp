#include <iostream>

#include "GestoreNotifiche.h"
#include "NotificaEmail.h"
#include "NotificaPush.h"
#include "NotificaSMS.h"

int main() {
    GestoreNotifiche gestore;

    // Registro i tre canali (il gestore se ne occupa e li elimina alla fine).
    gestore.aggiungi(new NotificaEmail());
    gestore.aggiungi(new NotificaSMS());
    gestore.aggiungi(new NotificaPush());

    gestore.inviaATutti("Ciao! Questa e' una notifica di prova.");

    return 0;
}