///*
// *
// * 这是一个顺序表,里面包含增删查改的功能
// *
//*/


//#include <iostream>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define ERROR 1
//#define OK    0
//typedef int Status;
//typedef int ElemenType;
//using namespace std;

//typedef struct _node{
//    ElemenType *item;
//    ElemenType length;
//}SqList;

//Status InitList( SqList & L ){
//    L.item = new ElemenType[MAXSIZE];
//    if( !L.item )
//        return ERROR;
//    L.length = 0;
//    return OK;
//}
//Status Create( SqList & L,ElemenType n ){

//    int data;
//    for( int i = 1; i <= n; i++ ){
//        cin>>data;
//        L.item[i] = data;
//        L.length++;
//    }
//    return OK;
//}
//Status Print( SqList & L ){

//    if( !L.length ){
//        cout<<"no data item"<<endl;
//        return ERROR;
//    }
//    for( int i = 1; i <= L.length; i++ ){
//        cout<<L.item[i]<<" ";
//    }
//    cout<<endl;
//    return OK;
//}
//Status Length( SqList & L ){
//    if( !L.length )
//        return 0;
//    return L.length;
//}
//Status Find( SqList & L, ElemenType n ){

//    for( int i = 1; i <= L.length; i++ ){

//        if( L.item[i] == n ){
//            cout<<"it's location :"<<i<<endl;
//            return OK;
//        }
//    }
//    cout<<"No found"<<endl;
//    return ERROR;
//}
//Status Insert( SqList & L,int i, ElemenType e ){

//    if( ( i<1 )|| ( i>L.length ) )
//        return ERROR;
//    if( L.length == MAXSIZE )
//        return ERROR;
//    for( int j = L.length; j >= i; j-- ){
//        L.item[j+1] = L.item[j];
//    }
//    L.item[i] = e;
//    ++L.length;
//    return OK;
//}
//Status Delete( SqList & L,ElemenType e ){

//    for( int i = 1; i < L.length; i++ ){

//        if( L.item[i] == e ){
//            for( int j = i+1; j <= L.length; j++ )
//                L.item[j-1] = L.item[j];
//        }
//    }
//    --L.length;
//    return OK;
//}
//Status Destory( SqList & L){

//    while( L.length ){
//        delete[]L.item;
//        --L.length;
//    }
//    return OK;
//}
//int main()
//{
//    SqList sq1;
//    InitList(sq1);
//    Create(sq1,5);
//    Print(sq1);
//    cout<<"which length :"<<Length(sq1)<<endl;
//    Find(sq1,5);
//    Insert(sq1,3,6);
//    Print(sq1);
//    cout<<"which length :"<<Length(sq1)<<endl;
//    Delete(sq1,5);
//    Print(sq1);
//    Destory(sq1);
//    Print(sq1);

//}
