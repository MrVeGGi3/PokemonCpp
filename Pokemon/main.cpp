#include <iostream>
using namespace std;

int main() {

    string player_name;
    int pok_choice_number;

    enum class PokemonChoice
    {
        Bulbasaur,
        Charmander,
	    Squirtle,
        InvalidChoice
    };

    enum class PokemonType
    {
        Grass,
        Fire,
        Water,
        Electric, 
        Earth,
        Normal
	};

    PokemonChoice chosen_pokemon;

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
            chosen_pokemon = PokemonChoice::Bulbasaur;
            cout << "You chose Bulbasaur! A great choice for a beginner!" << endl;
            break;
        case 2:
			chosen_pokemon = PokemonChoice::Charmander;
            cout << "You chose Charmander! A fiery companion to start your journey!" << endl;
            break;
        case 3:
			chosen_pokemon = PokemonChoice::Squirtle;
            cout << "You chose Squirtle! A cool choice for your adventure!" << endl;
            break;
        default:
            chosen_pokemon = PokemonChoice::Charmander;
            break;
	}

    switch (chosen_pokemon)
    {
        case Bulbasaur:
            cout << "Bulbasaur - The grass type. Calm and collected!" << endl;
			break;

        case Charmander:
			cout <<  "Charmander - The fire type. A real hothead!" << endl;
            break;
	    
        case Squirtle:
            cout << "Squirtle - The water type. Cool as a cucumber!" << endl;
            break;
    }

	cout << "Professor Oak: Now that you have your first Pokémon, you're ready to start your journey!" << endl;


    return 0;
}
