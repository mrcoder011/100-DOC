class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> ans;
            int m = matrix.size();
            int n = matrix[0].size();
            int totalelement = m * n;
    
            int startcol = 0;
            int endcol = n - 1;
            int startrow = 0;
            int endrow = m - 1;
            int count = 0;
    
            while (count < totalelement) {
                // Traverse from left to right
                for (int i = startcol; i <= endcol && count < totalelement; i++) {
                    ans.push_back(matrix[startrow][i]);
                    count++;
                }
                startrow++;
    
                // Traverse from top to bottom
                for (int i = startrow; i <= endrow && count < totalelement; i++) {
                    ans.push_back(matrix[i][endcol]);
                    count++;
                }
                endcol--;
    
                // Traverse from right to left
                for (int i = endcol; i >= startcol && count < totalelement; i--) {
                    ans.push_back(matrix[endrow][i]);
                    count++;
                }
                endrow--;
    
                // Traverse from bottom to top
                for (int i = endrow; i >= startrow && count < totalelement; i--) {
                    ans.push_back(matrix[i][startcol]);
                    count++;
                }
                startcol++;
            }
            return ans;
        }
    };
    