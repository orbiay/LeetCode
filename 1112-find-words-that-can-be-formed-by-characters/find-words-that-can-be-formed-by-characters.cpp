class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> hash(26,0);
        bool is = true;
        int count = 0;
        for (int i = 0;i<chars.length();i++)
            hash[chars[i] - 'a']++;
        for (int i = 0;i < words.size();i++){
            vector<int> copy(hash);
            for (int j = 0;j < words[i].length();j++)
            {
                if (copy[words[i][j] - 'a'] > 0 && is == true)
                {
                    cout<<words[i]<<endl;
                    copy[words[i][j]- 'a']--;
                }
                else
                    is = false;
            }
            if (is ==  true)
            {
                count += words[i].length();
            }
            is = true;
        }
        return count;
    }
};