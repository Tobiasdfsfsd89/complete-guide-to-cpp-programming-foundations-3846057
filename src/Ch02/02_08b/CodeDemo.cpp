// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// texture = 0, sound = 1, animation = 2, script = 3
enum class asset_type {texture, sound, animation, script}; //C-style enumeration style called asset type
enum class menu_section {background, music, sound, controls, texture};


int main(){
    int sound = 8;
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl; // the asset_type doesn't work with cout so asset_value has to be casted

    std::cout << std::endl << std::endl;

    return 0;
}