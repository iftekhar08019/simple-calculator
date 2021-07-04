#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    double a;
    cout<<"Hello!! I am simple Calculator"<<endl;
    cout<<"Please Select what do you want to do: \nSummation(1)\nSubstraction(2)\nMultiplication(3)\nDivision(4)\n Type a number from above: ";
    cin>> z;
        if (z==1)
    {
        cout<<"Please Enter First Number: ";
        cin>>x;
        cout<<"Please Enter Second Number: ";
        cin>>y;
        a = x+y;
        cout<<"Your answer is: " <<x <<" + " << y <<" = "<< a;
    }
        else if (z==2)
    {
        cout<<"Please Enter First Number: ";
        cin>>x;
        cout<<"Please Enter Second Number: ";
        cin>>y;
        a = x-y;
        cout<<"Your answer is: " <<x <<" - " << y <<" = "<< a;
    }
        else if (z==3)
    {
        cout<<"Please Enter First Number: ";
        cin>>x;
        cout<<"Please Enter Second Number: ";
        cin>>y;
        a = x*y;
        cout<<"Your answer is: " <<x <<" * " << y <<" = "<< a;
    }
            else if (z==4)
    {
        cout<<"Please Enter First Number: ";
        cin>>x;
        cout<<"Please Enter Second Number: ";
        cin>>y;
        a = x/y;
        cout<<"Your answer is: " <<x <<" / " << y <<" = "<< a;
    }
    else{
        cout<<"wrong input";
    }
    return 0;
}