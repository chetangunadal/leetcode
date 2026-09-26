bool isAnagram(char* s, char* t) {
    int a[26],b[26];
    int i;
    for(i=0;s[i]&&t[i];i++){
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    if(s[i]||t[i]){
        return false;
    }

    for(i=0;i<26&&a[i]==b[i];i++);
    if(i==26)
    return true;
    else
    return false;
}