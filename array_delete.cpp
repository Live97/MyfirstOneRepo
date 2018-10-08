#include <iostream>
using namespace std;

int Delete( int arr[],int n,int & m )
{
    for( int i = 0; i < n; i++ ){
        if( arr[i] == 3 ){
            m--;
            for( int j = i+1; j <= n; j++ ){
                arr[j-1] = arr[j];
            }
        }
    }
    return m;
}
void insert( int arr[],int n,int x)
{
    for( int i = 0; i < n; i++ ){
        ;
    }
}
void Print( int arr[],int & m )
{
    for( int i = 0; i <= m-1; i++ )
        cout<<arr[i]<<" ";
}

int main()
{

    int arr[] = {1,2,3,4,5,6,6,3,12,123,41,222,3,2,3,1,3,5,2,3};
    int n = sizeof(arr) / sizeof(int)+1;
    int &m = n;
//    Delete(arr,n,m);
    insert(arr,n,30);
    Print(arr,m);

}
