#include <iostream>
#include <string>
#include <limits>

bool isValidInteger(const std::string& input) {
    try {
        std::stoi(input); 
        return true;
    } catch (const std::invalid_argument& e) {
        return false; 
    } catch (const std::out_of_range& e) {
        return false; 
    }
}

int main() {
    int input = 0;
    std::string userInput;

    while (true) {
        std::cout << "Please enter an integer value between 5 and 10: ";
        std::getline(std::cin, userInput);

        if (!isValidInteger(userInput)) {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            continue; /
        }

        input = std::stoi(userInput);

        if (input >= 5 && input <= 10) {
            break; 
        } else {
            std::cout << "Input must be between 5 and 10. Please try again." << std::endl;
        }
    }

    std::cout << "Your input value of " << input << " has been accepted." << std::endl;

    return 0;
}
