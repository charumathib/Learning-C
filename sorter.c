//
// Created by Charumathi Badrinath on 7/14/18.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int compare_scores (const void *score_a, const void *score_b) {
    int a = *(int *) score_a;
    int b = *(int *) score_b;
    return a - b;
}

int compare_scores_desc (const void *score_a, const void *score_b) {
    int a = *(int *) score_a;
    int b = *(int *) score_b;
    return b - a;
}

typedef struct {
    char *name;
    int width;
    int height;
} rectangle;

int compare_areas (const void *a, const void *b) {
    rectangle *ra = (rectangle *) a;
    rectangle *rb = (rectangle *) b;
    int aa = (ra->width * ra->height);
    int ab = (rb->width * rb->height);
    return aa - ab;
}

int compare_names (const void *a, const void *b) {
    char **sa = (char **) a;
    char **sb = (char **) b;
    return strcmp (*sa, *sb);
}

int compare_areas_desc (const void *a, const void *b) {
    return compare_areas (b, a);
}

int compare_names_desc (const void *a, const void *b) {
    return compare_names (b, a);
}

int main () {
    int scores[] = {543, 323, 32, 554, 11, 3, 112};
    qsort (scores, 7, sizeof (int), compare_scores_desc);
    puts ("These are the scores in order : ");
    for (int i = 0; i < 7; i++) {
        printf ("Score = %i\n", scores[i]);
    }
    char *names[] = {"Manasa", "Achyuta", "Pushkala", "Badri"};
    qsort (names, 4, sizeof (char *), compare_names);
    puts ("These are the names in order : ");
    for (int j = 0; j < 4; j++) {
        printf ("%s\n", names[j]);
    }
    rectangle a = {.height = 10, .width = 20, .name = "a"};
    rectangle b = {.height = 4, .width = 23, .name = "b"};
    rectangle c = {.height = 2, .width = 130, .name = "c"};
    rectangle rects[] = {a, b, c};
    qsort (rects, 3, sizeof (rectangle), compare_areas);
    for (int k = 0; k < 3; k++) {
        printf ("Rectangle %s has an area of %i\n", rects[k].name, (rects[k].width * rects[k].height));
    }
    return 0;
}
