#include<iostream>
#include<stdio.h>

int printF(int n){

    if(n<0){
        return 0;
    }else{
        printF(n-1);
        std::cout<<n<<std::endl;
    }

}


int main(){

    int a = printF(5);
    std::cout<<a;

}
