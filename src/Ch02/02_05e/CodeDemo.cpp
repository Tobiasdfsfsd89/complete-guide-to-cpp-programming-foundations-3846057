// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
// #include <string>

// void displayScore(const std::string& playerName){
//     std::cout << "Player: " << playerName << std::endl;
// }

// int main(){
//     std::string name = "Nigeran Prince";
//     displayScore(name);
//     return 0;
// }

// class Player{
// public: 
//     void updateScore() const{
//         ++score;
//     }
// private:
//     mutable int score = 0;
// };

// inline int calculateDamage(int baseDamage, int modifier){
//     return baseDamage + modifier;
// }

// int main(){
//     int totalDamage = calculateDamage(50, 10);
//     std::cout << "Total Damage: " << totalDamage << std::endl;
//     return 0;
// }

constexpr int calculateExperience(int level){
    return level * level * 100;
}

int main(){
    constexpr int experience = calculateExperience(5);
    std::cout << "Experience for level 5: " << experience << std::endl;
    return 0;
}