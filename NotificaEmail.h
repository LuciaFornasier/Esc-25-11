#ifndef NOTIFICAEMAIL_H
#define NOTIFICAEMAIL_H

#include "Notifica.h"

class NotificaEmail : public Notifica {
public:
    void invia(std::string messaggio) override;
};

#endif // NOTIFICAEMAIL_H