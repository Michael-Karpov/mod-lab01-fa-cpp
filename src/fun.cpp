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
    int i = 0;
    int w = 0;
    bool f = false;
    bool s = true;

    while (str[i] == ' ' && str[i] != '\0') {
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] != ' ' && f == false) {
            f = true;
            if (isupper(str[i])) {
                int k = i + 1;
                while (str[k] != ' ') {
                    if (!islower(str[k])) {
                        s = false;
                        k++;
                    }
                    k++;
                }
                if (s == true) {
                    w++;
                }
            } 
        }
        else if (str[i] == ' ') {
            f = false;
            s = true;
        }
        i++;
    }

    return w;
}

unsigned int faStr3(const char *str) {
    return 0;
}
