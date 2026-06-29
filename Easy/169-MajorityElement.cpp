int majorityElement(int* nums, int numsSize) {
    int freq = 0;
    int ans;
    for(int i = 0; i < numsSize; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}