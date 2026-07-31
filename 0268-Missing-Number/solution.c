int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    for(int i = 0;i < numsSize;i++){
        sum += i + 1 - nums[i];
    }
    return sum;
}