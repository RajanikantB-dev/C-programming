#include<iostream>
using namespace std;

class A
{
    public:
    int     m;

    A(int a)
    {
        m =a;
        cout<<"inside parameterized constructor"<<endl;
    }

    int operator++ ()
    {
        
        m = m+1;
        cout<<m<<endl;
        return m;
    }




};

main()
{

    A obj1(5);
    ++ obj1 ;

    ++ obj1 ;

}