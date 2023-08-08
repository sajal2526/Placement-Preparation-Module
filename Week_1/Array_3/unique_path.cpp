class Solution {
public:
int dist(int i,int j,int n,int m)
{
    if(i>=n || j>=m)return 0;
    if(i==n-1 || j==m-1) {
        
        return 1;
    }
    return  dist(i+1,j,n,m)+dist(i,j+1,n,m);

}

    int uniquePaths(int m, int n) {
        int tot=0;
        return dist(0,0,n,m);
        
    }
};