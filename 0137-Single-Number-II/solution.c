int singleNumber(int* nums, int numsSize) {
    int ones = 0;
    int twice = 0;
    for (int i = 0; i < numsSize; i++) {
        ones = (ones ^ nums[i]) & ~twice;
        twice = (twice ^ nums[i]) & ~ones;
    }
    return ones;
}
