//#include <iostream>
//#include <iomanip>
//#include <stdlib.h>
//using namespace std;
//typedef struct BiTree* Tree;
//typedef struct BiTree {
//    char data;
//    Tree Left;
//    Tree Right;
//}Node;

//Tree & initBiTree( Tree F ){

//    Tree & t = F;
//    return t;
//}
//void CreateBiTree( Tree & T )
//{
//    char ch;
//    cin>>ch;
//    if( ch == '#' )
//        T = NULL;
//    else{
//        T = new Node;
//        T->data = ch;
//        CreateBiTree( T->Left  );
//        CreateBiTree( T->Right );
//    }
//}
////先序遍历
//void preorderPrintf( Tree & T )
//{
//    if( T != NULL ){
//        cout<<T->data;
//        preorderPrintf( T->Left  );
//        preorderPrintf( T->Right );
//    }
//}
////中序遍历
//void midorderPrintf( Tree & T )
//{
//    if( T != NULL ){
//        midorderPrintf( T->Left  );
//        cout<<T->data;
//        midorderPrintf( T->Right );
//    }
//}
////后序遍历
//void lastorderPrintf( Tree & T )
//{
//    if( T ){
//        lastorderPrintf( T->Left  );
//        lastorderPrintf( T->Right );
//        cout<<T->data;
//    }
//}
//int TreeDepth( Tree & T )
//{
//    int LD,RD;
//    if( T == NULL )
//        return 0;
//    else{
//        LD = TreeDepth( T->Left  );
//        RD = TreeDepth( T->Right );
//        return LD > RD ? LD+1 : RD+1;
//    }
//}
//int main()
//{
//    Tree t1,t2;
//    t2 = initBiTree(t1);
//    CreateBiTree(t2);
//    cout.flags( ios::left );
//    cout<<setw(7)<<"first: ";
//    preorderPrintf(t2);
//    cout<<endl<<setw(7)<<"mid: ";
//    midorderPrintf(t2);
//    cout<<endl<<setw(7)<<"last: ";
//    lastorderPrintf(t2);
//    cout<<endl<<TreeDepth(t2);
//}
