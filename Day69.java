class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<m;j++)
            {
                int t=matrix[i][j];;
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;

            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                int t=0;
               t=matrix[i][j];
                matrix[i][j]=matrix[i][n-1-j];
                matrix[i][n-1-j]=t;
            }
        }
        
    }
}