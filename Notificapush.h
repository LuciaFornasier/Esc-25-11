//
// Created by User on 25/11/2026.
//

#ifndef ES4_NOTIFICAPUSH_H
#define ES4_NOTIFICAPUSH_H


class Notificapush {
};


#endif //ES4_NOTIFICAPUSH_H
#ifndef NOTIFICAPUSH_H
#define NOTIFICAPUSH_H

#include "Notifica.h"

class NotificaPush : public Notifica {
public:
    void invia(std::string messaggio) override;
};

#endif // NOTIFICAPUSH_H