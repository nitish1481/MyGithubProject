#include <iostream>

using namespace std;

class ComplexNumber
{
    float real;
    float imag;
    public:
        ComplexNumber()
        {
            real=0;
            imag=0;
        }
        ComplexNumber(float r,float i)
        {
            real=r;
            imag=i;
        }
        void display()
        {
            cout<<"The ComplexNumber is "<<real<<" + "<<imag<<"i"<<endl;
        }
        
        friend ComplexNumber addition(ComplexNumber &c1,ComplexNumber &c2);
        friend ComplexNumber substraction(ComplexNumber &c1,ComplexNumber &c2);
        friend ComplexNumber multiplication(ComplexNumber &c1,ComplexNumber &c2);
};

ComplexNumber addition(ComplexNumber &c1,ComplexNumber &c2)
{
    ComplexNumber res;
    res.real=c1.real+c2.real;
    res.imag=c1.imag+c2.imag;
    return res;
}
        
        
ComplexNumber substraction(ComplexNumber &c1,ComplexNumber &c2)
{
    ComplexNumber res;
    res.real=c1.real-c2.real;
    res.imag=c1.imag-c2.imag;
    return res;
}
        
ComplexNumber multiplication(ComplexNumber &c1,ComplexNumber &c2)
{
    ComplexNumber res;
    res.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    res.imag=(c1.real*c2.imag)+(c2.real*c1.imag);
    return res;
}


int main()
{
    float r1,r2,c1,c2;
    cout<<"Enter the real part of c1"<<endl;
    cin>>r1;
    cout<<"Enter the complex part of c1"<<endl;
    cin>>c1;
    cout<<"Enter the real part of c2"<<endl;
    cin>>r2;
    cout<<"Enter the complex part of c2"<<endl;
    cin>>c2;
    
    ComplexNumber comp1(r1,c1),comp2(r2,c2);
    
    ComplexNumber a=addition(comp1,comp2);
    ComplexNumber s=substraction(comp1,comp2);
    ComplexNumber m=multiplication(comp1,comp2);
    
    cout<<"The addition of the ComplexNumber is:"<<endl;
    a.display();
    cout<<"The substraction of the ComplexNumber is:"<<endl;
    s.display();
    cout<<"The multiplication of the ComplexNumber is:"<<endl;
    m.display();
    
    return 0;
}

