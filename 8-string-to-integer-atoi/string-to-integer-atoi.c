int myAtoi(char* s) {

    int i = 0, f = 1;
    while (s[i] == ' ')
        i++;

    if (s[i] == '+' || s[i] == '-') {
        if (s[i] == '-') {
            f = -1;
        }
        i++;
    }
    long num = 0;
    while (s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - 48);
        } else
            break;
        if (num > INT_MAX && f == -1)
            return INT_MIN;
        else if (num > INT_MAX)
            return INT_MAX;
        i++;
    }
    return num * f;
}