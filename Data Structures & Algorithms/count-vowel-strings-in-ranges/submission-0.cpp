class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char>vowels = {'a', 'e', 'i', 'o', 'u'};

        int n = words.size();
        vector<int>prefixCount(n+1, 0);

        for(int i = 0; i < n; i++) {
            prefixCount[i+1] = prefixCount[i];
            if(vowels.count(words[i][0]) && vowels.count(words[i][words[i].length() - 1])){
                prefixCount[i+1]++;
            }
        }

        vector<int> res;

        for(auto q : queries) {
            int left = q[0];
            int right =  q[1];

            res.push_back(prefixCount[right+1] - prefixCount[left]);
        }

        return res;
    }
};