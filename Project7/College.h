#pragma once
#include "Contact.h"

class College {
private:
    Contact contact;
    char* name;

public:
    College();
    College(const Contact& contact, const char* name);
    ~College();

    void Show() const;

    static char* copyString(const char* source);
};
