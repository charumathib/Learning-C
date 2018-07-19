/*
 / Created by Charumathi Badrinath on 7/13/18.
*/

#include <stdio.h>

int main () {
    int resp = 0;

    puts ("Enter your grade");
    scanf ("%i", &resp);

    if (resp >= 60)
        puts ("You pass");
    else if (resp < 60 && resp >= 0) {
        puts ("You fail");
    }
}


