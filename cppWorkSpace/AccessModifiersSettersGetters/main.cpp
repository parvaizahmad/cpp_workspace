#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    string name;
    int health;
    int xp;
    
public:    
    void talk(string str){
        std:: cout << str << std::endl;
    }
    bool isAlive(void);
    void setName(string name){
        this->name = name;
    }
    
    string getName(void) {
        return this->name;
    }
    
    void setHealth(int health) {
        this->health = health;
    }
    int getHealth(void) {
        return this->health;
    }
    
    void setXp(int xp) {
        this->xp = xp;
    }
    int getXp(void) {
        return this->xp;
    }
};


int main(int argc, char **argv)
{
    // Creating an Player instance using pointer on heap
    Player *enemy = new Player;
    enemy->setName("Frank");
    enemy->setHealth(50);
    enemy->setXp(80);
	
    cout << enemy->getName() << endl;
    cout << enemy->getHealth() << endl;
    cout << enemy->getXp() << endl;
    delete enemy;
    
    
    // Creating an Player instance/object on stack
    
    Player hero;
    hero.setName("Parvaiz");
    hero.setHealth(100);
    hero.setXp(100);
    
    cout << hero.getName() << endl;
    cout << hero.getHealth() << endl;
    cout << hero.getXp() << endl;
    
    hero.talk("Hi Hero");
    
    
	return 0;
}
