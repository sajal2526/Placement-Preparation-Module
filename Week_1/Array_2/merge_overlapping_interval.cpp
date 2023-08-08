
class Solution {
    
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        if(n==0) return {{}};
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int it=0;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>ans[it][1] && intervals[i][1]!=ans[it][1]) {
                ans.push_back(intervals[i]);
                it++;
                }
            if(intervals[i][0]<=ans[it][1])
            {
                ans[it][1]=max(ans[it][1],intervals[i][1]);
            }
            if(intervals[i][1]==ans[it][1])
            {
                ans[it][0]=min(intervals[i][0],ans[it][0]);
            }
            
        }
        
        return ans;
    }
};