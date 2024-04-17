class Solution
{
public:
    int findKthSmallest(std::vector<int> &coins, int k)
    {
        set<int> amounts;

        for (int coin : coins)
        {
            int amount = coin;
            while (amount <= k * *std::max_element(coins.begin(), coins.end()))
            {
                amounts.insert(amount);
                amount += coin;
            }
        }
        vector<int> sorted_amounts(amounts.begin(), amounts.end());
        return sorted_amounts[k - 1];
    }
};
