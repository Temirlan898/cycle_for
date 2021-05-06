#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout.setf(ios::showpos);
    for(double x=1;x<=10;x+=1)
        cout<<"y= "<<(2*pow(x,2)+(5*x)-3)<<endl;
    system("pause>0");
    return 0;
}
