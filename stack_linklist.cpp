//#include <iostream>
//#include <stdlib.h>
//#define ElemenType int
//#define MAXSIZE 100
//using namespace std;
//typedef struct SNode{
//    ElemenType data;
//    struct SNode *next;
//}Stack;

//int IsEmpty( Stack *Ptrl ){

//    return ( Ptrl->next == NULL );
//}
////创建了一个头结点,独立出来的
//Stack *CreateStack()
//{
//    Stack *S;
//    S = ( Stack*)malloc( sizeof(Stack) );
//    S->next = NULL;
//    return S;
//}

//void Push( Stack *Ptrl,int arr[],int n ){

//    Stack *tmp;
//    for( int i = 0; i < n; i++ ){
//        tmp = ( Stack*)malloc( sizeof(Stack) );
//        tmp->data = arr[i];
//        tmp->next = Ptrl->next;
//        Ptrl->next = tmp;
//    }
//}
//void Pop( Stack *Ptrl ){

//    Stack *tmp;
//    int i = 0;
//    if( IsEmpty(Ptrl) )
//        return;
//    while( Ptrl->next ){
//            tmp = Ptrl->next;
//            Ptrl->next = tmp->next;
//            free(tmp);
//            cout<<"Pop.."<<++i<<endl;
//    }
//}
//void Print( Stack *Ptrl ){
//    //这里要先将指针指向下一个位置先,一开始的头结点并不参与我们的过程
//    if( IsEmpty(Ptrl) )
//    {
//        cout<<"Is_empty"<<endl;
//        return;
//    }
//    Ptrl = Ptrl->next;
//    while( Ptrl ){
//        if( Ptrl->data ){
//            cout<<Ptrl->data<<" ";
//            Ptrl = Ptrl->next;
//        }
//    }
//}
//int main()
//{
//    int arr[5] = {1,2,3,4,5};
//    Stack *st1;
//    st1 = CreateStack();
////    IsEmpty(st1);
//    Push(st1,arr,5);
////    Pop(st1);
//    Print(st1);

//}
