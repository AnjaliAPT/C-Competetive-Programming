#include<bits/stdc++.h>

using namespace std;

void modifiedBubbleSort(int arr[], int n)
{
    bool found;

    for(int i = 0; i < n; i++)
    {
        found = false;
        
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                found = true;
            }
        }

        if(found == false)
            break;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    modifiedBubbleSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}