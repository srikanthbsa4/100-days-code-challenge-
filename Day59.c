int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *a=(int *)malloc(sizeof(int)*2);
    *returnSize=2;
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                a[0]=i;
                a[1]=j;
               
            }
            
        }
    }
     return a;
}