#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag=false;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]!=i+1)
        {
            flag=true;
            cout<<i+1;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"no missing eement";
    }
}