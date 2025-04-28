class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int>ans;
             int m = matrix.size();
             int n = matrix[0].size();
             int totalelement = m*n;
              
             int startcol = 0;
             int endcol = n-1;
             int satrtrow = 0;
             int endrow = m-1;
             int count = 0 ;
    
             while (count < totalelement){
                // print starting element ;
                for ( int i = startcol; i< endcol; i++ ){
                           ans.push_back(startrow[i])
                        }
                        
                cout << 
             }
    
        }
    }