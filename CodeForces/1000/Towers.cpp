#include <iostream>
#include <algorithm>
using namespace std;

int cnt[1010];  // Array to store the count of each number
int n, x;

int main() {
    // Read the number of elements
    cin >> n;

    // Read each element and increment its count in the 'cnt' array
    while (n--) {
        cin >> x;
        cnt[x]++;
    }

    int all = 0, m = 0;  // Variables to store total distinct numbers and max frequency

    // Loop through the 'cnt' array to calculate 'all' and 'm'
    for (int i = 1; i < 1010; i++) {
        if (cnt[i] > 0) {
            all++;               // Count how many distinct numbers are present
            m = max(m, cnt[i]);  // Find the maximum frequency of any number
        }
    }

    // Print the results
    cout << m << " " << all << endl;

    return 0;
}
