class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> hash(100000,0);
        vector<int> ret;
        for (int i = 0; i  < nums.size();i++)
        {
            hash[nums[i]]++;
            if(hash[nums[i]] >= 2)
                ret.push_back(nums[i]);
        }
        return ret;
    }
};