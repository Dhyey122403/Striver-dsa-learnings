#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v){
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        int mini = i;
        for(int j = i + 1 ; j < n ; j++){
            if(v[mini] > v [j]) mini = j;
        }
        swap(v[mini],v[i]);
    }
}
int main()
{
    vector<int> v = {1,3,4,2};
    for (int i = 0; i < 4; i++) {
        cout << v[i] << " ";
    }
    bubble_sort(v);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        cout << v[i] << " ";
    }    

    return 0;
}
