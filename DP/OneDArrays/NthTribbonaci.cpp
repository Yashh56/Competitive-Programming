int Tribbonaci(int n)
{
    int arr[38] = {0, 1, 1};
    for (int i = 3; i < sizeof(arr) / sizeof(int); i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    return arr[n];
}