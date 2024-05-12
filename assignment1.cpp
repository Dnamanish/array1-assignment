#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 4, 3, 5, 6, 7, 1};
    int product = 1;
    for (int i = 0; i <= 6; i++)
    {
        product = product * arr[i];
    }
    cout << product;
}
