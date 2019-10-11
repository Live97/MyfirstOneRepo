//#include <iostream>
//#include <string.h>
//using namespace std;

//char *my_strstr( char const *s1,char const *s2 )
//{
//    register char *last;
//    register char *current;

//    last = NULL;

//    if( *s2 != '\0' ){

//        current = strstr( s1,s2 );

//        while( current != NULL ){

//            last = current;
//            current = strstr( last+1,s2 );
//        }
//    }
//    return last;
//}
//int main()
//{
//    cout<<my_strstr( "ababaabababacaba","ba" )<<endl;
//    cout<<strstr( "ababaabababacaba","baa" )<<endl;
//    cout<<strpbrk( "ababaabababacaba","c" )<<endl;
//}
