#ifndef UNTITLED4_PERSONAGGIO_H
#define UNTITLED4_PERSONAGGIO_H
#include <string>

class Personaggio {
protected:
    std::string nome;
public:
    Personaggio(const std::string& nome);
    virtual ~Personaggio();
    virtual void attacca() const = 0;
    virtual void presentati() const = 0;
};

#endif //UNTITLED4_PERSONAGGIO_H