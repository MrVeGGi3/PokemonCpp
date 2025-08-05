#include <iostream>
using namespace std;

int main() {

    string player_name;
    int pok_choice_number;

    cout << "Professor Oak: Trainer! Before you embark on your journey \n the Pokémon wolrd need to know who you are!";
    cout << "Time to step up and tell us your name." << endl;
    cout << "And remember, a great name is the start of every great adventure!" << endl;

    cout << "What's your name?" << endl;
    cin >> player_name;
    cout << "Congratulations" << player_name << ", PokeID created!" << endl;
    cout << "Let's gotcha them all!" << endl;
    
    cout << "Professor Oak: Now, it's time to choose your first Pokémon!" << endl;
	cout << "You can choose between: \n 1- Bulbasaur \n 2-Charmander \n 3-Squirtle." << endl;
    cin >> pok_choice_number;

    switch(pok_choice_number) {
        case 1:
            cout << "You chose Bulbasaur! A great choice for a beginner!" << endl;
            break;
        case 2:
            cout << "You chose Charmander! A fiery companion to start your journey!" << endl;
            break;
        case 3:
            cout << "You chose Squirtle! A cool choice for your adventure!" << endl;
            break;
        default:
            cout << "Invalid choice! Please choose a number between 1 and 3." << endl;
            return 1; // Exit if invalid choice
	}



    return 0;
}
