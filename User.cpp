//
// Created by bartl on 19.07.2017.
//

#include <cstring>
#include <iostream>
#include "User.h"

User::User() {
    this->username = new char[20];
    this->password = new char[20];
    this->name = new char[40];
    this->roles = new Role[10];
};

User::User(char *username, char *password, char *name, Role *roles, int numberOfRoles) {
    this->username = new char[20];
    this->password = new char[20];
    this->name = new char[40];
    this->roles = new Role[10];

    this->username = username;
    this->password = password;
    this->name = name;
    this->roles = roles;
    this->numberOfRoles = numberOfRoles;
}

User::~User() {
    delete[] username;
    delete[] password;
    delete[] name;
    delete[] roles;
}

char *User::getUsername() {
    return username;
}

char *User::getPassword() {
    return password;
}

Role *User::getRoles() {
    return roles;
}

void User::setUsername(char *username) {
    this->username = username;
}

void User::setPassword(char *password) {
    this->password = password;
}

void User::setRoles(Role *role) {
    this->roles = role;
}

int User::getNumberOfRoles() {
    return numberOfRoles;
}

char *User::getName() {
    return name;
}

void User::setName(char *name) {
    this->name = name;
}

Role User::getRole(const char *roleName) {
    for (int i = 0; i < numberOfRoles; ++i) {
        const char *roleNameInList = roles[i].getRoleName();
        if (strcmp(roleNameInList, roleName) == 0) return roles[i];
    }
}

char *User::getFirstName() {
    char *nameStr = new char[40];
    strcpy(nameStr, name);

    char *splitted;
    splitted = strtok(nameStr, " ,.-");
    char *firstName = new char[40];
    strcpy(firstName, splitted);

    while (splitted != NULL) {
        splitted = strtok(NULL, " ,.-");
    }

    delete[] nameStr;

    return firstName;
}

char *User::getLastName() {
    char *nameStr = new char[40];
    strcpy(nameStr, name);

    char *splitted;
    splitted = strtok(nameStr, " ,.-");

    delete[] nameStr;

    while (splitted != NULL) {
        splitted = strtok(NULL, " ,.-");
        return splitted;
    }
}
