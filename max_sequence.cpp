#include <iostream>
using namespace std;

int main()
{
  int arr[10001];
  int n;
  int MaxSum = 0,MaxSumNe = 0;
  int count = 0;
  int MinNum = 0,MaxNum = 0;
  int flag1 = 1,flag3 = 0,i;
  cin>>n;
  for( int i = 0; i < n; i++ ){
    cin>>arr[i];
  }
  for( int i = 0; i < n; i++ )
  {
      if( arr[i] > 0 )
          flag3++;
  }
  for(  i = 0; i < n; i++ ){
    count += arr[i];
    if( count > MaxSum ){
        MaxSum = count;
        MaxNum = arr[i]; // already find the MaxNum
    }
    else if( count < 0 ){
        count = 0;
        if( arr[i+1] > 0 && flag1 == 1){
             MinNum = arr[i+1];
             flag1 = 0;
        }
    }
}
  if( flag3 == 0 )
      cout<<MaxSumNe<<" "<<arr[0]<<" "<<arr[n-1];
  else
      cout<<MaxSum<<" "<<MinNum<<" "<<MaxNum;



  return 0;
}
