//
// Created by Charumathi Badrinath on 7/14/18.
//

#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;

char *ADS[] = {
        "William: SBOH GSOH likes sports, TV, dining",
        "Matt: SWM NS likes art, movies, theater",
        "Luis: SLM ND likes books, theater,art",
        "Mike: DWM DS likes trucks, sports and bieber",
        "Peter: SAM likes chess, workout and art",
        "Josh: SJM likes sports, movies and theater",
        "Jed: DBM likes theater, books and dining"
};

void find (int (*some_fn) (char *)) {
    puts ("Search results");
    puts ("------------------------");
    for (int i = 0; i < NUM_ADS; i++) {
        if (some_fn (ADS[i])) {
            printf ("%s\n", ADS[i]);
        }
    }
    puts ("------------------------");
}

int sports_no_bieber (char *str) {
    return strstr (str, "sports") && !strstr (str, "bieber");
}

int theater_or_books (char *str) {
    return strstr (str, "theater") && strstr (str, "books");
}

int main () {
    find (sports_no_bieber);
    find (theater_or_books);
}