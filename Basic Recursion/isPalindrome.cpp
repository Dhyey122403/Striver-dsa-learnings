#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i,string s){
    int n = s.length();
    if(i >= n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return isPalindrome(i+1,s);
}

int main()
{
    string s1 = "aabbaa";
    string s2 = "agsvxs";
    cout << isPalindrome(0,s1) << endl;
    cout << isPalindrome(0,s2) << endl;
    return 0;
}
