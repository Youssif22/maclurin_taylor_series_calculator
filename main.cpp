
#include <iostream>
using namespace std;
const double Pi = 3.14159265;

unsigned long long  factorial(double x)
{
    int i, fact = 1;
    for(int i=1; i<=x; i++)
    {
        fact *= i;
    }
    return fact;
}

double Power(double base, double power)
{
    double result=1;
    while(power != 0)
    {
        result *= base;
        power--;
    }
    return result;
}


int main()
{

   //Angle Entering and convertion
   double angle_in_degree;
   cout<<"Please Enter the Angle in degrees: ";
   cin>>angle_in_degree;
   double angle_in_radian = (angle_in_degree)*(Pi/180);
   cout<<"Angle in Radian measure is: " << angle_in_radian << endl;


   //The Sin(x) formula
   double a, b, c;
   double sinx = 0;
   for(int i=0; i<15; i++)
   {
       a = Power(-1, i);
       b = Power(angle_in_radian, (2*i)+1);
       c = factorial((2*i)+1);
       sinx += (a*b)/c;
   }
   cout <<"Sin(x) = "<< sinx << endl;



   //the cos(x) formula
   double a2, b2, c2;
   double cosx = 0;
   for(int i=0; i<15; i++)
   {
       a2 = Power(-1, i);
       b2 = Power(angle_in_radian, (2*i));
       c2 = factorial((2*i));
       cosx += (a2*b2)/c2;
   }
   cout <<"Cos(x) = "<<cosx<<endl;




  long double tanx = sinx/cosx;
   cout << "Tan(x) = " << tanx << endl;




    return 0;
}
