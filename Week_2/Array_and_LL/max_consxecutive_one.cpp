class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_occur=0;
        int curr_occur=0;
        
        for(auto i:nums)
        {
            if(i==1)
                curr_occur++;
            max_occur=max(max_occur,curr_occur);
            if(i!=1)
                curr_occur=0;
        }
        return max_occur;
    }
};