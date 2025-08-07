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


class Professor
{   public: 
        string name;

    Professor()
    {
        name = "Professor Oak";
    }

    void explainMainQuest(Player& player)
    {
        cout << name << ": Ah" << player.name << " let me tell you about your grand adventure that's about to unfold!" << endl;
        waitForEnter();
        clearConsole();
        cout << name << ": Becoming a Pokémon Master is no easy task. It demands courage, strategy, and sometimes a little bit of luck." << endl;
        waitForEnter();
        clearConsole();
        cout << name << ": Your main mission is to collect all the Pokémon Badges and defeat the Pokémon League. Only then can you challenge the Elite Four and aim for the title of Champion." << player.name << "Wait, isn’t that just like every other Pokémon game?" << endl;
        waitForEnter();
        clearConsole();
        cout << name << ": No breaking the fourth wall" << player.name << "This is serious business." << endl;
        waitForEnter();
        cout << name << ": To achieve this, you must capture new Pokémon, battle wild creatures, challenge gym leaders, and keep your Pokémon healthy at the PokeCenter." << endl;
        waitForEnter();
        clearConsole();
        cout << name << ": Remember, you can only carry a limited number of Pokémon. Choose wisely who you want on your team!" << player.name << "Piece of cake, right?" << endl;
        waitForEnter();
        cout << name << ": Ha! That’s what everyone thinks. But the path to becoming a Champion is filled with obstacles. Lose a battle, and it’s back to the start!" << endl;
        waitForEnter();
        cout << name << ": So, what do you say? Are you ready to embark on this epic journey to become the next Pokémon Champion?" << player.name << "Ready as I’ll ever be, Professor!" << endl;
        waitForEnter();
        clearConsole();
        cout << name << ": That’s the spirit! Now, your journey begins. Remember, it’s not just about battling—it’s about forming bonds with your Pokémon. Go, Trainer, the world of Pokémon awaits you!" << endl;
        waitForEnter();
        cout << name << ": Oh, and about the actual game loop… let’s just pretend I didn’t forget to set it up. Onwards!";
    }
};

class Player
{
    public:
        string name;

    Player()
    {
        name = "Red";
    }
};



int main() {
    Professor professor;
    Player player;

    professor.explainMainQuest(player);

    return 0;
}


