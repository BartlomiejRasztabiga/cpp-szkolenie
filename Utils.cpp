//
// Created by bartl on 19.07.2017.
//

#include <iostream>
#include <cstring>
#include "Utils.h"

char **Utils::splitStr(char *string, int stringLength, char splitter) {

    std::cout << stringLength << std::endl;

/*    char **slices = new char*[20];
    for (int j = 0; j < 20; ++j) {
        slices[j] = new char[20];
    }
    int slicesCount = 0;*/
    char *firstWord = new char[20];
    char *secondWord = new char[20];

    int word = 1;

    int counter = 0;
    for (int i = 0; i < stringLength; ++i) {
        if (word == 1) {
            firstWord[counter] = string[i];
        } else {
            secondWord[counter] = string[i];
        }

        if (string[i] == splitter) {
            std::cout << "Znaleziono splitter" << std::endl;
            if (word == 1) {
                firstWord[counter] = '\0';
            } else {
                secondWord[counter] = '\0';
            }
            counter = 0;
            word = 2;
        }
        counter++;
    }

    return new char*[2]{firstWord, secondWord};
}
