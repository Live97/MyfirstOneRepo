//#include <iostream>
//using namespace std;
//int Is_Suffer_Attack( int x, int y );
//void Attack_Range( int x,int y );
//int arr[11][11];
//int location_array[8][2] = {
//    {0, 1},           //方向数组,右
//    {1, 1},           //右下
//    {1, 0},           //下
//    {1,-1},          //左下
//    {0,-1},           //左
//    {-1,-1},          //左上
//    {-1,0},           //上
//    {-1,1}            //右上
//};
//void Attack_Range( int x,int y )
//{
//    int tx,ty;
////    arr[x][y] = 1;
//    int tmp1,tmp2;
//    for( int i = 0; i <= 7; i++ ){

//        tx = x + location_array[i][0];
//        ty = y + location_array[i][1];

//        tmp1 = x;
//        tmp2 = y;
//        while( ty <= 10 ){

//            arr[tmp1][++ty] = 2;
//        }
//        while( ty >= 0 ){
//            arr[tmp1][ty--] = 2;
//        }
//        while( tx <= 10 ){
//            arr[++tx][tmp2] = 2;
//        }
//        while( tx >= 0 ){
//            arr[tx--][tmp2] = 2;
//        }
//        while( tmp1 >= 0 && tmp2 >= 0 )
//            arr[--tmp1][--tmp2] = 2;
//        tmp1 = x;
//        tmp2 = y;
//        while( tmp1 >= 0 && tmp2 <= 10 )
//            arr[--tmp1][++tmp2] = 2;
//        tmp1 = x;
//        tmp2 = y;
//        while( tmp1 <= 10 && tmp2 >= 0 )
//            arr[++tmp1][--tmp2] = 2;
//        tmp1 = x;
//        tmp2 = y;
//        while( tmp1 <= 10 && tmp2 <= 10 )
//            arr[++tmp1][++tmp2] = 2;

//        //究竟要加什么循环条件才可以使对应方向的数能改变
//    }

//    arr[x][y] = 1;
//    return;
//}
//void Print()
//{
//    for( int i = 1; i <= 10; i++ ){
//        for( int j = 1; j <= 10; j++ )
//            cout<<arr[i][j]<<" ";
//        cout<<endl;
//    }
//    cout<<endl;
//}
//void PutDoan_The_Queen( int x,int y )
//{
//    if( x > 10 ){
//        Print();
//        return;
//    }
//    else{
//        Attack_Range(x,y);
//        if( Is_Suffer_Attack(x,y) ){

//            PutDoan_The_Queen(x+1,y);
//        }else{
//            Is_Suffer_Attack(x,y+1);
//        }
//    }
//}
//int Is_Suffer_Attack( int x, int y )
//{
//    int tx = x;
//    int ty = y;
//    for( int i = 1; i <= 10; i++ ){

//        for( int j = 1; j <= 10; j++ ){

//            if( arr[i][j] == 2 ){
//                return 0;
//            }
//            else
//                return 1;
//        }
//    }
//}
//int main()
//{
//    Print();
////    Attack_Range(1,5);
//    PutDoan_The_Queen(1,1);
//    cout<<endl;
//    Print();
//}
