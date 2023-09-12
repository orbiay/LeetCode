class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> hash(100000,0);
        vector<int> ret;
        pair<int,int> max;
        for (int i = 0; i < nums.size();i++)
        {
            if (nums[i] % 2 == 0)
            {
                hash[nums[i]]++;
                if (max.second < hash[nums[i]]){
                    max.second = hash[nums[i]];
                    max.first = nums[i];
                }
            }
        }
        for (int i = 0; i < nums.size();i++)
        {
           if (nums[i] % 2 == 0 and hash[nums[i]] == max.second and nums[i] < max.first)
                max.first = nums[i];
        }
        if (max.first == 0 and max.second == 0)
            return -1;
        return max.first;
    }
};