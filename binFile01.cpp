#include<iostream>
#include<string>
#include<fstream>
#include<stdio.h>


class student{
private:
    std::string name="";
    unsigned int age=0;
    unsigned int classNo=0;

public:
    student(std::string n, unsigned int a, unsigned int cn){
    name=n;
    age=a;
    classNo=cn;
    }
    student(){
        name="";
        age=0;
        classNo=0;
    }
    void getName(){
        std::cout<< name;
    }
};

int main(){

    std::fstream fl;
    fl.open("fl.mrinal",std::ios::binary|std::ios::out);
    student s1("mrinal",28,12);
    if(fl.is_open()){
        std::printf("file opened \n");

        fl.write((char *)&s1,sizeof(s1));
        fl.close();



    }else{
        std::printf("file not created");
    }

    {
        std::fstream fl1;
        fl1.open("fl.mrinal",std::ios::binary|std::ios::in);
        if(fl1.is_open()){
            std::printf("file opened \n");

            fl1.read((char *)&s1,sizeof(s1));
            s1.getName();
            fl1.close();
        }

    }


}
