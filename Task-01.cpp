// Write recursive function SUM, take two parameters: array, size as input and return sum of elements of array.
#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    if (n == 0)
        return 0;
    else
        return arr[n - 1] + sum(arr, n - 1);
}
int main()
{
    int n;
    cout << "Enter size of array: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i ++) 
    {
        cout << "Enter element " << i << " of array: "; cin >> arr[i];
    }
    cout << sum( arr, n);
    return 0;
}