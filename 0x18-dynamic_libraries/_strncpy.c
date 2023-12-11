char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;

    while (*src != '\0' && n > 0) {
        *dest++ = *src++;
        n--;
    }

    while (n > 0) {
        *dest++ = '\0';
        n--;
    }

    return original_dest;
}

