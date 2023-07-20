#include <iostream>

class Games{
    public:
        std::string name;
        std::string genre;
        std::string devoloper; 

        Games(std::string name, std::string genre, std::string devoloper){
            this->name = name;
            this->genre = genre;
            this->devoloper = devoloper;
        }
};


int main(){
        Games game1("Bloodborne", "RPG", "Fromsoftware");
        Games game2("Counter-strike", "FPS", "Valve");

        std::cout << game1.name << " " << game1.devoloper << " " << game1.genre << "\n";
        std::cout << game2.name << " " << game2.devoloper << " " << game2.genre ;
    return 0;
}