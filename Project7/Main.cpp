#include "Contact.h"
#include "College.h"

int main() {
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    College college(contact, "Kyiv National University");

    college.Show();

    return 0;
}