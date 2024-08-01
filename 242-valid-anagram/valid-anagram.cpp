class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        for(int i = 0; i < s.size();i++)
        {
            std::cout << vec[s[i] - 'a'] << std::endl;
            vec[s[i] - 'a'] += 1 ;
           std::cout << vec[s[i] - 'a'] << "\n";
        }
        for (int i = 0; i < t.size();i++)
            vec[t[i] - 'a']--;
        std::cout << vec[0] << "   " << vec[1] << std::endl;
        for(int i = 0; i < vec.size();i++)
        {
           if (vec[i] != 0)
                return false;
        }
        return true;
    }
};