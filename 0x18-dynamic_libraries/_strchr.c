#include <stddef.h>

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;  // Character found
        }
        s++;
    }

    return NULL;  // Character not found
}

