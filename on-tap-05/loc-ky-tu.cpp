void rFilter(char *s) {
    // Your code goes here
    // *(s) = '_';
    // *(s + 1) = '\0';
    int l = strlen(s);
    char *right = s + l - 1;
    while (right >= s) {
        char c = *right;
        if ((('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))) {
            break;
        }
        *right = '_';
        right--;
    }
}