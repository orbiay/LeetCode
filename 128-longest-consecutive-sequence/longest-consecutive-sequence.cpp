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
        for (int i = 0;i < nums.size();i++)
            hash[nums[i]]++;
        for (map<int,int>::iterator it = hash.begin();it != hash.end();it++)
        {

            if (std::next(it) != hash.end() && it->first == std::next(it)->first - 1)
                max++;
            else
            {
                // if (std::next(it) == hash.end())

                if (max > saver)
                    saver = max;
                max = 0;
            }
        }
    //     return saver + 1;
    // vector<int> hash(*max_element(nums.begin(),nums.end()) + 1,0);
    // int max = 0;
    // int saver = -1;

    // for (int i = 0;i < nums.size();i++)
    //     hash[nums[i]]++;
    // for (int i = 0 ; i < hash.size();i++)
    // {
    //     if (i < hash.size() - 1 and hash[i] != 0 and hash[i + 1] != 0)
    //         max++;
    //     else
    //     {
    //         if (saver < max)
    //         {
    //             saver = max;
    //             max = 0;
    //         }
    //     }
    // }
    return saver + 1;
    }

};
// #include <vector>
// #include <algorithm>
// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.empty()) return 0;
        
//         sort(nums.begin(), nums.end());
//         int maxLength = 1;
//         int currentLength = 1;
        
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 continue;
//             }
//             if (nums[i] == nums[i - 1] + 1) {
//                 currentLength++;
//             } else {
//                 maxLength = max(maxLength, currentLength);
//                 currentLength = 1;
//             }
//         }
        
//         maxLength = max(maxLength, currentLength);
        
//         return maxLength;
//     }
// };
