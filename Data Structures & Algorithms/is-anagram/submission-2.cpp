class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int> st,pt;

        for(char ch : s) st[ch]++;
        for(char ch : t) pt[ch]++;

        for(auto it : pt){
            if(st[it.first] < it.second) return false;
        }
        return true;

    }
};
