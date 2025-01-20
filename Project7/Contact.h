#pragma once
class Contact {
private:
    char* phone;
    char* city;
    char* country;

public:
    Contact();
    Contact(const char* phone, const char* city, const char* country);
    ~Contact();

    void Show() const;

    char* copyString(const char* source);
};