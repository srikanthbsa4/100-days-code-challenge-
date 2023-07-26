int reverse(int x){
    int n=x;
    int s=0;
    if(x == -2147483648)
    return 0;
    if(x<0)
    n=-1*n;
    while(n)
    {
        if(s>214748364)
        return 0;
        if(s==214748364 && (n%10)>7)
        return 0;
        s=s*10+ (n%10);
        n/=10;
    }
    if(x<0)
    return -s;
    else
    return s;

}

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        int i;
        if(N<=1)
        return 0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            return 0;
        }
        return 1;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends