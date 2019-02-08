#include<iostream>
#include<vector>

int main(){

    std::vector<int> dynamicArray;
    std::vector<bool> dynamicArray1;
    for(int i=0;i<10;i++){

           dynamicArray.push_back(i);
    }

    for(int i=0;i<10;i++){
        std::cout<<dynamicArray[i]<<std::endl;
    }


    return 0;
}

