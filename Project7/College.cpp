#include "College.h"
#include <iostream>

char* College::copyString(const char* source) {
    int length = 0;
    while (source[length] != '\0') {
        ++length;
    }
    char* destination = new char[length + 1];
    for (int i = 0; i < length; ++i) {
        destination[i] = source[i];
    }
    destination[length] = '\0';
    return destination;
}

College::College() : College(Contact(), "") {}

College::College(const Contact& contact, const char* name) : contact(contact) {
    this->name = copyString(name);
}

College::~College() {
    delete[] name;
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    contact.Show();
}