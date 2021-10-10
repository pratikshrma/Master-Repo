#include <iostream>
#include <vector>
int main()
{
    int n, k;
    int count = 0;
    std::cin >> n >> k;

    std::vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (vec[i] > k)
        {
            count++;
        }
    }
    std::cout << count;

    return 0;
}