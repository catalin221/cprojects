#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Run.h"

int main() {
    char* currentWorkingDirectory = getcwd(NULL, 0);
    char* moviesFileDir = malloc(strlen(currentWorkingDirectory) + strlen("\\Movies.txt") + 1);
    char* buyersFileDir = malloc(strlen(currentWorkingDirectory) + strlen("\\Buyers.txt") + 1);

    // Create directories
    strcpy(moviesFileDir, strcat(strcpy(moviesFileDir,currentWorkingDirectory), "\\Movies.txt"));
    strcpy(buyersFileDir, strcat(strcpy(buyersFileDir,currentWorkingDirectory), "\\Buyers.txt"));

    // User input

    Run(moviesFileDir, buyersFileDir);
    return 0;
}
