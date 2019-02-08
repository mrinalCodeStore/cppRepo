#include<iostream>
using namespace std;
template <typename T>
T add(T a,T b){
    return a+b;
}

int main(){

    std::cout<<add(4,5)<<std::endl;
    std::cout<<add(4.5f,5.32f)<<std::endl;

    return 0;
}
