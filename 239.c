//暴力：
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
    int *rnums=malloc(100004*sizeof(int));
    int slow=0,fast=k-1,i,max;
    while(fast!=numsSize){
        max=slow;
        for(i=slow;i<=fast;i++){
            if(nums[max]<nums[i]){
                max=i;
            }
        }
        rnums[slow]=nums[max];
        slow++;
        fast++;
    }
    *returnSize=slow;
    return rnums;   
}
//单调队列
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
    int reslen=numsSize-k+1;
    *returnSize=reslen;
    int *res=malloc(reslen*sizeof(int));
    int *q=malloc(numsSize*sizeof(int));
    int qH=0,qT=-1,idx=0;
    for(int i=0;i<numsSize;i++){
        while(qH<=qT&&nums[q[qT]]<=nums[i]){
                qT--;
            }
        q[++qT]=i;
        while(qH<=qT&&q[qH]<=i-k){
            qH++;
        }
        if(i>=k-1){
            res[idx++]=nums[q[qH]];
        }
    }
    free(q);
    return res;
}