bool check(int* nums, int numsSize){
    int i,c=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>nums[(i+1)%numsSize])
        c++;
    }
    if(c>1)
    return false;
    return true;

}