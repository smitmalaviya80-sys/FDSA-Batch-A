#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    // compare two adjacent elements then swap if out of order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // find index of min element in remaining unsorted part
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap the found min element with the first unsorted element
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void insertionSort(int arr[], int n)
{
    // consider first element as sorted, start comparing from second element
    // compare with previous elements (not next); shift larger elements right
    // until correct position found (j == -1 or arr[j] <= key), then insert key
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int arr[100], arr1[100], arr2[100];

    cout << "Enter marks: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr1[i] = arr[i];
        arr2[i] = arr[i];
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    selectionSort(arr1, n);
    printArray(arr1, n);

    insertionSort(arr2, n);
    printArray(arr2, n);

    return 0;
}