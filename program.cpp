#include<iostream>

int main(){

    short arr[]={1,2,3,4,5};
    std::cout<<arr<<std::endl;
    std::cout<<*arr<<std::endl;
    std::cout<<(arr+2)<<std::endl;
    std::cout<<*(arr+2)<<std::endl;
    std::cout<<sizeof(short)<<std::endl;
    return 0;
}
