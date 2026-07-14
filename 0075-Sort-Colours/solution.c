void sortColors(int* nums, int numsSize) {
    int count[3]={0};
    int i;
    for(i =0;i<numsSize;i++ ){
        count[nums[i]]++;
    }
    i = 0;
    while(count[0] > 0){
            nums[i++] = 0;
            count[0]--;
        }
    while(count[1] > 0){
            nums[i++] = 1;
            count[1]--;
        }
    while(count[2] > 0) {
            nums[i++] = 2;
            count[2]--;
        }
    
}