class Solution {
    public int subarraySum(int[] nums, int k) {
        int c=0;
    for(int i=0;i<nums.length;i++)
    {
        int a=0;
        for(int j=i;j<nums.length;j++)
        {
            a+=nums[j];
            if(a==k)
            c++;
        }
    }
    return c;
        
    }
}