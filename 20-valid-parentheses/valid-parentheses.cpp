class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        vector<char> vec;
        for (int i = 0; i < s.length();i++)
            stack.push(s[i]);
        vec.push_back(stack.top());
        stack.pop();
        if (vec[0] != ')' &&  vec[0] != '}' && vec[0] != ']')
            return false;
        while (!stack.empty())
        {
            char c = stack.top();
            stack.pop();
            if (vec.size() > 0 && c == '(' && vec[vec.size() - 1] == ')')
                vec.erase(vec.begin() + vec.size() - 1);
            else if (vec.size() > 0 && c == '{' && vec[vec.size() - 1] == '}')
                vec.erase(vec.begin() + vec.size() - 1);
            else if (vec.size() > 0 && c == '[' && vec[vec.size() - 1] == ']')
                vec.erase(vec.begin() + vec.size() - 1);
            else if (vec.size() > 0 && c != ')' && c != '}' && c != ']')
                return false;
            else
                vec.push_back(c);

        }
        if (vec.size() != 0)
            return false;
        return true;
    }
};