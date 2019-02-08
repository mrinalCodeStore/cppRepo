#include<iostream>

int main(){

int i;
std::cout<<"Enter a number to divide";
std::cin>>i;

    try{

        if(i==0){
            throw 0;
        }

    }catch(int i){
        std::cout<<"divided by "<<i;

    }

    return 0;
}
