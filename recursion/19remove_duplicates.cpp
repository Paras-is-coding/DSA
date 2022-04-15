#include<iostream>
#include<string>
using namespace std;

string remove_d(string s){
    if(s.length() == 0){
        return " ";
    }
    char ch = s[0];
    string ans = remove_d(s.substr(1));
    if(ch == ans[0]){
        return ans;
    }
    else{
        return (ch +ans);
    }
    
}


int main()
{
    cout<<remove_d("aabbbccdee");
    return 0;
}