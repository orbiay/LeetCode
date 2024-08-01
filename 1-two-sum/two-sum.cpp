class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        vector<int> res;
        for(int i = 0; i < nums.size();i++)
            hash[nums[i]] = i + 1;
        for(int i = 0; i < nums.size();i++)
            if (hash[target - nums[i]] > 0 && i != hash[target - nums[i]] - 1)
            {
                res.push_back(i);
                res.push_back(hash[target - nums[i]] - 1);
                break;
            }
        return res;
    }
};