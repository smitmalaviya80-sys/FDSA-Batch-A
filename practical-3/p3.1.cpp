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
    //compare two adjesent element then swap it
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
        //find min eleent and add front of the arry
        int min = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min= arr[j];
            }
        }

        int temp = arr[i];
        arr[i] = min;
        min = temp;
    }
}

void insertionSort(int arr[], int n)
{
    //consider first element of shorted and start comparing secound element
    //here compare previous element of arry not a next element 
    //if the previous element is smaller than current till comparing stop and copy element of previous to current and 
    //end of comparing key store small element when j==0
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

    int arr[100] ,arr1[100] ,arr2[100];

    cout << "Enter marks:";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        arr1[i]=arr[i];
        arr2[i]=arr[i];

        
    }

    bubbleSort(arr, n);
   
    printArray(arr, n);

    selectionSort(arr1, n);
   
    printArray(arr1, n);

   
    insertionSort(arr2, n);
   
    printArray(arr2, n);

    return 0;
}