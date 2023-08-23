// Write a program for insertion sort on an array of integers by using DSA Algorithm?

#include <iostream>
using namespace std;

void i_s(int arr[], int n)
{
    int i, j, t;
    for (i = 1; i < n; i++)
    {
        t = arr[i];
        j = i - 1;
        while ((t < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = t;
    }
}

int main()
{
    int n, i;
    cout << "Enter the no. of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i_s(arr, n);
    cout << "Sorted array is: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}