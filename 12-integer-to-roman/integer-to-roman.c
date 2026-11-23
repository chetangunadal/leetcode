char* intToRoman(int num) {
    int i = 0;
    char* p;
    static char ans[100];
    int c = 0;
    char* ro[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                  "XL", "X",  "IX", "V",  "IV", "I"};
    int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    while (num) {
        while (num >= n[i]) {
            p = ro[i];
            while (*p) {
                ans[c++] = *p++;
            }
            num -= n[i];
        }
        i++;
    }
    ans[c] = '\0';
    return ans;
}
