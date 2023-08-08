/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
       unordered_map<int,int>m;
        int p_sum=0;
        m.insert({p_sum,-1});
        int maxm=0;
        for(int i=0;i<n;i++)
        {
            p_sum+=a[i];
            if(m.find(p_sum)!=m.end())
            
                maxm=max(maxm,i-m[p_sum]);
            m.insert({p_sum,i});
        }
        return maxm;
    }
};