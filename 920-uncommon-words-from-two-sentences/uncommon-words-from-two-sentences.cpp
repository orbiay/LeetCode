class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1 +" "+ s2;
        vector<string> ret;
        map<string,int> hash;
        stringstream ss(s);
        stringstream ss1(s);
        while (ss)
        {
            string word;
            ss >> word;
            if (!word.empty())
                hash[word]++;
        }
        while(ss1)
        {
            string word;
            ss1 >> word;
            if (!word.empty())
                if (hash[word] == 1)
                    ret.push_back(word);
        }

        return ret;
    }
};