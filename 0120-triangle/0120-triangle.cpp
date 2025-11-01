class Solution {
public:

//  Recursion
/*
    int recursion(vector<vector<int>>& triangle, int r, int c)
    {
        
        if(r == triangle.size() - 1)
        {
            return triangle[r][c];
        }

        
        int diag  =  recursion(triangle, r + 1, c + 1);
        int down    =  recursion(triangle, r + 1, c);

        return triangle[r][c] + min(diag, down);

    }
*/

//  Memoization
/*
    int memo(vector<vector<int>>& triangle, int r, int c, vector<vector<int>>& dp)
    {
        if(r == triangle.size() - 1)
        {
            return triangle[r][c];
        }

        if(dp[r][c] != -1)
        {
            return dp[r][c];
        }       

        int diag  =  memo(triangle, r + 1, c + 1, dp);
        int down  =  memo(triangle, r + 1, c, dp);

        dp[r][c] = triangle[r][c] + min(diag, down);

        return dp[r][c];
    }
*/

//  Tabulation

    int tabu(vector<vector<int>>& triangle, int m)
    {
        vector<vector<int>> dp(m + 1, vector<int>(m + 1, 0));
        
        dp[1][1] = triangle[0][0];
        
        for(int i = 2; i <= m ; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(j == 1) 
                {
                    dp[i][j] = triangle[i-1][j-1] + dp[i-1][j];
                } 
                else if(j == i) 
                {
                    dp[i][j] = triangle[i-1][j-1] + dp[i-1][j-1];
                } 
                else 
                {
                    dp[i][j] = triangle[i-1][j-1] + min(dp[i-1][j], dp[i-1][j-1]);
                }
            }
        }
        
        int minPathSum = dp[m][1];
        for (int j = 2; j <= m; ++j) 
        {
            minPathSum = min(minPathSum, dp[m][j]);
        }
        return minPathSum;    

    }




    int minimumTotal(vector<vector<int>>& triangle) {

        int m = triangle.size();

        // return recursion(triangle, 0, 0);

        /*
        vector<vector<int>> dp(m, vector<int>(m, -1));
        return memo(triangle, 0, 0, dp);
        */


        return tabu(triangle, m);



    }
};