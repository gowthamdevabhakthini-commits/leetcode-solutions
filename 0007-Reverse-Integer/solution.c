int reverse(int x){
    int y = 0;
    int u;
    while(x != 0){
    u = x%10;
    x = x/10;
    if((y > INT_MAX/10) || (y == INT_MAX/10 && u>7)) return 0;
    if((y < INT_MIN/10) || (y == INT_MIN/10 && u<-8)) return 0;
    y = y*10 +u;
    }
    return y;
}