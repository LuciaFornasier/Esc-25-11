#include "NotificaSMS.h"

#include <iostream>

void NotificaSMS::invia(std::string messaggio) {
    std::cout << "[SMS] Invio SMS: " << messaggio << std::endl;
}