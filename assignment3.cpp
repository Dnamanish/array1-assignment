#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 43, 75, 77, 1, 14, 38};
    int min=arr[0];
    for(int i=1;i<=6;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
      }
   
    }
    cout<<"minimum value is: "<<min; 
}
