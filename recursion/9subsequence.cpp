//This program will take a string as input and display its all subsets as output
#include<iostream>
#include<string>
using namespace std;

void subsequence(string input,string output,int index)
{
    if(index>=input.length())
    {
            cout<<output<<endl;
        return;
    }

    subsequence(input,output,index+1);

    output.push_back(input[index]);
    subsequence(input,output,index+1);


}
int main()
{
    string input;
    cout<<"Enter string : ";
    cin>>input;

    string output="";
    
    cout<<"The subsequeces are : "<<endl;
    subsequence(input, output,0);
    return 0;
}