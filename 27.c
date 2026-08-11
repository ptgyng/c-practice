int removeElement(int* nums, int numsSize, int val) {
    int slow=0,fast;
    for(fast=0;fast<numsSize;fast++){
        if(nums[fast]!=val){
            nums[slow++]=nums[fast];
        }
    }
    return slow;
}
