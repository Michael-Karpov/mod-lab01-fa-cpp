// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
        
    int w = 0;
    bool f = false;
    int i = 0;

    while (str[i] == ' ' && str[i] != '\0') {
        i++;
    }

    while (str[i] != '\0') {
        if (!isdigit(str[i])) {
            if (str[i] != ' ' && f == false) {
                f = true;
                w++;
            }
            else if (str[i] == ' ') {
                f = false;
            }
        }
        else w--;

        i++;
    }

    return w;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
