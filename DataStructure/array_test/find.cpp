#include <iostream>
using namespace std;

void Find( int arr[],int target )
{
    for( int i = 0; i < 10; i++ ){

        if( arr[i] == target ){

            cout<<"find"<<endl;
            cout<<i<<endl;
            return;
        }
    }
    cout<<"not found"<<endl;
}
int main()
{
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };

    Find(arr,5);

}
