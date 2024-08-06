void reverse(char *s) {
    // Your code goes here
    // *(s) = 's';
    // *(s + 1) = '\0';
    int length = strlen(s);
    char* left = s, *right = s + length - 1;
    while (left <= right) {
        char c = *left;
        *left = *right;
        *right = c;
        left++;
        right--;
    }
}