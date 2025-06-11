#include <iostream>
using namespace std;
int main()
{
    int n, s, A[20];
    float prom;
    cin >> n;
    s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        s = s + A[i];
    }
    prom = s / n;
    for (int i = 1; i < n; i++)
    {
        if (A[i] > prom)
        {
            cout << A[i] << endl;
        }
    }
    return 0;
}