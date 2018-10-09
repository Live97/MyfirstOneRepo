#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#define ElementType  int
#define MAXN 1000
using namespace std;

typedef struct Link_list {
    ElementType value;
    struct Link_list *Next;
}link;

typedef struct _link {
    link *head;
}Node;

void Assign( Node *Ptrl )
{
    link *p,*q;
    int member;
    cin>>member;
    int i,data;
    for( i = 1; i <= member; i++ ){
        cin>>data;
        p = ( link* )malloc( sizeof(link));
        p->value = data;
        p->Next = NULL;

        if( Ptrl->head == NULL )
            Ptrl->head = p;
        else
            q->Next = p;

        q = p;
    }
}
void FoundNumber( Node *Ptrl,int k)
{
    link *p = Ptrl->head;
    int i = 1;
    while( p != NULL && i != k ){
        p = p->Next;
        i++;
    }
    if( i == k)
        cout<<p->value<<endl;
    else
        cout<<"Not found"<<endl;
}
void Print( Node *Ptrl )
{
    link *p;
    p = Ptrl->head;
    while( p ){
        cout<<p->value<<" ";
        p = p->Next;
    }
    cout<<endl;
}
void Insert( Node *Ptrl )
{
    link *p,*q;

}
int main()
{
    Node form;
    form.head = NULL;
    Assign( &form );
    Print( &form );
    FoundNumber( &form,3);
}
