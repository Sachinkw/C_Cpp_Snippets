#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int i = 1, ans = max(a, b);
    int num = max(a, b);
    while (i++)
    {
        if (ans % a == 0 && ans % b == 0)
            return ans;
        ans = num * i;
    }
}

int main()
{
    cout << lcm(1, 4) << endl;
    return 0;
}