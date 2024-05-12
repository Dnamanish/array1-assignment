#include <iostream>
#include <climits>    //// use for max or min
using namespace std;
int main()
{
    int arr[7] = {2, 43, 75, 77, 1, 14, 38};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]>mx)
        {
           smx=mx;
            mx=arr[i];
        }
    }
    cout<<smx<<endl;;
    cout<<mx;

}
