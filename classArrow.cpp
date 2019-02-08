#include<iostream>

class one{
    public:
    int a;
    char c;

    one(int a1, char c1)
    {
        this->a = a1;
        this->c = c1;
    }

    void pr(){
        std::cout<<" value of a and c are: "<<this->a<<" "<<this->c<<std::endl;
    }

};


int main(){

    one obj1=one(1,'a');
    obj1.pr();

    one *obj2=&obj1;
    //obj2=&obj1;
    obj2->pr();




}
