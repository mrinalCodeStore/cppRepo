#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>


int main(){

    std::fstream f;
    f.open("new.txt", std::ios::out|std::ios::in|std::ios::app);

    if(f){
        /*std::cout<<"File created"<<std::endl;
        std::string s="hello there, its nice to be back with c++";
        std::string line;
        f<<s<<std::endl;*/
        std::string line;
        std::string save;
        save ="newTxt";
        f.seekp(4,std::ios::beg);
        getline(f,line);
        std::cout<<line<<std::endl;
        f.seekg(5,std::ios::beg);
        f<<save;
    }

}
