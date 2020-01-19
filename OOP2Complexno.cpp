/*      PROBLEM STATEMENT
Implement a class Complex which represents the Complex Number data type. Implement the following operations:
   1. Constructor (including a default constructor which creates the complex number 0+0i).
   2. Overloaded operator+ to add two complex numbers.
   3. Overloaded operator* to multiply two complex numbers.
   4. Overloaded << and >> to print and read Complex Numbers.
*/


#include<iostream>

using namespace std;

class Complex
{
   float real, imaginary;
   public:

     Complex() : real(0.0), imaginary(0.0)
      { }
     Complex(Complex & X) : real(X.real), imaginary(X.imaginary)
      { }

     friend istream & operator>> (istream &in, Complex &X)
     {
       cout<<"\n\t Enter real part of complex no: ";  in>>X.real;
       cout<<"\t Enter imaginary part of complex no: "; in>>X.imaginary;
       return in;
     }

     friend ostream & operator<< (ostream &out, Complex &X)
      {
       out<<" "<<X.real<<" + i("<<X.imaginary<<")\n";
       return out;
     }

     Complex operator+ (Complex &X)
      {
        Complex temp;
        temp.real = real + X.real;
        temp.imaginary = imaginary + X.imaginary;
        return temp;
      }

      Complex operator* (Complex &X)
      {
        Complex temp;
        temp.real = (real * X.real) - (imaginary * X.imaginary);
        temp.imaginary = (real * X.imaginary) + (X.real * imaginary);
        return temp;
      }
};




int main()
{
  Complex Num1, Num2, Add, Multiply;
  cin>>Num1;
  cout<<Num1;

  cout<<"\n Enter another complex no";
  cin>>Num2;

  Add = Num1 + Num2;
  Multiply = Num1 * Num2;

  cout<<"\n\t Addition :"<<Add;
  cout<<"\n\t Multiplication :"<<Multiply;

return 0;
}
/*
OUTPUT:-

         Enter real part of complex no: 2
         Enter imaginary part of complex no: 3
 2 + i(3)

 Enter another complex no
         Enter real part of complex no: 4
         Enter imaginary part of complex no: 5

         Addition : 6 + i(8)

         Multiplication : -7 + i(22)

Process returned 0 (0x0)   execution time : 4.700 s


*/






















