#include<iostream>
#include<fstream>
#include<string>

int main(){

   std::fstream fl;
   fl.open("new.txt",std::ios::app);
   std::string ln="file handling is important\n";
   if(fl){
            if(fl<<ln){
                std::cout<<"entry to file successfully"<<std::endl;
            }
    }
    fl.close();

    std::fstream fl1;
    fl1.open("new.txt",std::ios::in);
    std::string show="";
    std::string temp;
    if(fl1){

        while(fl1){
                if(getline(fl1,temp)){
                        show=show+temp+"\n";
                }

        }
        std::cout<<show;
    fl1.close();
    }
    return 0;
}
