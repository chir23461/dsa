#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int lena = a.size();
    int lenb = b.size();
    cout << lena << " " << lenb << endl;
    string c = a + b;
    cout << c << endl;
    char r = a[0];
    a[0] = b[0];
    b[0] = r;
    cout << a << " " << b << endl;

    return 0;
}