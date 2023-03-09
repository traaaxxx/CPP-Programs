//program to search a given key element from an array for integer, character and double using the same template function

#include<iostream>
using namespace std;
#define N 5

template <class T> 
void getsearch(T x[], T element)
{
    int i;
    cout << endl << "Your Data - ";
    for(i = 0 ; i < N ; i++)
    {
        cout << "\t" << x[i];
    }
    for(i = 0; i < N ; i++)
    {
        if(x[i] == element)
        {
            cout << endl << endl << "Element " << element << " found at " << i + 1 << "th position..." << endl;
            break;
        }
    }
    if(i == N)
    cout << "Element not found..." << endl;
};

int main()
{
    int arr[N], i , element;
    float f_arr[N], f_element;
    cout << endl << "Enter " << N << " Elements for searching (int) - ";
    for (i = 0; i < N; i++)
    {
    	cin >> arr[i];
	}
    cout << endl <<"Enter element to search (int) - ";
    cin >> element;
	getsearch(arr, element);
	
	cout << endl << "Enter " << N << " Elements for searching (float) - ";
    for (i = 0; i < N; i++)
    {
    	cin >> f_arr[i];
	}
    cout << endl << "Enter element to search (float) - ";
    cin >> f_element;
    getsearch(f_arr, f_element);

    return 0;
}
