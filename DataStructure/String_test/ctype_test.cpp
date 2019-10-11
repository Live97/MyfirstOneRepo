//#include <iostream>
//#include <iomanip>
//#include <ctype.h>
//using namespace std;
//void ctype_test( char *string )
//{
//    int ctrl,space,number,upper_char,lower_char,punct,cannotprint;
//    ctrl = space = number = upper_char = lower_char = punct = cannotprint = 0;
//    while( *string != '\0' ){
//        char *t = string;
//        if( iscntrl(*t) ){
//            ctrl += 1;
//        }else if( isspace(*t) ){
//            space += 1;
//        }else if( isdigit(*t) ){ //纯数字 0-9
//            number += 1;
//        }else if( isupper(*t) ){
//            upper_char += 1;
//        }else if( islower(*t)  ){
//            lower_char += 1;
//        }else if( ispunct(*t) ){
//            punct += 1;
//        }else if( !isprint(*t) ){
//            cannotprint += 1;
//        }

//        string++;
//    }
//    cout<<setw(-10)<<"isctrl: "<<setw(10)<<ctrl<<endl;
//    cout<<setw(-10)<<"isspace: "<<setw(10)<<space<<setw(10)<<endl;
//    cout<<setw(-10)<<"isnumber: "<<setw(10)<<number<<setw(10)<<endl;
//    cout<<setw(-10)<<"isupper: "<<setw(10)<<upper_char<<setw(10)<<endl;
//    cout<<setw(-10)<<"islower: "<<setw(10)<<lower_char<<setw(10)<<endl;
//    cout<<setw(-10)<<"ispunct: "<<setw(10)<<punct<<setw(10)<<endl;
//    cout<<setw(-10)<<"can'not print: "<<setw(10)<<cannotprint<<setw(10)<<endl;
//}
//int main()
//{
//    char string_test[500];
//    cin.getline( string_test,500 );
//    ctype_test(string_test);
//}
