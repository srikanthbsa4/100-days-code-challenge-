//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=n;i>0;i--)
        {
            for(j=0;j<n;j++)
            {
                if(j<i)
                 printf("*");
                 else
                 printf(" ");
            }
            for(j=n;j>0;j--)
            {
                if(j<=i)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j<=i)
                 printf("*");
                 else
                 printf(" ");
            }
            for(j=n;j>0;j--)
            {
                if(j<=i+1)
                printf("*");
                else
                printf(" ");
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
    void printSquare(int n) {
        // code here
       int i,j;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(i==1||j==1||i==n||j==n)
               printf("*");
               else
               printf(" ");
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends