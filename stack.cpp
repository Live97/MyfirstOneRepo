#include <iostream>
#include <stdlib.h>
#include <error.h>
#include <stack>
#define ElemenType int
#define MAXSIZE 100
using namespace std;
//typedef struct SNode* Stack2;
typedef struct SNode{

    ElemenType data[MAXSIZE];
    int top;
}Stack;
bool Is_empty( Stack *Ptrl ){
    if( Ptrl->top == 0 ){
        return false;
    }
    return true;
}
bool Is_Filled( Stack *Ptrl ){
    if( Ptrl->top == MAXSIZE-1 ){
        return false;
    }
    return true;
}
void Push( Stack *Ptrl,int arr[],int n){

    if( Is_Filled(Ptrl) == false )
        return;
    else{
        for( int i = 0; i < n; i++ ){
//            Ptrl->data[i+1] = arr[i];
//            Ptrl->top++;
//             等价
            Ptrl->data[(++Ptrl->top)] = arr[i];
        }
    }
}
void Pop( Stack *Ptrl ){

    if( Is_empty(Ptrl) == false )
        return ;
    else{
        while( Ptrl->top > 0 ){
            Ptrl->data[(--Ptrl->top)];
            cout<<"Pop..."<<endl;
        }
    }
}
void Print( Stack *Ptrl ){

    if( Is_empty(Ptrl) == false ){
        cout<<"is_empty"<<endl;
        return;
    }else{
        while( Ptrl->top > 0  ){
            cout<<Ptrl->data[Ptrl->top]<<" ";
            Ptrl->top--;
        }
        cout<<endl;
    }
}
int main()
{
    Stack st1;
    st1.top = 0;
    int arr[5] = {1,2,3,4,5};
    Push(&st1,arr,5);
    Print(&st1);
    Pop(&st1);
    Print(&st1);
}
