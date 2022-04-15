#include<iostream>
using namespace std;

int min_steps(int arr[], int n)
{
    if(n==0 || arr[0] ==0)
    {
        return INT8_MAX;
    }

    int number_of_jump = 1;
    int jump_index = 0;

    while(jump_index<n)
    {
        if(jump_index + arr[jump_index] < n)
        {
        int maxstep_index = jump_index+1;
        for(int j=1; j<=arr[jump_index]; j++)
        {
            if(arr[maxstep_index+ j] >= arr[maxstep_index] )
            {
                maxstep_index = maxstep_index + j;
            }         
        }
        jump_index = maxstep_index;
        number_of_jump ++;

        }
    }

    return number_of_jump;
}
int main()
{
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int step = min_steps(arr,size);
    
    if(step == INT8_MAX)
    {
        cout<<"We cant reach end : "<<endl;
    }
    else
        cout<<endl<<"The minimum steps are : "<<step<<endl;
    
    return 0;
}