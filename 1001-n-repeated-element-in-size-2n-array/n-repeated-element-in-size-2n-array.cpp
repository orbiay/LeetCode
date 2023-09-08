class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> hash(10001,0);
        pair<int,int> save;
        save.first = 0;
        save.second = 0;
        for (int i = 0; i < nums.size();i++)
            hash[nums[i]]++;
        for (int i = 0;i < nums.size();i++)
        {
            if (hash[nums[i]] > save.first)
            {
                save.first = hash[nums[i]];
                save.second = nums[i];
            }
        }
        return save.second;
    }
};