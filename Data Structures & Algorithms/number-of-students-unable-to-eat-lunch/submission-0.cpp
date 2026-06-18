class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int res = students.size();
        vector<int>count(2);

        for(int&student : students) {
            count[student]++;
        }

        for(int &s : sandwiches) {
            if(count[s] > 0) {
                count[s]--;
                res--;
            } else {
                break;
            }
        }

        return res;
    }
};