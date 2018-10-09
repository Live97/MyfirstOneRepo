#include <iostream>
using namespace std;
#define MAX_DAY 37
#define WANt_TODO 100
int main()
{
    int day = 0;
    int YuShu = 0;
    int AleadyDone = 28;

    for(  day = 0; day < MAX_DAY; day++ ){

        for( int j = 1; j <= 50; j++ ){

            if( j % 18 == 0 ){
                AleadyDone += 1;
            }else{
                YuShu += ( j % 18 );
            }
            if( YuShu == 18 ){
                AleadyDone += 1;
                YuShu = 0;
            }
        }
        if( AleadyDone == 100)
            break;
    }
    if( AleadyDone >= WANt_TODO )
    {
        cout<<"Can do it"<<endl;
        cout<<"Which will spend "<<day<<" days "<<endl;
    }
    else
        cout<<"Can't do it"<<endl;
}
