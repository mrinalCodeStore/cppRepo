//implementing loop using goto

#include<iostream>

int main(){

    std::cout<<"how many times u want to run the loop";
    int a=0;
    std::cin>>a;
    start:  //Label recognized by colon :
        if(a>0){
            std::cout<<a<<std::endl;
            a--;
            goto start; //jump statement
        }


    return 0;
}
