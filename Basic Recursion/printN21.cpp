#include <bits/stdc++.h>
using namespace std;

void printNumber(int n){
    cout << n << endl;
    if(n>1) printNumber(n-1);
}

int main()
{
    printNumber(10);    
    return 0;
}
