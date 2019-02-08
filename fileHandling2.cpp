#include<iostream>
#include<fstream>

int main(){

    std::ofstream fin;
    fin.open("new1.txt");
    fin<<"hello there from file two";
    fin.close();

    std::ifstream fin2;
    fin2.open("new1.txt");
    char g;
    while(!fin2.eof()){
        g=(char)fin2.get();
        std::cout<<g;
    }

    return 0;

}
