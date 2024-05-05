class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
         int n = word.size();
    int m = n / k;
    vector<string> blocks(m);
    
    for (int i = 0; i < n; i += k) {
        blocks[i / k] = word.substr(i, k);
    }
    
    unordered_map<string, int> frequency;
    for (const auto& block : blocks) {
        frequency[block]++;
    }
    
    int cnt = 0;
    for (const auto& pair : frequency) {
        if (pair.second > cnt) {
            cnt = pair.second;
        }
    }
    
    int min_operations = m - cnt;
    return min_operations;
    }
};