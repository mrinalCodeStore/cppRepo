#include<iostream>

enum flags{
    icmp=0,tcp=6,udp=17
};

int main(){

    flags f1=tcp;
    std::cout<<f1<<std::endl;

    return 0;
}


