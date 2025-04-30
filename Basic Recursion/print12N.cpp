#include <bits/stdc++.h>
using namespace std;

int count = 1;

void printNumber(int i ,int n){
    cout << i << endl;
    i++;
    if(i <= n) printNumber(i,n);
}

int main()
{
    printNumber(1,10);    
    return 0;
}
