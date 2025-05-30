#include <iostream>
#include <fstream>

int main() {

    /*
    [easy] challenge #1
    create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:
    your name is (blank), you are (blank) years old, and your username is (blank)
    for extra credit, have the program log this information in a file to be accessed later.
    */

    // Basic implementation completed.
    // No tests or checking for edge cases + incorrect inputs.

    // Gather user data.
    std::string name;
    std::string age;
    std::string reddit_username;

    std::cout << "Hello, please enter your name: ";
    std::cin >> name;
    std::cout << "Thank you! Now please enter your age: ";
    std::cin >> age;
    std::cout << "Last Step! Please enter your reddit username: ";
    std::cin >> reddit_username;

    std::cout << "your name is " << name << ", you are " << age << " years old, and your username is " << reddit_username << "\n";

    // Save user data into text file.
    std::ofstream MyFile("user_data.txt");
    MyFile << "Name: " << name << "\n" << "Age: " << age << "\n" << "Reddit Username: " << reddit_username << "\n";
    MyFile.close();








    return 0;
    
}
