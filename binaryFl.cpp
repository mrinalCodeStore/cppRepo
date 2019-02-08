//operation on binary file in c++
//so we write a block of data into the file and access the data according to that blocks

#include<iostream>
#include<fstream>
#include<string>

class student{
    public:
        std::string name="";
        int age=0;
        float marks=0.0;

        student(){
            name="";
            age=0;
            marks=0.0;
        }
        student(std::string n, int a, float m){
            name=n;
            age=a;
            marks=m;
        }
        void showData(){
            std::cout<<"name "<<name<<std::endl;
            std::cout<<"age "<<age<<std::endl;
            std::cout<<"marks "<<marks<<std::endl;
        }

};

int main(){

    student s1("jai",21,89.5);
    std::cout<<sizeof(s1)<<std::endl;
    student s2("viru",20,81.5);
    std::cout<<sizeof(s2)<<std::endl;
    student s3("monu",22,85.5);
    std::cout<<sizeof(s3)<<std::endl;

    student temp();

    std::fstream fl;
    fl.open("new.dat",std::ios::in|std::ios::app|std::ios::binary);
    if(fl){

            std::cout<<"file accessed";

            //fl.write((char*)&s1,sizeof(s1));
            //fl.write((char*)&s2,sizeof(s2));
            //fl.write((char*)&s3,sizeof(s3));


           fl.read((char *)&temp,sizeof(s3));

    }
    fl.close();

    return 0;
}
