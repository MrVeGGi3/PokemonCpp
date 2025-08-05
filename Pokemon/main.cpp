#include <iostream>
using namespace std;

int main() {

    string player_name;
    cout << "Professor Oak: Trainer! Before you embark on your journey \n the Pokémon wolrd need to know who you are!";
    cout << "Time to step up and tell us your name." << endl;
    cout << "And remember, a great name is the start of every great adventure!" << endl;

    cout << "What's your name?" << endl;
    cin >> player_name;
    cout << "Congratulations" << player_name << ", PokeID created!" << endl;
    cout << "Let's gotcha them all!" << endl;

    return 0;
}
