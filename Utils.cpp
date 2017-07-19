//
// Created by bartl on 19.07.2017.
//

#include <iostream>
#include <cstring>
#include "Utils.h"

char **Utils::splitStr(char *string, int stringLength, char splitter) {

    std::cout << stringLength << std::endl;

    char **slices = new char*;
    int slicesCount = 0;

    for (int i = 0; i < stringLength; ++i) {
        if (string[i] == splitter) {
            std::cout << "Znaleziono splitter";
            strncpy(slices[slicesCount], string, i);
            std::cout << slices[slicesCount] << std::endl;
            slices[slicesCount][i] = '\0';
            slicesCount++;
        }
    }

    return slices;
}
