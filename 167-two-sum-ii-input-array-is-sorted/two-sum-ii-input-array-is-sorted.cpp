class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> vec;
        for (int i = 0; i < nums.size();i++)
            hash[nums[i]] = i + 1;
        for (int i = 0; i <  nums.size();i++)
        {
            if (hash[target - nums[i]] > 0)
            {
                vec.push_back(i + 1);
                vec.push_back(hash[target - nums[i]]);
                break;
            }
        }
        return vec;
    }
};