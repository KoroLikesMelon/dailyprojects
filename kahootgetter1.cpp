#include <iostream>
#include <stdlib.h>
#include <time.h>
int secondtimes(std::string basic, std::string mUrl);
std::string printout(std::string thisisacryforhelp, std::string mUrl);
int main(){
    //uh
    int i, number;
    time_t nTime;
    srand((unsigned) time(&nTime));
    //not even random tbh
    int newest = rand() % 10 + 1;
    std::string kCode = std::to_string(newest);
    std::string url = "https://kahoot.it/";
    secondtimes(kCode, url);
}
int secondtimes(std::string basic, std::string mUrl){
    for (int w = 0; w < 8; w++){
            time_t nTime;
            srand((unsigned) time(&nTime));
            int sheeped = rand() % 10 ;
            sheeped - 1;
            std::string sheepedsheared = std::to_string(sheeped);
            basic.append(sheepedsheared);
        }
        printout(basic, mUrl);
}
std::string printout(std::string thisisacryforhelp, std::string mUrl){
    for (int n = 0; n <= 10; n++){
        std::cout << thisisacryforhelp << std::endl;
        if (thisisacryforhelp.length() >= 10){
                main();
        }
        std::string realUrl = mUrl + thisisacryforhelp;
        std::string op = std::string("start ").append(realUrl);
        system(op.c_str());
        main();
        return op;
    }
    

}