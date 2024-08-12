class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        vector<int> vec;
        int n = nums.size();
        for (int i = 0; i < n;i++)
            hash[nums[i]] = i + 1;
        for (int i = 0; i <  n;i++)
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