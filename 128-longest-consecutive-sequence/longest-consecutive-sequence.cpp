class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // int current = nums[0];
        // int ret = 0;
        // vector<int> vec;
        // for (int i = 1;i < n;i++)
        // {
        //     if (nums[i] == current)
        //         continue;
        //     if (nums[i] == current + 1)
        //     {
        //         cout<<nums[i]<< " prev "<<current<<" i = "<<i<<endl;
        //         if (i == 1)
        //         {
        //             cout<<"i = 1"<<endl;
        //             ret += 2;
        //         }
        //         else
        //             ret++;
        //         current = nums[i];
        //     }
        //     else
        //     {
        //         current = nums[i];
        //         vec.push_back(ret);
        //         ret = 0;
        //     }
        // }
        // vec.push_back(ret);
        // if (!vec.empty())
        // {
        //     auto max_it = max_element(vec.begin(), vec.end());
        //     return *max_it;
        // }
        // return 0;

        map<int,int> hash;
        int max = 0;
        int saver = - 1;
        int n = nums.size();
        for (int i = 0;i < n;i++)
            hash[nums[i]]++;
        for (map<int,int>::iterator it = hash.begin();it != hash.end();it++)
        {

            if (std::next(it) != hash.end() && it->first == std::next(it)->first - 1)
                max++;
            else
            {

                if (max > saver)
                    saver = max;
                max = 0;
            }
        }
    return saver + 1;
    }

};
