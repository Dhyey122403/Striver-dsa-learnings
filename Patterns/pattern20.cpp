#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int length = 2*n;
    for(int i = 0 ; i < n ; i++){
        int stars = 2*i;
        int spaces = length - stars;
        for(int j = 0 ; j < stars/2 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < spaces ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < stars/2 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0 ; i < n ; i++){
        int spaces = 2*i;
        int stars = length - spaces;
        for(int j = 0 ; j < stars/2 ; j++){
            cout << "*";
        }
        for(int j = 0 ; j < spaces ; j++){
            cout << " ";
        }
        for(int j = 0 ; j < stars/2 ; j++){
            cout << "*";
        }
        if(i < n-1) cout << endl;
    }
    

    return 0;
}
