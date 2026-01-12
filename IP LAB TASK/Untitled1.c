#include <iostream>
using namespace std;

//Sabrina Azad//


void print2smallest( int arr[], int arr_size)
{
    int i, first, second;

    if (arr_size < 2)
    {
        cout<<" Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
        }
            if (second == INT_MAX)
               cout << "There is no second smallest element\n";
            else
               cout << "The smallest element is " << first << endl;
               cout<< "The secomd smallest element is " << second << endl;
}

int main()

{
    cout<< "Number of students: 3 \n";
    cout<< "Numbers : 87.5 , 78 , 94 \n";
    int arr[] = {87.5 , 78 , 94 };
    int n = sizeof(arr)/sizeof(arr[0]);

    print2Smallest(arr, n);
    return 0;
}

