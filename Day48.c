int removeDuplicates(int* nums, int numsSize){
    int i=0,j;
    for(j=1;j<numsSize;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
    

}