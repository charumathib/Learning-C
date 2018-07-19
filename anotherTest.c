//
// Created by Charumathi Badrinath on 7/14/18.
//

#include "stdio.h"

int main() {
    char* p = "Hello";
    char q[6] = "Hello";

    q[1] = 'M';
    printf("p = %s and q = %s", p, q);
}