#include <iostream>
#include <stdlib.h>
#define ElemenType int
using namespace std;
typedef struct _list{

    ElemenType Data;
    struct _list *Next;
}Node,*List;

class Struct_List{

    int zhishu,xishu,number;
public:
    Struct_List( int n ){
        this->number = n;
    }
    Struct_List(){
        this->number = 5;
    }
    List Create();
    List Push( List tmp );
    void Delete( int n,List tmp );
    void Clear( List tmp );
    void Print( List tmp );

};

List Struct_List ::Create()
{
    List NewStack,del,tmp;
    NewStack = (List)malloc( sizeof(Node) );
    NewStack->Next = NULL;
    tmp = NewStack;
    Push(tmp);

//    del = NewStack;
//    NewStack = NewStack->Next;
//    free(del);

    cout<<"Create done"<<endl;
    return NewStack;
}
List Struct_List ::Push( List tmp )
{
    List p,q;
    while( this->number-- ){
        p = (List)malloc( sizeof(Node) );
        p->Next = NULL;
        p->Data = number;

        if( tmp->Next == NULL )
            tmp->Next = p;
        else{
            q->Next = p;
        }
        q = p;
    }
}
void Struct_List ::Delete( int n,List tmp )
{
    //boundary question
    //怎么确立是表头？
    List p = tmp;
    List Ptrl;
    while( p ){

        if( p->Data == n ){
           Ptrl->Next = p->Next;
           cout<<"Delete "<<p->Data<<endl;
           free(p);
           return;
        }
        Ptrl = p;
        p = p->Next;
    }
    cout<<"No found"<<endl;
}
void Struct_List ::Clear( List tmp )
{
    List p,q,t;
    p = tmp->Next;
    while( p ){
        q = p->Next;
        tmp->Next = q;
        free(p);
        p = q;

        //why Mycode can't achieve this ???


    }

}
void Struct_List ::Print( List tmp )
{
    List  t  = tmp;
    //before Print you must let the pointer next first
    t = t->Next;
    if( t == NULL )
    {
        cout<<"Is empty"<<endl;
        return;
    }
    while( t ){
        if( (t)->Data )
            cout<<(t)->Data<<" ";
        t = (t)->Next;
    }
    cout<<endl;
}
int main()
{
    List L2;
    Struct_List S1(10);
    L2 = S1.Create();
    S1.Print(L2);

    S1.Delete(3,L2);
    S1.Print(L2);

    S1.Clear(L2);
    S1.Print(L2);


}
