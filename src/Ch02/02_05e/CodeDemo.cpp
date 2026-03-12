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

// constexpr int calculateExperience(int level){
//     return level * level * 100;
// }

// int main(){
//     constexpr int experience = calculateExperience(5);
//     std::cout << "Experience for level 5: " << experience << std::endl;
//     return 0;
// }

// Combined Qualifiers
// constexpr int calculateMaxSpeed(int baseSpeed, int boost){
//     return baseSpeed + boost * 5;
// }

// constexpr const int maxSpeed = calculateMaxSpeed(60,8);

// void generateUniqueID(){
//     static int id = 0;
//     ++id;
//     std::cout << "Genreated ID: " << id << std::endl;
// }

// int main(){
//     generateUniqueID(); //Output: Generated ID: 1
//     generateUniqueID(); //Output: Generated ID: 2
//     generateUniqueID(); //Output: Generated ID: 3
//     return 0;
// }

class Enemy{
public:
    static int enemyCount; // Static class member

    // This is the constructor, called every time a new Enemy object is instantiated.
    Enemy(){
        ++enemyCount; //Increase enemy count
    }

    static void showEnemyCount(){
        std::cout << "Total Enemies: " << enemyCount << std::endl;
    }



};

// Initialize static member even when no instances exist yet
int Enemy::enemyCount = 0;

int main(){
    Enemy goblin;
    Enemy orc;
    Enemy troll;

    Enemy::showEnemyCount(); //Output: Total Enemies: 3
    return 0;
}