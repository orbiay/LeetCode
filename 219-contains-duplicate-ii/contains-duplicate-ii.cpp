class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for (int i = 0; i < nums.size();i++)
        {
            cout<<nums[i]<< " ";
            unordered_map<int,int>::iterator it = hash.find(nums[i]);
            if (it != hash.end() )
            {
                if (i - hash[nums[i]] <= k)
                    return true;
            }
            hash[nums[i]] = i;
        }
        return false;
    }
};