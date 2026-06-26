int lengthOfLongestSubstring(char* s) {
    int left=0;
    int maxlength=0;
    int lastseenindex[256];
    for(int i=0;i<256;i++){
        lastseenindex[i]=-1;
    }
    for(int right=0;right<strlen(s);right++){
        char current = s[right];
        if((lastseenindex[current] != -1)&&(lastseenindex[current]>=left)){
            left = lastseenindex[current]+1;
        }
        lastseenindex[current] = right;
        if(maxlength< (right -left +1)){
        maxlength =  right -left + 1;
        }
    }
    return maxlength;
}