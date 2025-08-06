#include <iostream>
using namespace std;

enum class PokemonChoice
{
    CHARMANDER,
    BULBASAUR,
    SQUIRTLE
};

enum class PokemonType {
    FIRE,
    WATER,
    GRASS,
    ELECTRIC,
    PSYCHIC,
    ICE,
    DRAGON,
    DARK,
    FAIRY
};

class Pokemon
{
    public:
        string name;
        PokemonType type;
        unsigned int health;

    Pokemon()
    {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void attack() { cout << name << "attacks with powerful move!" << endl; };
};

class Player
{
    public:
        string name;
        Pokemon choosen_pokemon;

    void ChoosePokemon(int choice)
    {
        switch (PokemonChoice(choice))
        {
            case PokemonChoice::CHARMANDER:
                choosen_pokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
                break;

            case PokemonChoice::BULBASAUR:
                choosen_pokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
                break;
            case PokemonChoice::SQUIRTLE:
                choosen_pokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
                break;
            default:
                choosen_pokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
                cout << "Invalid choice! Defaulting to Pikachu." << endl;
                break;

        }

        cout << "You have chosen " << choosen_pokemon.name << "!" << endl;
    }
};

class ProfessorOak
{
    int poke_choice;
    public:
        string name = "Professor Oak";

    void greetPlayer(Player& player)
    {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n";
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n";
        cout << name << ": But enough about me. Let's talk about you!\n";
    }

    void offerPokemonChoices(Player& player)
    {
        cout << name << ": First, tell me, what’s your name?\n";
        cin >> player.name;
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n";
        cout << name << ": Choose wisely...\n"; std::cout << "1. Charmander - The fire type. A real hothead!\n";
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

        cout << name << ": So, which one will it be? Enter the number of your choice:";

        cin >> poke_choice;
        player.ChoosePokemon(poke_choice);
    }
};

int main() 
{
    ProfessorOak professor;
    Player player;
    Pokemon placeholder_pokemon;

    player.name = "Trainer";
    professor.name = "Professor Oak";

    placeholder_pokemon.name = "Pikachu";
    placeholder_pokemon.type = PokemonType::ELECTRIC;
    placeholder_pokemon.health = 40;

    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.choosen_pokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
