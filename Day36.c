//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
         int i;
        long long int s=1;
        for(i=1;i<=N;i++)
        {
            s=s*i;
        }
        return s;
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
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends


int fib(int n){
    int a=0,b=1,c=1;
    if(n==0)
    return n;
    while(n>1)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;

}

