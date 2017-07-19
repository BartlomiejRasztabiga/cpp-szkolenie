//
// Created by bartl on 19.07.2017.
//

#ifndef CPP_SZKOLENIE_USER_H
#define CPP_SZKOLENIE_USER_H

#include "Role.h"

class User {
private:
    char* username;
    char* password;
    char* name;
    Role* roles;
    int numberOfRoles;
public:
    User();
    User(char* username, char* password, char *name, Role* roles, int numberOfRoles);
    ~User();

    char* getUsername();
    char* getPassword();
    char* getName();
    char* getFirstName();
    char* getLastName();
    Role* getRoles();
    int getNumberOfRoles();
    Role getRole(const char *roleName);

    void setUsername(char* username);
    void setPassword(char* password);
    void setName(char* name);
    void setRoles(Role* role);
};


#endif //CPP_SZKOLENIE_USER_H
