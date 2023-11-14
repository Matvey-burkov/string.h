#include <stdio.h>
#include <string.h>

char* strcat(char* destination, const char* source) {
    char* result = destination + strlen(destination);
    while (*source != '\0') {
        *result++ = *source++;
    }
    *result = '\0';
    return destination;
}
