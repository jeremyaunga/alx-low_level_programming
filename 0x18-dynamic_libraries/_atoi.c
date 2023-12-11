int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    if (*s == '-' || *s == '+') {
        sign = (*s++ == '-') ? -1 : 1;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s++ - '0');
    }

    return sign * result;
}

