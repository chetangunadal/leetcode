class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>p;
         for(char ch:s){
            p[ch]++;
         }
         for(int i=0;s[i];i++)
         if(p[s[i]]==1)
         return i;
         return -1;

    }
};