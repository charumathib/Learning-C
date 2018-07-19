//
// Created by Charumathi Badrinath on 7/14/18.
//

#include <stdio.h>

enum response_type {
    DUMP, SECOND_CHANCE, MARRIAGE
};
typedef struct {
    char *name;
    enum response_type resp;
} response;

void dump (response r) {
    printf ("Dear %s,\n", r.name);
    puts ("Unfortunately your last date wants to break up with you");
}

void second_chance (response r) {
    printf ("Dear %s,\n", r.name);
    puts ("Your date would like to go on another date with you");
}

void marriage (response r) {
    printf ("Dear %s,\n", r.name);
    puts ("You are getting married");
}

void (*replies[]) (response) = {dump, second_chance, marriage};

int main () {
    response r[] = {
            {"Mike",    DUMP},
            {"Luis",    SECOND_CHANCE},
            {"Matt",    SECOND_CHANCE},
            {"William", MARRIAGE}
    };
    for (int i = 0; i < 4; i++) {
        (replies[r[i].resp]) (r[i]);
    }
    return 0;
}