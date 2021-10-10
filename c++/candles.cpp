#include <iostream>
using namespace std;
void sort(int size)
{

    int arr[size], c[size], temp;
    for (int i = 0; i < size; i++) //input entry
    {
        cin >> arr[i];
    }

    //counting same integer
    for (int i = 0; i < size; i++)
    {
        c[i] = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] >arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if(arr[i] ==arr[j]){
                c[i]++;
            }
        }
    }

    //sorting
    /* for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    } */

    /* for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
   }
 */
    cout << c[size-1];
}

int main()
{
    int n ;
   /*  cout << "enter the size"; */
    cin >> n;
    sort(n);
    return 0;
}
