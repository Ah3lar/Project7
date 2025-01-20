#include "Contact.h"
#include <iostream>

char* Contact::copyString(const char* source) {
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

Contact::Contact() : Contact("", "", "") {}

Contact::Contact(const char* phone, const char* city, const char* country) {
    this->phone = copyString(phone);
    this->city = copyString(city);
    this->country = copyString(country);
}

Contact::~Contact() {
    delete[] phone;
    delete[] city;
    delete[] country;
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Country: " << country << std::endl;
}