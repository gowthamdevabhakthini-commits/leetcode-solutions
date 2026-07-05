char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix;
    for(int j =0; strs[0][j] != '\0'; j++){
        char c = strs[0][j];
        for( int i = 1 ; i < strsSize ; i++ ){

        if((strs[i][j] != c)||(strs[i][j] == '\0')){
            prefix = strs[0];
            prefix[j] = '\0';
            return prefix;
            }
        } 
    }
    return prefix;
}