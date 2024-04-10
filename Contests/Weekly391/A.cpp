class Solution
{
public:
    int sumOfDigits(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int sum_of_digits = sumOfDigits(x);
        if (x % sum_of_digits == 0)
        {
            return sum_of_digits;
        }
        return -1;
    }
};