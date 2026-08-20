class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long waiting = 0;

        int currentTime = 0;

        for(auto customer: customers) {
            int arrival = customer[0];
            int prepTime = customer[1];
            int startTime = max(currentTime, arrival);
            int finishTime = startTime + prepTime;
            int waitTime = finishTime - arrival;
            waiting += waitTime;
            currentTime = finishTime;
        }

        return (double)waiting / customers.size();
    }
};