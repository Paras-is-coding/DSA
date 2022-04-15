#include<iostream>
using namespace std;

string movex_to_end(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = movex_to_end(s.substr(1));

    if(ch == 'x'){
        return ans +ch;
    }
    return ch+ans;
}
int main()
{

    cout<<movex_to_end("anbxxxshdxxfdxx");

    return 0;
}