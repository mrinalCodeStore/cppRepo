#include<stdio.h>
#include<iostream>
#include<string>
#include<fstream>

int main(){

    std::ofstream fl;
    //fl.open("new.txt",std::ios::out|std::ios::in|std::ios::app);
    fl.open("new.txt");
    if(fl.is_open()){
        //std::cout<<"file opened"<<std::endl;
        std::string line;

        std::cout<<"tellg at "<<fl.tellg()<<std::endl;
        std::cout<<"tellp at "<<fl.tellp()<<std::endl;


        std::getline(fl,line);
        std::cout<<line<<std::endl;

        fl.seekg(5,std::ios::beg);
        fl.seekp(5,std::ios::beg);

        std::cout<<"tellg at "<<fl.tellg()<<std::endl;
        std::cout<<"tellp at "<<fl.tellp()<<std::endl;


        std::getline(fl,line);
        std::cout<<line<<std::endl;


    }

    return 0;
}
