//
// Created by Charumathi Badrinath on 7/14/18.
//

#include <stdio.h>
#include "encrypt.h"

void encrypt (char *message) {
    char c;
    while (*message) {
        *message = *message ^ 31;
        message++;
    }
}