#include <iostream>

using namespace std;

int main()
{
    uint32_t n, k, mini = 1e6, maxN = 1e6;
    int d;
    cin >> n;

    uint32_t a[n + 1], b[10];

    for (int i = 0; i < 10; i++)
        a[i] = 1;

    for (uint32_t i = 10; i <= n; i++)
    {
        k = i;
        a[i] = 1e6;
        mini = 1e6;
        while (k > 0)
        {
            d = k % 10;
            //cout<< d << " ";
            if (a[i - d] + 1 < mini)
                mini = a[i - d] + 1;
            k /= 10;
        }
        a[i] = mini;
        // cout << a[i] << endl;
    }

//    for (uint32_t i = 8; i <= n; i++)
//        cout << a[i] << endl;
    cout << a[n];

}
