class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for (int i = 0;i < s.length();i++)
            if (isalnum(s[i]))
                ans.insert(ans.end(),tolower(s[i]));
        if (ans.length() == 1)
            return true;
        for (std::string::iterator it = ans.begin(), it2 = ans.end() - 1; it < it2; ++it, --it2)
        {
            cout<<*it<<" "<<*it2<<endl;
            if (*it != *it2)
                return false;
        }
        return true;
    }
};