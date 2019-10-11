///*
// *
// * 用的是深度优先查找算法
// *
//*/
//#include <iostream>
//using namespace std;
////在主函数外初始化,方便dfs函数使用

//int arr[51][51];//初始化地图
//int book[51][51];//标记该坐标是否出现过,初始化为0
//int location_array[4][2] = {
//    {0, 1},           //方向数组,右
//    {1, 0},           //下
//    {0,-1},           //左
//    {-1,0}            //上
//};
//int n,m,q,p;
//int mini = 9999;
//void dfs( int x,int y,int step )
//{

//    if( x == p && y == q ){

//        if( step < mini )
//            mini = step;
//        return ;
//    }
//    int tx,ty,k;
//    for( k = 0; k <= 3; k++ )
//    {
//        tx = x + location_array[k][0];
//        ty = y + location_array[k][1];
//        if( tx < 1 || tx > n || ty < 1 || ty > m )
//            continue;
//        if( arr[tx][ty] == 0 && book[tx][ty] == 0 ){

//            book[tx][ty] = 1;
//            dfs( tx,ty,step+1 );
//            book[tx][ty] = 0;
//        }
//    }
//    return;
//}
//int main()
//{
//    int startx,starty;
//    cin>>n>>m;
//    for( int i = 1; i <= n; i++ )
//        for( int j = 1; j <= m; j++ )
//            cin>>arr[i][j];
//    cin>>startx>>starty>>p>>q;
//    book[startx][starty] = 1;
//    dfs( startx,starty,0 );
//    cout<<mini;
//}
