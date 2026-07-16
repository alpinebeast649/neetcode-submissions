class Solution {
public:
    vector<string> mostVisitedPattern(vector<string>& username, vector<int>& timestamp, vector<string>& website) {
        int n = timestamp.size();
        vector<pair<int,int>> arr;
        for (int i = 0; i < n; ++i) arr.push_back({timestamp[i], i});
        sort(arr.begin(), arr.end(),
             [](auto& a, auto& b){ return a.first < b.first; });

        unordered_map<string, vector<string>> mp;
        for (auto& p : arr) mp[username[p.second]].push_back(website[p.second]);

        unordered_map<string,int> count;
        for (auto& kv : mp) {
            auto& cur = kv.second;
            unordered_set<string> patterns;
            for (int i = 0; i < (int)cur.size(); ++i)
                for (int j = i + 1; j < (int)cur.size(); ++j)
                    for (int k = j + 1; k < (int)cur.size(); ++k)
                        patterns.insert(cur[i] + "#" + cur[j] + "#" + cur[k]);
            for (auto& p : patterns) ++count[p];
        }

        int maxCnt = 0;
        string res;
        for (auto& kv : count)
            if (kv.second > maxCnt ||
               (kv.second == maxCnt && (res.empty() || kv.first < res))) {
                maxCnt = kv.second;
                res = kv.first;
            }

        vector<string> ans;
        string tmp;
        for (char ch : res) {
            if (ch == '#') {
                ans.push_back(tmp);
                tmp.clear();
            } else {
                tmp += ch;
            }
        }
        ans.push_back(tmp);
        return ans;
    }
};