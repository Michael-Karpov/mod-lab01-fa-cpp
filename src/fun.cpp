// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int l = strlen(str) + 1;
    int w = 0;
    bool f = false;
    
    
    for (int i = 0; i < l; i++) {
    
        if (isdigit(str[i])) {
            f = true;
        }

        if (f == false && (str[i] == ' ' || str[i] == '\0')) {
            w += 1;
        }
        
        if (str[i] == ' ') {
            f = false;
            continue;
        }


    }
    return w;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
