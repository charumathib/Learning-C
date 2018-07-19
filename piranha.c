//
// Created by Charumathi Badrinath on 7/14/18.
//
#include <stdio.h>

typedef struct {
    const char *food;
    float exercise_hours;
} preferences;


typedef struct {
    unsigned int is_female:1;
    unsigned int likes_playing:1;
    unsigned int is_fat:1;
    unsigned int has_eaten:1;
} specifications;

typedef struct {
    const char *name;
    const char *species;
    int teeth;
    int age;
    preferences care;
    specifications s;
} fish;

typedef union {
    const char *place;
    float latitude;
} loc;

void catalog (fish f) {
    printf ("%s is a %s with %i teeth. She is %i.\n", f.name, f.species, f.teeth, f.age);
    printf ("%s likes to eat %s\n", f.name, f.care.food);
    printf ("%s likes to exercise for %f hours\n", f.name, f.care.exercise_hours);
}

void happy_birthday (fish *f) {
    f->age += 1;
    printf ("Happy Birthday %s! You are now %i years old!\n", f->name, f->age);
}

int main () {
    fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}, {1, 1, 0, 0}};
    catalog (snappy);
    happy_birthday (&snappy);
    printf ("%s's age is now %i\n", snappy.name, snappy.age);
    loc l = {"America"};
    loc m = {.latitude= 92.475};
    printf ("%s is located in %s at latitude %f\n", snappy.name, l.place, m.latitude);
    printf ("Is female : %i", snappy.s.is_female);
    return 0;
}

