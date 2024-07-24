#include <bits/stdc++.h>
using namespace std;

void getAns()
{
    string ans, str1 = "", str2 = "", st = "";

    cin >> str1;

    val = str1[0] - '0';
    val = 10 * val + str1[1] - '0';
    if (val > 12)
    {
        val -= 12;

        f = 1;
    }
    else if (val == 0)
    {
        val = 12;
    }
    else if (val == 12)
        f = 1;
    if (f == 1)
        st = "PM";
    else
        st = "AM";

    str2 = to_string(val);
    if (val < 10)
        ans += '0';
    ans += str2;

    ans += ':';
    ans += str1[3];
    ans += str1[4];
    ans += " ";
    ans += st;

    cout << ans << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test > 0)
    {
        getAns();
        test--;
    }
}