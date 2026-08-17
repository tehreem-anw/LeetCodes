//helper
int bs(int* nums, int tar, int st, int end){
    if(st <= end){
        int mid = (st+end) / 2;
        if(nums[mid] == tar){return mid;}
        else if(nums[mid] < tar){return bs(nums, tar, mid+1, end);}
        else{return bs(nums, tar, st, mid-1);}
    }
    return -1;
}
int search(int* nums, int numsSize, int target) {
    return bs(nums, target, 0, numsSize - 1);
}
