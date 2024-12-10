#include <iostream>

using namespace std;

int main()
{
    uint32_t n, m = 1000000000 + 7;

    cin >> n;

    uint32_t a[n + 1];

    a[0] = 0;
    a[1] = 1;
    if(n > 1)
        a[2] = 2;
    if(n > 2)
        a[3] = 4;
    if(n > 3)
        a[4] = a[1] + a[2] + a[3] + 1;
    if(n > 4)
        a[5] = a[1] + a[2] + a[3] + a[4] + 1;
    if(n > 5)
        a[6] = a[1] + a[2] + a[3] + a[4] + a[5] + 1;
    if(n > 6)
        a[7] = 63;

    for (uint32_t i = 8; i <= n; i++)
    {
        a[i] = 0;
        for (int j = 1; j <= 6; j++)
            a[i] = (a[i] + a[i - j])%m;
    }

//    for (uint32_t i = 8; i <= n; i++)
//        cout << a[i] << endl;
    cout << a[n];

}
