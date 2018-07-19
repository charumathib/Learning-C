//
// Created by Charumathi Badrinath on 7/19/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *now () {
    time_t t;
    time (&t);
    return asctime (localtime (&t));
}

int main () {
    char comment[80];
    char cmd[120];
    fgets (comment, 80, stdin);
    sprintf(cmd, "echo '%s %s' >> reports.log", comment, now ());
}
