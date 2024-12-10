#include <iostream>
#include <set>


using namespace std;

int main()
{
    set<uint32_t> s;

    uint32_t x, n;

    cin >> n;

    for(uint32_t i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
    }

    cout << s.size();

    return 0;
}
