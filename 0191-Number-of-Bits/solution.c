int hammingWeight(int n) {
    unsigned int x = n;
    int count = 0;
    for(int i = 0;i <32;i++){
        if(x&1 == 1){
            count++;
        }
        x = x/2;
    }
    return count;
}