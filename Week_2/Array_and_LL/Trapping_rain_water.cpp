class Solution {
public:
    int trap(vector<int>& heights) {
        
        int n=heights.size();
        vector<int> preMax(n);
        vector<int> suffMax(n);
        preMax[0]=heights[0];
        suffMax[n-1]=heights[n-1];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            preMax[i]=max(preMax[i-1],heights[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffMax[i]=max(suffMax[i+1],heights[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            int decide_h=min(preMax[i-1],suffMax[i+1]);
            if(decide_h>heights[i])
                ans=ans+max(0,abs(decide_h-heights[i]));
        }
        return ans;
        }
};