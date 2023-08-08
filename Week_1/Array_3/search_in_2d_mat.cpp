class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int j=matrix[0].size()-1;
        int i=0;
        int n=matrix.size();
        while(j>=0 && i<n)
        {
            if(target==matrix[i][j]) return true;
            else if(target<matrix[i][j])
            j--;
            else if(target>matrix[i][j])
            i++;
        }
        return false;
        
    }
};