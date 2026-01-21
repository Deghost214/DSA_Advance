#include <bits/stdc++.h>
using namespace std;
bool checkOperation(string st)
{
    if (st == "X++" || st == "++X")
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        {
            string st;
            cin >> st;
            if (checkOperation(st))
            {
                x++;
            }
            else
            {
                x--;
            }
        }
    }
    cout << x << endl;
    return 0;
}