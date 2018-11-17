//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <cstring>
//using namespace std;
//int f2( int &x );
//class CCar
//{
//private:
//    int price;
//    int loader;
//public:
//    CCar(){
//        this->price = 1000;
//        this->loader = 5;
//    }
//    void Print()
//    {
//        cout<<this->price<<" "<<this->loader<<endl;
//    }
//    friend class CDriver;
//};

//class CDriver
//{
//public:
//    CCar MyCar;
//    void ModifyCarPrice(  )
//    {
//        MyCar.price += 1000;
//    }
//    void ModifyCarLoder()
//    {
//        MyCar.loader += 3;
//    }
//    void Print()
//    {
//        cout<<MyCar.price<<" "<<MyCar.loader<<endl;
//    }
//};
////运算符重载
//class Calc{
//public:
//    int number1;
//    float number2;
//    Calc( int n1 = 1,float n2 = 1.0 ):number1(n1),number2(n2){}
//    Calc operator + ( const Calc & obj1 ){

//        return Calc( number1 + obj1.number1,number2 + obj1.number2 );
//    }
//    void Print(){
//        cout<<number1<<" "<<number2<<endl;
//    }
//};
//class Test{

//private:
//    int number1;
//    int number2;
//    Calc calc;
//public:
//    Test( int n1 = 3,int n2 = 4,int n3 = 5,int n4 = 6 ) : number1(n1),number2(n2),calc(n3,n4){}
//    void Print(){
//        cout<<number1<<" "<<number2<<endl;
//    }
//    void Print_calc(){
//        calc.Print();
//    }
//};
//class String{

//    char *str;
//public:
//    String() : str( new char[1] ){

//        str[0] = 0;
//    }
//    const char *P_str(){
//        return str;
//    }
//    String & operator = (  const char *s ){

//        delete [] str;
//        str = new char[ strlen(s)+1 ];
//        strcpy( str,s);
//        return *this;

//    }
//};
//class Complex{

//    double real,imag;
//public:
//    Complex( double r,double i ) : real(r),imag(i){}
//    Complex operator + ( double r ){

//        return Complex( this->real+r, this->imag);
//    }
//    friend Complex operator + ( double r,const Complex & c){
//        return Complex( c.real+ r, c.imag );
//    }
//    Complex PRINT( const Complex & c ){
//        return Complex( c.real+real, c.imag+imag);
//    }
//    void Print(){
//        cout<<real<<" "<<imag<<endl;
//    }
//};

//int main()
//{

////    CCar C1;
////    CDriver D1;
////    C1.Print();
////    D1.ModifyCarLoder();
////    D1.ModifyCarPrice();
////    D1.Print();

////    Calc a(5,1.1),b(3,2.2),c,d;
////    c = a+b;
////    cout<<c.number1<<" "<<c.number2<<endl;
////    cout<<(c+d).number1<<" "<<(c+d).number2<<endl;

////    Test t1,t2(5,6,7,8);
////    t1.Print();
////    t2.Print();

//    String s1,s2;
//    s1 = "Good Luck!";
//    s2 = "dididi";
//    cout<<s1.P_str()<<endl;
//    s1 = s2;
//    cout<<s1.P_str()<<" "<<s2.P_str()<<endl;
//    String & s3 = s1;
//    s3 = "change";
//    cout<<s1.P_str()<<endl;

//    Complex c1(1.0,0.0),c2(5.0,3.0);
//    c1 = c1+5;  // 等价于 c1 = c1.operator+(5);
//    c1 = 5+c1;  // 等价于 c1 = operator +(5,c1);
//    c1.Print();


//    int t = f1(5);
//    cout<<t;

//}
