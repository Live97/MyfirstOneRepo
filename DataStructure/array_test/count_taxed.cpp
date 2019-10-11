/*
 *
 * 计算每个公民的个人收入所得税
*/

//#include <iostream>
//#include <float.h>
//using namespace std;

//float single_tax( float income )
//{
//    static double income_limit[] = { 0,23250,56550,117950,256500,DBL_MAX };
//    static float taxed[] = { .15, .28, .31, .36, .396 };
//    static float pertaxed[] = { 0,3502.5,12798.5,31832.5,81710.5 };

//    int tmp = 1;
//    for( tmp = 1; income >= income_limit[tmp]; tmp++ )
//        ;
//    tmp -= 1;

//    return pertaxed[tmp] + ( taxed[tmp] * ( income - income_limit[tmp]) );
//}
//int main()
//{
//    cout<<single_tax(232323);
//}
