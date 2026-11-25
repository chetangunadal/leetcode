char* reverseWords(char* s) {

    char p[800][100];
    int i = 0, k = 0, m;
    while (s[i]) {
        while (s[i] == ' ' && s[i])
            i++;
        m = 0;
        if(s[i]=='\0')
        break;
        while (s[i] != ' ' && s[i]) {
            p[k][m++] = s[i++];
        }
        p[k++][m] = '\0';
    }

    strcpy(s, p[--k]);
    while (k) {
        strcat(s, " ");
        strcat(s, p[--k]);
    }

    return s;
}