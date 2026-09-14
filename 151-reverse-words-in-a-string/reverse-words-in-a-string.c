char* reverseWords(char* s) {
    char *q = s + strlen(s) - 1, *p = s;
    char t;
    while (p < q) {
        t = *p, *p = *q, *q = t;
        q--, p++;
    }
    int len = strlen(s) - 1;
    while (s[len] == ' ') {
        s[len] = s[len + 1];
        len--;
    }

    int i = 0, st, en;
    while (s[0] == ' ')
        s++;

    while (s[i]) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            for (st = i; s[st]; st++) {
                s[st] = s[st + 1];
            }
            i--;
        }
        i++;
    }

    i = 0;
    while (s[i]) {
        if (s[i] == ' ')
            i++;
        st = i;
        while (s[i] != ' ' && s[i])
            i++;
        en = i - 1;
        while (st < en) {
            t = s[st];
            s[st] = s[en];
            s[en] = t;
            st++, en--;
        }
    }
    return s;
}