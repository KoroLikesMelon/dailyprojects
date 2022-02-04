#include <iostream>
int main(){
    std::string url = "https://kahoot.it/";
    for (int n = 0; n <= 10; n++){
        int v1 = rand() % 999999999 + 111111111;
        std::string validurl = url + std::to_string(v1);
        std::string op = std::string("start ").append(validurl);
        system(op.c_str());
        std::cout << op << std::endl;
    }
    
}