#include <iostream>
using namespace std;

void Print_My_Details(){
    cout<<"Name=Sabrina Azad"<<endl;
    cout<<"Id=21-45886-3"<<endl;
    cout<<"Semester=First"<<endl;
}
//Sum function
int doSum(){//no parameter or parameter less
    int x=5, y=10;
    int sum=x+y;
    return sum;
}
int dosum3(int x,int y){ //2 parameters,both int type
    return x+y;
}
int dosum2(){
    int n1,n2;
    cout<<"Enter num1: \n";
    cin>>n1;

    cout<<"Enter num2: \n";
    cin>>n2;
    int sum=n1+n2;
    return sum;
}
int main(){
Print_My_Details();//calling function
cout<<doSum();
    cout<<dosum2();
    int a,b;
    cout<<"Enter two values: \n";
    cin>>a>>b;
    cout<<dosum3(a, b);
    return 0;
}



}
