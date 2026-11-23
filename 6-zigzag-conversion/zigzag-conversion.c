char* convert(char* s, int numRows) {
    int len = strlen(s);
    if(s==0 || numRows==1 ||numRows>=len)
    return s;
    char a[len+1];
    int i, j, jump = (numRows- 1) * 2, c = 0;
    for (i = 0; i < numRows; i++) {
        for (j = i; j < len ; j += jump) {
            a[c++] = s[j];
            if (i > 0 && i < (numRows-1) && (j + jump - 2 * i) < len)
                a[c++] = s[j + jump - 2 * i];
        }
    }
    a[c]='\0';
    strcpy(s,a);
    return s;
}