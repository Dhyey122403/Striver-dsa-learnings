#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start;
    int end;
    st:
        cin >> start >> end;
    if(start < 0 || end < 0) goto st;
    int n = start^end;
    int b = 0;
    while(n>0){
        if(n&1) b++;
        n = n >> 1;
    }
    cout << b;
    return 0;
}
