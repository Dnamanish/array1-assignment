#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 43, 75, 77, 1, 14, 38};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    if (flag == true)
    {
        cout << "Duplicate found!!!";
    }
    else
        cout << "no duplicate!!!";
}
