class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp = intervals[i];
            while (i < n and temp[1] >= intervals[i][0])
            {
                temp[1] = max(temp[1], intervals[i][1]);
                i++;
            }
            if (i < n and temp != intervals[i])
                i--;
            ans.push_back(temp);
        }
        return ans;
    }
};