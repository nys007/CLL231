#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"For the calculation of Subsonic speed Mach number, Enter 1"<<'\n';
    
    cout<<"For the calculation of Mach cone angle, Enter 2"<<'\n';
    cout<<"Please Enter your choice :";
    int a;
    cin>>a;
    cout<<'\n';
    if(a==2){
        cout<<"If you prefer to give input as speed of object and speed of sound, Enter 1"<<'\n';
        cout<<"If you prefer to give input as Mach number, Enter 2"<<'\n';
        cout<<"Please Enter your choice :";
        int b;
        cin>>b;
        cout<<'\n';
        if(b==1){
            double v,c;
            cout<<"Enter the speed of object: ";
            cin>>v;
            cout<<"\nEnter the speed of sound: ";
            cin>>c;
            cout<<"The angle of Mach cone is "<<asin(c/v)*180/3.141592653589793238<<" degrees";
        }
        else if(b==2){
            double M;
            cout<<"Enter Mach number: ";
            cin>>M;
            cout<<"The angle of Mach cone is "<<asin(1/M)*180/3.141592653589793238<<" degrees";
        }
    }
    else{
        double p,q;
        cout<<"Enter static pressure: ";
        cin>>p;
        cout<<"\nEnter dynamic pressure: ";
        cin>>q;
        cout<<'\n';
        if(a==1){
            cout<<"Mach number is equal to "<<pow(5*(pow((1+q/p),2/7)-1),0.5);
        }
        
    }
    
}
