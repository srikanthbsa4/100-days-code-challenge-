bool isPalindrome(int x){
    int r;
    long int s=0;
    long int y=x;
    while(x<0)
    return false;
    while(x>0)
    {
        r=x%10;
        s=r+(s*10);
        x=x/10;
    }
    if(y==s)
    return true;
    else
    return false;

}

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int t,s,r;
        s=0;
        t=n;
        while(n>0)
        {
            r=n%10;
            s=s+(r*r*r);
            n=n/10;
            
        }
        if(t==s)
        return "Yes";
        else
        return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends