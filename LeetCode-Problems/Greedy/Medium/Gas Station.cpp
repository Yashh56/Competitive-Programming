class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int SumCost = accumulate(cost.begin(), cost.end(), 0);
        int SumGas = accumulate(gas.begin(), gas.end(), 0);

        if (SumCost > SumGas)
            return -1;

        int currentGas = 0;
        int ind = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            currentGas += gas[i] - cost[i];
            if (currentGas < 0)
            {
                currentGas = 0;
                ind = i + 1;
            }
        }
        return ind;
    }
};