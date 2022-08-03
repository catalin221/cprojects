#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void ReRun(bool *reRun) {
    char answer;
    printf("Do you want to buy another ticekt? (Y - yes / N - no / X - exit)");
    scanf(" %c", &answer);

    switch(answer) {
        case ('Y'):
            *reRun = true;
            break;
        case ('N'):
            *reRun = false;
            break;
        case ('X'):
            exit(EXIT_SUCCESS);
        default:
            printf("Invalid input! Please retry: ");
            scanf("%s", &answer);
    }
}

void Run(char* moviesDirectory, char* buyersDirectory)
{
    bool run = true;
    while (run)
    {
        ReRun(&run);
    }
}