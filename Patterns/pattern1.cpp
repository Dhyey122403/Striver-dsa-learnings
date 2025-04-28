/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) // Rows
    {
        for(int j = 0 ; j < n ; j++) // Columns
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
    return 0;
}
