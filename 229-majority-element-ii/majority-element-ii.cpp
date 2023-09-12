class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> hash;
        vector<int> ret;
        for (int i = 0; i < nums.size();i++)
            hash[nums[i]] += 1;
        for (int i = 0; i < nums.size();i++)
        {
            if (hash[nums[i]] and hash[nums[i]] > nums.size() / 3)
            {
                ret.push_back(nums[i]);
                hash.erase(nums[i]);
            }
        }
        return ret;
    }
};