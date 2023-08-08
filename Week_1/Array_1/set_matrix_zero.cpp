class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size=matrix.size(),col_size=matrix[0].size();
        int ele_zero=0;
        for(int i=0;i<row_size;i++)
        {
            if(matrix[i][0]==0)
                    ele_zero=1;
            for(int j=1;j<col_size;j++)
            {
                
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=row_size-1;i>=0;i--)
        {
            for(int j=col_size-1;j>=1;j--)
            if(matrix[i][0]==0||matrix[0][j]==0)
            {
                matrix[i][j]=0;
            }
            if(ele_zero==1)
                 matrix[i][0]=0;
        }
     
        
            
    }
};