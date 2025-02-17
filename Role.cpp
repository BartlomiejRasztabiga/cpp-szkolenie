//
// Created by bartl on 19.07.2017.
//

#include "Role.h"

Role::Role() {
    this->role = new char[20];
}

Role::Role(const char *role) {
    this->role = new char[20];

    this->role = role;
}

Role::~Role() {
    delete[] role;
}

const char * Role::getRoleName() {
    return this->role;
}

void Role::setRoleName(const char *roleName) {
    this->role = role;
}
