class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int length = arr.size();
        unordered_map<int, int>greatest;

        for(int i = 0; i<length; i++) {
            greatest[i] = greatestm(arr, i+1, length);
            if(i == length - 1) {
                greatest[i] = -1;
            }
        }

        vector<int>resultant;
        for(int i = 0; i < length; i++) {
            resultant.push_back(greatest[i]);
        }

        return resultant;
    }

    int greatestm(vector<int>&arr, int start, int end) {
        int great = INT_MIN;
        for(int i = start; i<end; i++) {
            if(arr[i] > great) {
                great = arr[i];
            }
        }
        return great;
    }
};