#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 65+n-1; // nth alphabet for 5 will be 'E'
    for(int i = 0 ; i < n ; i++){ // rows
        int spaces = n - i - 1; // no of spaces
        for(int j = n-spaces ; j > 0 ; j--){ // prints from nth alphabet to A in reverse order
            cout << char(int(c)-j+1) << " "; // nth alphabet - j + 1
        }
        cout << endl;
    }

    return 0;
}
