#include <bits/stdc++.h>
using namespace std;

void printName(int n){
    cout << "Hello, Dhyey" << endl;
    if(n==1) return;
    return printName(n-1);
}

int main()
{
    printName(10);    
    return 0;
}
