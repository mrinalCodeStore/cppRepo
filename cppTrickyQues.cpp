#include<iostream>
class a{};
class b: protected a{};

int main(){

    char *p;
    p="Hello there";
    std::cout<<*p;

    b x();
    return 0;

}

