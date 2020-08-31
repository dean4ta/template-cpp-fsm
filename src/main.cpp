#include "Light.h"

#include <iostream>

int main()
{
    Light* my_night_light;
    my_night_light = new Light;

    std::string n;
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    
    std::cout << "Current Light State: " << my_night_light->getCurrentStateID() << "\n";
    std::cin >> n;
    my_night_light->toggle();
    std::cout << "end of program\n";
    
    return 0;
}