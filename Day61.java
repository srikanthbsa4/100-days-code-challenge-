int majorityElement(int* nums, int numsSize){
    int n=numsSize;
    int cnt=0,ele;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                ele=nums[i];
                cnt=1;
            }
            else if(nums[i]==ele)
            {
                cnt++;

            }
            else
            cnt--;
        }
        return ele;
    }
  