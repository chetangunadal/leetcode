char* convert(char* s, int numRows) {
    if(numRows==1) return s;
    int c = 0, i = 0, j = 0;
    char* a = malloc(strlen(s) + 1);
    int jump = (numRows - 1) * 2;
    for (i = 0; i < numRows; i++) {
        for (j = i; j < strlen(s); j += jump) {
            a[c++] = s[j];
            if (i > 0 && i < (numRows - 1) && (j + jump - 2 * i) < strlen(s))
                a[c++] = s[j + (jump - 2 * i)];
        }
    }
    a[c] = '\0';
    return a;
}