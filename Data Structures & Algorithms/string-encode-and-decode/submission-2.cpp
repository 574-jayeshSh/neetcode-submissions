class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto str : strs){
            s += to_string(str.size()) + "#" + str;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;

    int i = 0;

    while (i < s.size()) {
        string len = "";
        while (s[i] != '#') {
            len += s[i];
            i++;
        }

        int k = stoi(len);

        
        i++;

        
        string str = s.substr(i, k);
        ans.push_back(str);

        
        i += k;
        }
        return ans;
    }
    
};
