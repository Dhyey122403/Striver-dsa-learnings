/******************************************************************************

*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = 2*n-1;
    
    for(int i = 0 ; i < h-n ; i++){
        int stars = h-2*i;
        int spaces = 2*i;
        for(int j = 0 ; j < spaces/2 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < stars ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < spaces/2 ; j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0 ; i < n ; i++){
        int stars = 2*i+1;
        int spaces = h-2*i;
        for(int j = 0 ; j < spaces/2 ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < stars ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < spaces/2 ; j++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
