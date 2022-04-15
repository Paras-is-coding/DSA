#include<iostream>
#include<string>
using namespace std;

void substr_ascii(string s, string ans){
    if(s.length() == 0){
        cout<<ans;
        return;
    }

    char ch = s[0];
    int code = ch;

    string ros = s.substr(1);

    substr_ascii(ros, ans);
    substr_ascii(ros,ans+ch);
    substr_ascii(ros, ans+to_string(code));

}
int main()
{
    substr_ascii("ab", "");
    return 0;
}