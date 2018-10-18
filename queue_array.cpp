//#include <iostream>
//#include <queue>
//#define ElemenType int
//#define MAXSIZE 10
//using namespace std;
//typedef struct Queue{
//    ElemenType data[MAXSIZE];
//    int head;
//    int last;
//}que;
//que CreateQueue( int MaxSize ){

//    que q1;
//    q1.head = 1;
//    q1.last = 1;
//    for( int i = 1; i <= MaxSize; i++ ){
//        q1.last++;
//    }
//    return q1;
//}
//bool Is_filled( que *Ptrl ){

//    if( Ptrl->last > MAXSIZE )
//        return false;

//    return true;
//}
//void Push( que * Ptrl ){

//    int count = 1;
//    for( int i = 1; i <= Ptrl->last; i++,count++ ){
//        Ptrl->data[i] = count;
//    }
//}
//void Pop( que *Ptrl ){

//    for( int i = Ptrl->head; i <= Ptrl->last; i++ ){

//        cout<<Ptrl->data[i]<<" Pop"<<endl;
//        Ptrl->head++;
//    }
//}
//void Print( que * Ptrl ){

//    if(Ptrl->head > Ptrl->last-1){
//        cout<<"Is_empty"<<endl;
//        return;
//    }
//    for( int i = Ptrl->head; i <= Ptrl->last; i++ )
//        cout<<Ptrl->data[i]<<" ";
//    cout<<endl;
//}
//void Resever( que *Ptrl )
//{
//    for( int i = Ptrl->last; i >= Ptrl->head; i-- )
//        cout<<Ptrl->data[i]<<" ";
//}
//int main()
//{
//    que q2;
//    q2 = CreateQueue(8);
//    Push(&q2);
////    Pop(&q2);
//    Print(&q2);
//    Resever(&q2);
//}
