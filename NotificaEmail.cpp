#include "NotificaEmail.h"

#include <iostream>

void NotificaEmail::invia(std::string messaggio) {
    std::cout << "[Email] Invio email: " << messaggio << std::endl;
}