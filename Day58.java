
class Solution{
    
   
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr (int A[], int N, int K) {
        HashMap<Integer, Integer> map = new HashMap<>();
             int sum = 0, maxLen = 0;
 
             // traverse the given array
             for (int i = 0; i <N; i++) {
                 
                  // accumulate sum
                  sum += A[i];
                 
                  // when subarray starts from index '0'
                  if (sum == K)
                      maxLen = i + 1;
 
                  // make an entry for 'sum' if it is
                  // not present in 'map'
                  if (!map.containsKey(sum)) {
                      map.put(sum, i);
                  }
 
                  // check if 'sum-k' is present in 'map'
                  // or not
                  if (map.containsKey(sum - K)) {
                       
                      // update maxLength
                      if (maxLen < (i - map.get(sum - K)))
                          maxLen = i - map.get(sum - K);
                  }
             }
              
             return maxLen; 
        
        //Complete the function
    }