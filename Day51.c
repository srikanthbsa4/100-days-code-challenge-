void moveZeroes(int* nums, int numsSize){
     int i,j=0,a[numsSize];
	    for(i=0;i<numsSize;i++)
	    {
	        if(nums[i]!=0)
	        {
	            a[j++]=nums[i];
	        }
	    }
	    while(j<numsSize)
	    {
	        a[j]=0;
	        j++;
	    }
	    for(i=0;i<numsSize;i++)
	    {
	        nums[i]=a[i];
	    }

}