#include<iostream>
#include<vector>
using namespace std;

int count = 0;

void subset(vector<char> input,vector<char> output, int i)
{
    if(i>=input.size())
    {
        for(int j=0; j<output.size();j++)
        {
            cout<<output[j]<<" ";
        }cout<<endl;
        count++;
        return;
    }

    subset(input,output,i+1);
    

    output.push_back(input[i]);
    subset(input,output,i+1);

    
}


int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<char> arr(n); // You can anytime character type input to integer.
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<char> output;// I created a null array to pass 

    cout<<"Displaying the subsets : "<<endl;
    subset(arr,output,0);// Here i called functio passing inputted array , empty array and starting index

    cout<<"The total numbers of subset are : "<<count<<endl;

    return 0;
}