#include <iostream>

using namespace std;

main()
{
    int a,b,c,D;
    float x1,x2;

    cout<<"Menghitung Determinan";

    cout<<"\n\n Masukan Nilai a    : ";
    cin>>a;
    cout<<"\n\n Masukan Nilai b    : ";
    cin>>b;
    cout<<"\n\n Masukan Nilai c    : ";
    cin>>c;

    D=b*b-4*a*c;

    if(D>0){
        x1=(-b+D)/2*a;
        x2=(-b-D)/2*a;
        cout<<"\n\n Nilai D>0";
        cout<<"\n\n Nilai x1: ";
        cout<<x1;
        cout<<"\n\n Nilai x2: ";
        cout<<x2;
    }
    else if(D<0){
        x1=-b/2*a+(-D/2*a);
        x2=-b/2*a-(-D/2*a);
        cout<<"\n\n Nilai D<0";
        cout<<"\n\n Nilai x1: ";
        cout<<x1;
        cout<<"\n\n Nilai x2: ";
        cout<<x2;
    }
    else{
        x1=-b/2*a;
        x2=-b/2*a;
        cout<<"\n\n Nilai D=0";
        cout<<"\n\n Nilai x1: ";
        cout<<x1;
        cout<<" =x2: ";
        cout<<x2;
    }
    return 0;
}
