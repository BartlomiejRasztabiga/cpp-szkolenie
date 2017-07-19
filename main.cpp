#include <iostream>
#include "User.h"
#include "Utils.h"

int main() {
    User *user;
    char username[] = "username";
    char password[] = "password";
    char roleName[] = "ADMIN";
    char name[] = "Jan Kowalski";

    Role roles[] = {
            Role("ADMIN"),
            Role("USER"),
    };

    user = new User(username, password, name, roles, sizeof(roles)/ sizeof(*roles));

    std::cout << user->getUsername() << " " << user->getPassword() << std::endl;
    std::cout << "Roles: ";
    for (int i = 0; i < user->getNumberOfRoles(); ++i) {
        std::cout << user->getRoles()[i].getRoleName() << ", ";
    }
    std::cout << std::endl;

    std::cout << user->getRole("ADMIN").getRoleName() << std::endl;

    //std::cout << user->getFirstName() << std::endl;
    //std::cout << user->getLastName() << std::endl;

    char strToSplit[] = "Bartlomiej Rasztabiga";
    char splitter = ' ';
    Utils::splitStr(strToSplit, (sizeof(strToSplit) / sizeof(*strToSplit)), splitter);
}
