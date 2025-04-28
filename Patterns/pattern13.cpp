#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    for(int i = 0 ; i < n ; i++){
        int spaces = n-1-i;
        int num = n-spaces;
        for(int j = 0 ; j < num ; j++){
            cout << count << " ";
            count++;
        }
        for(int j = 0 ; j < num ; j++){
            cout << " ";
        }
        cout << endl;
          
    }
    return 0;
}
