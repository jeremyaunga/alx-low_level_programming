char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;

    while (n > 0) {
        *ptr++ = b;
        n--;
    }

    return s;
}

