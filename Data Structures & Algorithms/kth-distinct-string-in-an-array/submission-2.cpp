class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        int size = arr.size();
        vector<string>res;
        for(int i = 0; i < size; i++) {
            freq[arr[i]]++;
        }
        int fr = 0;
        for(int i = 0; i < size; i++) {
            if(freq[arr[i]] == 1) {
                res.push_back(arr[i]);
            }
        }
        int len = res.size();
        if(len >= k) {
            return res[(k-1)];
        } else {
            return "";
        }
    }
};