#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"inside the default constructor"<<endl;
    }
    A(int a)
    {
        cout<<"inside A constructor"<<endl;
        cout<<a<<" "<<endl;
    }  
    virtual void print()
    {
        cout<<"inside class A"<<endl;
    }
    static void print1()
    {
        cout<<"inside the print function\n"<<endl;
    }

    ~A()
    {
        cout<<"inside A Destructor"<<endl;
    }

};

class B: public A
{
    public:
    B(int id,int b):A{b}
    {
        cout<<"inside B constructor"<<endl;
    }  

    void print()
    {
        cout<<"inside Print of B"<<endl;
    }

    ~B()
    {
        cout<<"inside B Destructor"<<endl;
        
    }

};


int main()
{


    B b2(10,12);
    b2.print1();
    A::print1();


}

