#include "Contact.h"

int main() {
    Contact contact1("123-456-7890", "Kyiv", "Ukraine");
    contact1.Show();

    Contact contact2;
    contact2.Show();

    return 0;
}