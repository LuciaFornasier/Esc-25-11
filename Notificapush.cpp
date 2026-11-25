#include "NotificaPush.h"

#include <iostream>

void NotificaPush::invia(std::string messaggio) {
    std::cout << "[Push] Invio notifica push: " << messaggio << std::endl;
}