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
                for ( int i = startcol; i<=endcol; i++ ){
                           ans.push_back (matrix [startrow][i]) ;
    
                        }
                        startrow++;
                     // end col   
                  for ( int i = startrow; i<= endrow; i++){
                           ans.push_back (matrix [i][endcol]) ;
    
                           
                        }
                        endcol--; 
                        // endrow
                         for ( int i = endcol; i<=startcol; i--){
                           ans.push_back (matrix [endrow]][i]) ;
                           
                           
                        }
                        endrow--;
                        //startcol
                         for ( int i = endrow; i<= startrow-1; i--){
                           ans.push_back (matrix [i][startcol]) ;
                           
                           
                        }
                        startcol++;
                         
             }
    
        }
    };