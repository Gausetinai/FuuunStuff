#include <iostream>

class Parent{
    public:
        bool alive = true;
        int age = 25;

        void read(){
            std::cout << "How many books you read in life? ";
        }
};
class child :public Parent{
    public:
        void cringe(){
            std::cout << "How cringe is this program? ";
            std::cout << "It's very cringe coz i don't understand how it works";
        }
};



int main(){

    child smol;
    std::cout << smol.age << " this how old this cringe devoloper\n";
    std::cout << smol.age << " let's go GIT suck me in\n";
    smol.cringe();
    std::string cringe;
    std::cin >> cringe;

    return 0;
}