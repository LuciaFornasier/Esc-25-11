#ifndef NOTIFICASMS_H
#define NOTIFICASMS_H

#include "Notifica.h"

class NotificaSMS : public Notifica {
public:
    void invia(std::string messaggio) override;
};

#endif // NOTIFICASMS_H