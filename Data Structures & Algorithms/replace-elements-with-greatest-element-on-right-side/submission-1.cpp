class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int le = arr.size();
        vector<int>res(le);

        int maxSoFar = -1;

        for(int i = le - 1; i >= 0; i--) {
            res[i] = maxSoFar;
            maxSoFar = max(maxSoFar, arr[i]);
        }

        return res;
    }
};