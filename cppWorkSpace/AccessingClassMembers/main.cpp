#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    string name;
    int health;
    int xp;
    
    void talk(string str){
        std:: cout << str << std::endl;
    }
    bool isAlive(void);
    
};


int main(int argc, char **argv)
{
    // Creating an Player instance using pointer on heap
    Player *enemy = new Player;
    enemy->name = "Frank";
    enemy->health = 100;
    enemy->xp = 80;
    cout << enemy->name << " " << enemy->health << " " << enemy->xp << endl; 
	
    delete enemy;
    
    
    // Creating an Player instance/object on stack
    
    Player hero;
    hero.health = 90;
    hero.name = "Hero";
    hero.xp = 80;
    
    cout << hero.name << " "<< hero.health << " " << hero.xp << endl;
    hero.talk("Hi hero");
    
    
	return 0;
}
