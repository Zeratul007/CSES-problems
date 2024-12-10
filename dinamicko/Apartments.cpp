#include <iostream>
#include <set>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int comp(const void *a, const void *b) {
    return (*(uint32_t *)a - *(uint32_t *)b);
}

int main()
{
    //set<uint32_t> s1, s2;

    uint32_t k, n, m, p = 0, q = 0, ans = 0;


    cin >> n >> m >> k;

    uint32_t* a = new uint32_t[n];
    uint32_t* b = new uint32_t[m];

    for(uint32_t i = 0; i < n; i++)
        cin >> *(a + i);


    //cout << "TEST1" << endl;

    for(uint32_t i = 0; i < m; i++)
        cin >> *(b + i);



    qsort(a, n, sizeof(a[0]), comp);
    qsort(b, m, sizeof(b[0]), comp);

//    for(uint16_t i = 0; i < m; i++)
//        cout << *(b + i) << " ";
//    cout << endl;

    while( p < n && q < m)
    {
        if ( a[p] > b[q] + k)
            q++;
        else
            if ((a[p] < b[q] - k) && (k < b[q]))
                p++;
            else
            {
                p++;
                q++;
                ans++;
            }
    }

    cout << ans;


    return 0;
}
