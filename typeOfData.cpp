#include<iostream>
#include<typeinfo>

using namespace std;

int main(){

    int a=10;
    float f=3.1f;
    int c;
    c=a*f; //implicit type conversion form float to int of f for the expression only

    cout<<typeid(a).name()<<endl;
    cout<<typeid(f).name()<<endl;
    cout<<typeid(c).name()<<endl;
    cout<<typeid(f).name()<<endl;

    return 0;
}
