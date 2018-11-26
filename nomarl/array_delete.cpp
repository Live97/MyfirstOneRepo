#include <iostream>
#include <vector>
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
    int ins;
    cout<<"Where the position you wanto insert: ";
    cin>>ins;
    for( int i = 0; i < n; i++ ){

        if( ins == n-1 )
        {
            cout<<"I'm sorry this Array is filled"<<endl;
            return ;
        }else if( i == ins ){
            for( int j = n-1; j >= ins; j-- ){
                arr[j+1] = arr[j];
                arr[i] = x;
                return ;
            }
        }
    }
}
void Print( int arr[],int n )
{
    for( int i = 0; i <= n; i++ )
        if( arr[i] )
            cout<<arr[i]<<" ";
}

int main()
{

    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(int);
    int &m = n;
    Delete(arr,n,m);
    insert(arr,n,30);
    Print(arr,n);


}
