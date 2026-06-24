#include<stdio.h>
#include<stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *p=malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==target-nums[j]){
                p[0]=i;
                p[1]=j;
                *returnSize=2;
                return p;
            }
        }
    }
*returnSize=0;    
return NULL;
}
void main (){
    int nums[] = {1,2,3,4,5,6,7,8,9,0};
    int* returnsize ;
    int target = 10;
    int numsSize = 10;
    int* p;
    p = twoSum(nums,numsSize,target,returnsize);
    printf("\n%d %d\n",*p,*(p+1));
}