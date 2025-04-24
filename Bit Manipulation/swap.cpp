#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << "A is " << a << " and B is " << b << endl;
    
    // swapping using xor
    a = a^b; // a stores a^b
    b = a^b; // b stores a^b^b which is a
    a = a^b; // a stores a^b^a which is b
    
    cout << "A is " << a << " and B is " << b << endl;
    return 0;
}
