#include <iostream>
#include <math.h>
using namespace std;

void update(int *a, int *b)
{
    int x;
    x = *a + *b;

    *b = *a - *b;
    *a = x;
    *b = abs(*b);
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}