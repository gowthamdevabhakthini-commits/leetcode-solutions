bool search(int* nums, int numsSize, int target) {
   
    int l = 0;
    int r=numsSize-1;
    int mid;

    while(l<=r){
        mid=l+(r-l)/2;
    if(nums[mid]==target){
        return TRUE;
        }
    else if(nums[l]==nums[mid] && nums[mid]==nums[r]){
        for(int i=0;i<numsSize;i++){
             if(nums[i]==target){ 
                return TRUE; 
                }
        } return FALSE;
    }    
    //Check if the left half is sorted
    if(nums[l]<=nums[mid]){
         if(nums[mid]>target&&target>=nums[l]){
         r=mid-1;    
        }else{
         l=mid+1;
        }
    }
    //Otherwise the right half is sorted
    else{
        if(nums[mid]<target&&target<=nums[r]){
        l=mid+1;
        }else{
        r=mid-1;
        }
    }     
    }
    return FALSE; // Corrected: Return the integer -1


}