#include <iostream>
using namespace std;

typedef struct SNode{
  int XiShu;
  int ZiShu;
  struct SNode *next;
}List;
void Push( int x,int z,List *Ptrl );
List *Create(){

    List *NewStack,*tmp,*del;
    //老师的建议的做法先申请一个空节点,以后需要添加的结点都放在它后面,最后再free掉
    //我在想有没有其他的方法，想法是有的...但是暂时没能实现...
    NewStack = (List*)malloc( sizeof(List) );
    NewStack->next = NULL;
    int count,zishu,xishu;
    cin>>count;
    tmp = NewStack;
    for( int i = 1; i <= count; i++ ){
        cin>>xishu>>zishu;
        Push(xishu,zishu,tmp);
    }
    del = NewStack;
    NewStack = NewStack->next;
    free(del);
    return NewStack;
}
void Push( int x,int z,List *Ptrl ){

    List *p,*q;
    p = (List*)malloc( sizeof(List) );
    p->XiShu = x;
    p->ZiShu = z;
    p->next = NULL;
    if( (Ptrl)->next == NULL )
        (Ptrl)->next = p;
    else{
        q->next = p;
    }
    q = p;

}
List *Sum( List *Ptrl,List *Strl ){

    //什么时候去申请空间？
    List *NewStack,*tmp,*del;
    List *P1,*S1;
    int sum;
    P1 = Ptrl;
    S1 = Strl;
    NewStack = (List*)malloc( sizeof(List) );
    NewStack->next =  NULL;
    tmp = NewStack;
    while( P1 && S1 ){

        if( P1->ZiShu > S1->ZiShu ){
            tmp->next = P1;
            P1 = P1->next;
        }
        else if( P1->ZiShu < S1->ZiShu ){
            tmp->next = S1;
            S1 = S1->next;
        }
        //当两个多项式的非零项指数相等时...
        //直接改变那个系数就行了... 我还想直接申请一个新的临时结点然后指过去...典型的又难又费事
        //原来一开始方向就偏了,怪不得...
        else if( P1->ZiShu == S1->ZiShu ){
            sum = P1->XiShu + S1->XiShu;
            if( sum ){
                P1->XiShu = sum;
                tmp->next = P1;
                //相等时两个指针都要向后移动
                P1 = P1->next;
                S1 = S1->next;
            }
        }
        tmp = tmp->next;
    }
    tmp->next = P1 ? P1 : S1;
    del = NewStack;
    NewStack = NewStack->next;
    free(del);
    return NewStack;
}
List *Mult()
{
    List *NewStack,*tmp;

}
void Print( List *Ptrl ){

    while( Ptrl ){
        cout<<Ptrl->XiShu<<" "<<Ptrl->ZiShu<<" ";
        Ptrl = Ptrl->next;
    }
    cout<<endl;
}
int main()
{
  List *st1,*st2,*st;
  st1 = Create();
  st2 = Create();
  st = Sum(st1,st2);
  Print(st);

}
