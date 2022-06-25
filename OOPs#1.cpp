// OOPs by Love Babbar Lecture 1
#include <iostream>
#include <cstring>
using namespace std;

class Hero {
    // properties
    public:
    int health;
    char level;
    char *name;
    static int timeToComplete;

    // Default Constructor
    Hero(){
        cout<<"Constructor Called"<<endl;
        health = 10;
    }

    // // Initializer list used in Default Constructor
    // Hero(int x):health(x){
    //     cout<<"Constructor Called"<<endl;
    //     cout<<"Health: "<<health<<endl;
    //     // health = 10;
    // }

    // Parameterised Constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl; 
        this->health = health;
    }

    Hero (int health, char level){
        this -> level = level;
        this -> health =health;
    }

    // Copy Constructor
    Hero(Hero& temp){
        char *ch = new char [strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"Copy Constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"health: "<<health<<endl;
        cout<<"level: "<<level<<endl;
    }

    int getHealth(){
        return health;
    }    

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }

    static int stat(){
        return timeToComplete;
    }

    // Constant member function
    void test() const{
        // health=0;
    }
    // User-defined destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){
    
    
    // cout<<Hero::stat()<<endl;

    // cout<<Hero::timeToComplete<<endl;
    
    // Hero h1;
    // h1.test();

    // const Hero h1;
    // cout<<"h1.health: "<<h1.health<<endl;
    
    // Hero h1(70, 'C');
    // h1.print();
    // Hero h2(h1); // Copy Constructor
    // h2.print();

    // Hero h3(50,'B');
    // h3.print();

    // h1 = h3; // Copy Assignment Operator (=)
    // h1.print();

    // Hero *h4 = new Hero(); // For dynamic allocation, we have to call manual constructor
    // delete h4; // Manual destructor called

    // Copy Constructor
    // h2.health = h1.health;
    // h2.level = h1.level;

    // // Hero h1; // creating an Object
    // // static allocation
    // Hero h1(10);
    // cout<<"Address of h1: "<<&h1<<endl;
    // h1.setHealth(80);
    // h1.setLevel('B');
    // cout<<"Health: "<<h1.getHealth()<<endl;
    // cout<<"Level: "<<h1.getLevel()<<endl;

    // // dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');
    // cout<<"Health: "<<(*b).getHealth()<<endl;
    // cout<<"Level: "<<(*b).getLevel()<<endl;
    //     // Alternative way b->
    // cout<<"Health: "<< b->getHealth()<<endl;
    // cout<<"Level: "<< b->getLevel()<<endl;

    // // // use Setters
    // // h1.setHealth(70);
    // // h1.setLevel('B');

    // // cout<<"Size: "<<sizeof(h1)<<endl; /*Size will be 8 bytes due to data structure padding*/
    // // cout<<"Health: "<<h1.health<<endl;
    // // cout<<"Level: "<<h1.level<<endl;
    // // use Getters
    // // cout<<"Health: "<<h1.getHealth()<<endl;
    // // cout<<"Level: "<<h1.getLevel()<<endl;
    return 0;
}
