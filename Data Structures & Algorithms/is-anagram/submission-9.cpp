class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<int,int> charchters;

        for(auto ch : s){
            charchters[ch]++;
        }
        for(auto ch : t){ 
            charchters[ch]--;
            if(charchters[ch] < 0) return false;
        }

        return true;
    }
};
