//
// Created by bartl on 19.07.2017.
//

#include "Role.h"

Role::Role() {

}

Role::Role(const char *role) {
    this->role = role;
}

Role::~Role() {
    delete role;
}

const char * Role::getRoleName() {
    return this->role;
}

void Role::setRoleName(const char *roleName) {
    this->role = role;
}