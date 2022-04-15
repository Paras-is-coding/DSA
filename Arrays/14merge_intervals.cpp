#include<iostream>
using namespace std;

struct interval{
    int x;
    int y;
};

interval merge_intervals(interval a, interval b)
{
    interval merged;
    if(a.x <= b.x)
    {
        merged.x = a.x;
    }    
    else{
        merged.x = b.x;
    }
    if(a.y >= b.y)
    {
        merged.y = a.y;
    }
    else{
        merged.y = b.y;
    }
    return merged;
}

void display_interval(interval a)
{
    cout<<"("<<a.x<<" , "<<a.y<<")"<<endl;
}
int main()
{
    interval a, b, ans;
    cout<<"Enter interval a : "<<endl;
    cin>>a.x;
    cin>>a.y;

    cout<<"Enter interval b : "<<endl;
    cin>>b.x; 
    cin>>b.y;

    cout<<"Intervals before merging : "<<endl;
    display_interval(a);
    display_interval(b);

    ans = merge_intervals(a,b);
    cout<<"Merged interval : "<<endl;
    display_interval(ans);

    return 0;
}