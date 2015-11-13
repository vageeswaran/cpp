#include <bits/stdc++.h>
using namespace std;

void selectionSort(int* arr, int size, int noOfElemsToSort)
{
    assert(arr);
    assert(size > 0);
    int count = 0;
    int minIdx = 0;
    for (int i = 0; i < size-1; ++i)
    {
        if (count == noOfElemsToSort)
            break;
        minIdx = i;
        for (int j = i+1; j < size; ++j)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            int tmp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = tmp;
        }
        ++count;
    }
}

/*Modified Selection Sort where data is sorted in ascending order
but traversing array from reverse.*/
void selectionSortReverse(int* arr, int size, int noOfElemsToSort)
{
    assert(arr);
    assert(size > 0);
    int maxIdx = 0;
    int count = 0;
    for (int i = size-1; i > 0; --i)
    {
        if (count == noOfElemsToSort)
            break;
        maxIdx = i;
        for (int j = i-1; j >= 0; --j)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        if (maxIdx != i)
        {
            int tmp = arr[maxIdx];
            arr[maxIdx] = arr[i];
            arr[i] = tmp;
        }
        ++count;
    }
}
int maxMultipleOfThree(int* arr, int size)
{
	int i;
    assert(arr);
    assert(size > 2);
    selectionSort(arr, size, 2);
    for(i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
    selectionSortReverse(arr, size, 3);
    for(i=0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int product1 = arr[0] * arr[1] * arr[size-1];
    int product2 = arr[size-3] * arr[size-2] * arr[size-1];
    return (product1 > product2)?product1:product2;
}
int main()
{
int n;
cin>>n;
int a[n],i;
for(i=0;i<n;i++) cin>>a[i];
cout<<"\n"<< maxMultipleOfThree(a,n);
return 0;
}
