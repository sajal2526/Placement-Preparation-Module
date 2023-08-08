class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         // vector<int>::iterator it;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
               { 
                nums.erase(i+nums.begin());
                 i--;
            }
            
        }
        return nums.size();
    }
};