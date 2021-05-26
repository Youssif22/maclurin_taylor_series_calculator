/*
Name: Youssif Hisham
ID: 20200675

Name: Marawan Mohamed
ID: 20200512
*/

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



/*
   //Array for Bernoulli Numbers
   double ber[20] = {0.1666666666666666666667	, -0.03333333333333333333333	, 0.02380952380952380952381	, 0.03333333333333333333333, 0.07575757575757575757576	, 0.2531135531135531135531,
   1.166666666666666666667	, 7.092156862745098039216, 54.97117794486215538847, -529.1242424242424242424	, 6,192.123188405797101449, -86580.25311355311355311, 1425517.166666666666667, 27298231.06781609195402, 601580873.9006423683843};

   //The Tan(x) formula
   double a3, b3, c3;
   long double tanx = 0;
   for(int i=0; i<15; i++)
   {
       a3 = Power(-1,i) * Power(2, (2*i)+2) * Power(2,(2*i)+2)-1* (ber[i]);
       b3 = Power(angle_in_radian, (2*i)+1);
       c3 = factorial((2*i)+2);
       tanx += (a3 * b3)/c3;
       if(tanx < 0 ) tanx *= -1;
   }
   cout <<"Tan(x) = "<<tanx<<endl;
*/

  long double tanx = sinx/cosx;
   cout << "Tan(x) = " << tanx << endl;




    return 0;
}
