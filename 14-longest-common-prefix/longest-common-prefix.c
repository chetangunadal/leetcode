char* longestCommonPrefix(char** strs, int strsSize)
 {
    char s[200];
    int i,j,k=0;
    for(i=0;strs[0][i];i++){
        for(j=0;j<strsSize &&strs[0][i]==strs[j][i];j++);
        if(j==strsSize){
           s[k++]=strs[0][i];
        }
        else
        break;

    } 
    s[k]='\0';
    strcpy(strs[0],s);
    return strs[0];
 }
