class Solution {
public:
    vector<int> getDivisors(int n) {
    vector<int> divs;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}
    bool canFormT(const unordered_map<char, int>& freq, int n, int length) {
    int num_repeats = n / length;
    for (const auto& pair : freq) {
        if (pair.second % num_repeats != 0) {
            return false;
        }
    }
    return true;
}
    int minAnagramLength(string s) {
          int n = s.size();
    unordered_map<char, int> freq;

    for (char c : s) {
        ++freq[c];
    }

    
    vector<int> divisors = getDivisors(n);

    for (int length : divisors) {
        if (canFormT(freq, n, length)) {
            return length;
        }
    }

    return n;  
        
    }
};