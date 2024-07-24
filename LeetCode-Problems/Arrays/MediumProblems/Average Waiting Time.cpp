class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int available_at = 0;
        double total_wait = 0;
        for(auto& i:customers){
            int arrival = i[0] , t =i[1];
            available_at = max(available_at,arrival) + t;
            total_wait += available_at - arrival; 
        }
        return (double) total_wait / customers.size();
    }
};
