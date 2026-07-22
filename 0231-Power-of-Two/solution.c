bool isPowerOfTwo(int n) {
    if(n ==0 || n == 0x80000000) return FALSE;
    return !(n&(n-1));
}