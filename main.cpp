#include <iostream>

/*------------------------------------------
 * Program Name: Absolute Value
 * Author: Weihao Ke
 * Purpose: The purpose is to understand that the compiler will call the appropriate function for the type and
 *          number of arguments supplied to the function call.
 * Notes:
*/


using namespace std;

int Abs(int i);//function call for -4
double Abs(double d);//function call for -4765.57
float Abs(float f);//function call for 7.5

int main()
{
    cout<<endl<<endl<<endl;

    int i;//-4
    double d;//-4765.57


    cout<<"Abs(-4) :";
    i = Abs(-4);
    cout<<i<<endl;

    cout<<"Abs(-4765.57) :";
    d = Abs (-4765.57);
    cout<<d<<endl;

    cout<<"Abs(7.5) :";
    float f = Abs(7.5);
    cout<<f<<endl;

    cout<<"Abs(500.23): ";
    long double g = Abs(500.23);
    cout<<g<<endl;


    return 0;
}


int Abs(int i){//function for i
    if (i<0){
    i = i* (-1);
    }
    return i;
}

double Abs(double d){//function for d
    if(d<0){
     d = d * (-1);
    }
    return d;
}
float Abs(float f){//function for f
    if(f<0){
     f = f * (-1);
    }
    return f;
}
long double Abs(long double g){
    if(g<0){
        g = g * (-1);

    }
    return g;
}

