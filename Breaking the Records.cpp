#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=0,y=0;
    int min=arr[0],max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            x++;
            max=arr[i];
        }
        if(arr[i]<min)
        {
            y++;
            min=arr[i];
        }
    }
    cout<<x<<" "<<y;
    
}
