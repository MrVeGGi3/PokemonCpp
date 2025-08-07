#include <iostream>
using namespace std;



void clearConsole()
{
#ifdef _WIN32:
    system("cls");
#else
    (void)system("clear");
#endif 

}
void waitForEnter()
{
    cout << " \n (Press Enter to continue) \n" << endl;
    cin.get();
}
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
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 40;
    }

    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;

        cout << "A New Pokemon has copied from " << other.name << "!" << endl;
    }

    ~Pokemon()
    {
        cout << "Pokemon " << name << " has been destroyed!" << endl;
    }



    void attack() { cout << name << "attacks with powerful move!" << endl; };
};

class Player
{
public:
    string name;
    Pokemon choosen_pokemon;

    Player()
    {
        name = "Trainer";
        choosen_pokemon = Pokemon();
    }

    Player(string p_name, Pokemon p_choosen_pokemon)
    {
        name = p_name;
        choosen_pokemon = p_choosen_pokemon;
    }

    Player(const Player& other)
    {
        name = other.name;
        choosen_pokemon = other.choosen_pokemon;
    }

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
    public:
        string name = "Professor Oak";
        int poke_choice;

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

    void explainMainQuest(Player& player)
    {
        cout << name << ": Ah " << player.name << " let me tell you about your grand adventure that's about to unfold!" << endl;
        waitForEnter();
        cout << name << ": Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck." << endl;
        waitForEnter();
        cout << name << ": Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. \n Only then can you challenge the Elite Four and aim for the title of Champion." << player.name << "Wait, isn’t that just like every other Pokémon game?" << endl;
        waitForEnter();
        cout << name << ": No breaking the fourth wall" << player.name << " \n This is serious business." << endl;
        waitForEnter();
        cout << name << ": To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter." << endl;
        waitForEnter();
        cout << name << ": Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!" << player.name << "Piece of cake, right?" << endl;
        waitForEnter();
        cout << name << ": Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!" << endl;
        waitForEnter();
        cout << name << ": So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?" << endl;
        waitForEnter();
        cout << name << ": That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!" << endl;
        waitForEnter();
        cout << name << ": Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!";
    }
};

void GameLoop(Player& player)
{
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        clearConsole();

        cout << "\n What would you like to do next, " << player.name << "?\n";
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2. Visit PokeCenter " << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(choice)
        {
            case 1:
                cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n" << endl;
                break;
            case 2:
                cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n" << endl;
                break;
            case 3:
                cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n" << endl;
                break;
            case 4:
                cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n" << endl;
                break;
            case 5:
                cout << "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n" << endl;
                cout << "Are you sure want to quit? (y /n )" << endl;
                char quitchoice;
                cin >> quitchoice;
                if(quitchoice == 'y' || quitchoice == 'Y')
                {
                    keepPlaying = false;
                    cout << "Thanks for playing! See you next time!" << endl;
                }
                else
                {
                    cout << "Great! Let's keep going!" << endl;
				}
            default:
				cout << "Invalid choice! Please try again." << endl;
                break;

        }

        waitForEnter();
    }


}

int main()
{
    clearConsole();
    Pokemon charmander("Charmander", PokemonType::FIRE, 100);
    ProfessorOak professorOak;
    Player player("Ash", charmander);
    bool keepPlaying = true;

	professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);
    professorOak.explainMainQuest(player);

    GameLoop(player);




    return 0;

}


