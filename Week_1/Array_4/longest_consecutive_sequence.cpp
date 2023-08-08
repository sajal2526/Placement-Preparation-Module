class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
        return nums.size();
        set<int> st;
        for(auto it : nums)
        {
            st.insert(it);
        }
        vector<int> ans(st.begin(),st.end());
        sort(ans.begin(),ans.end());
        int count=0,maxm=0;
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i+1]==ans[i]+1)
            count++;
            else{
                maxm=max(count,maxm);
                count=0;
            }

        }
        maxm=max(count,maxm);
        return maxm+1;
    }
};