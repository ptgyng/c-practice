#include<limits.h>
#include<stdbool.h>
int thirdMax(int* nums, int numsSize) {
    long long first,second,third;
    bool change1=false,change2=false,change3=false;
    first=LLONG_MIN;
    second=first;
    third=second;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==first||nums[i]==second||nums[i]==third) continue;
        if(nums[i]>first){
            third=second;
            change3=change2;
            second=first;
            change2=change1;
            first=nums[i];
            change1=true;
        }
        else if(nums[i]>second){
            third=second;
            change3=change2;
            second=nums[i];
            change2=true;
        }
        else if(nums[i]>third){
            third=nums[i];
            change3=true;  
        }
    }
    if(change1==1&&change2==1&&change3==1) return (int)third;
    return (int)first;
}