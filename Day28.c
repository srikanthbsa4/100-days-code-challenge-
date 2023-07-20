//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i;j>=0;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(i=n-1;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                printf("* ");
                
            }
            printf("\n");
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if((i%2)==(j%2))
                printf("1 ");
                else
                printf("0 ");
                
            }
            printf("\n");
        }
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends