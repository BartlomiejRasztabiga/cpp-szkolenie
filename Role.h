//
// Created by bartl on 19.07.2017.
//

#ifndef CPP_SZKOLENIE_ROLE_H
#define CPP_SZKOLENIE_ROLE_H


class Role {
private:
    const char *role;
public:
    Role();
    Role(const char *role);
    ~Role();
    const char * getRoleName();
    void setRoleName(const char *role);
};


#endif //CPP_SZKOLENIE_ROLE_H
