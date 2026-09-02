int removeDuplicates(int* nums, int numsSize) {
    if(numsSize<=2){
        return numsSize;
    }
    int fast,slow=2;
    for(fast=2;fast<numsSize;fast++){
        if(nums[fast]!=nums[slow-2]){
            nums[slow++]=nums[fast];
        }
    }
    return slow;
}