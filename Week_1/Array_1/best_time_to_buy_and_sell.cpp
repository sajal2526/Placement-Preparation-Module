class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini=a[0],cur=0,ans=0;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>mini)
                cur=a[i]-mini;
            else mini=a[i];
            ans=max(cur,ans);
        }
        return ans;
    }
};