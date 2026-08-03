int maxIceCream(int* costs, int costsSize, int coins) {
    int k[10] = {0};
    int new[costsSize];
    int x = 1;
    int sum = 0;
    int count = 0;
    while(x<=100000){
        for(int a =0;a<10 ;a++){
        k[a] = 0;
        }
    for (int i=0; i < costsSize;i++){
        k[(costs[i]/x)%10]++;
    }
    for(int j = 1;j<10;j++){
        k[j] += k[j-1]; 
    }
    for(int i = costsSize-1; i>=0;i--){    
          new[--k[(costs[i]/x)%10]] = costs[i];
    }
    for(int j = 0; j<costsSize;j++){
        costs[j] = new[j];
    }
    x *= 10;
    }
    for(int i = 0; i<costsSize; i++){
       if(sum+costs[i]>coins){
        return count;
       }
       else {
        sum += costs[i];
        count++;
       }
    }
    return count;
}