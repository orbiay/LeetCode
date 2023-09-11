class Solution {
public:
    int romanToInt(string s) {
       unordered_map<string,int> hash;
        int sum = 0;
        for (int i = 0;i < s.length();i++)
        {
            if (s[i + 1] && s[i] == 'I' and (s[i + 1] == 'V' or s[i + 1] == 'X'))
            {
                if (s[i + 1] == 'V')
                    hash["IV"] += 4;
                else 
                    hash["IX"] += 9;
                i++;
                continue;
            }
            else if (s[i + 1] and s[i] == 'X' and (s[i + 1] == 'L' or s[i + 1] == 'C'))
            {
                if (s[i + 1] == 'L')
                    hash["XL"] += 40;
                else 
                    hash["XC"] += 90;
                i++;
                continue;
            }
            else if (s[i + 1] and s[i] == 'C' and (s[i + 1] == 'D' or s[i + 1] == 'M'))
            {
                 if (s[i + 1] == 'D')
                    hash["CD"] += 400;
                else 
                    hash["CM"] += 900;
                i++;
                continue;
            }
            if (s[i] == 'I')
                hash["I"]++;
            else if (s[i] == 'V')
                hash["V"] += 5;
            else if (s[i] == 'X')
                hash["X"] += 10;
            else if (s[i] == 'L')
                hash["L"] += 50;
            else if (s[i] == 'C')
                hash["C"] += 100;
            else if (s[i] == 'D')
                hash["D"] += 500;
            else 
                hash["M"] += 1000;
        }
        sum += hash["I"];
        sum += hash["V"];
        sum += hash["X"];
        sum += hash["L"];
        sum += hash["C"];
        sum += hash["D"];
        sum += hash["M"];
        sum += hash["IV"];
        sum += hash["IX"];
        sum += hash["XL"];
        sum += hash["XC"];
        sum += hash["CD"];
        sum += hash["CM"];
        return sum;
    }
};