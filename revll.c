//
// Created by Charumathi Badrinath on 7/15/18.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct element {
    char *name;
    struct element *next;
} element;

void display (element *start) {
    element *i = start;
    for (; i != NULL; i = i->next) {
        printf ("Name: %s ", i->name);
        if (i->next != NULL) {
            printf (" Next Element : %s \n", i->next->name);
        } else {
            printf (" Next Element is NULL \n");
        }
    }
}

void reverse (element *start) {
    element *curr = start;
    element *prev = NULL;
    element *nextLoc = NULL;
    while (curr != NULL) {
        nextLoc = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextLoc;
    }

    start = prev;
    display (start);
}

int main () {
    element three = {.name = "three", .next = NULL};
    element two = {.name = "two", .next = &three};
    element one = {.name = "one", .next = &two};

    puts ("Printing the linked list in the right order ");
    display (&one);

    puts ("Printing the reversed list");
    reverse (&one);


}
