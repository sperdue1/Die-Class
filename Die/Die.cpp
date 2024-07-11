//Name: Kody Perdue
//Date: 7/10/24
//CS2 with Baarsch

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;


//create Die class
class Die {
private:
    int faceValue = 0;  //was giving me a warning for not having faceValue initialized
    const int SIDES = 6;
public:

    //I did this ticket after doing Thursday's reading quizzes, hence the inline functions
    void roll() {
        faceValue = rand() % SIDES + 1;
    }

    int getFaceValue() const {
        return faceValue;
    }

    string printDie() const {
        return "a " + to_string(SIDES) + "-sided die showing a " + to_string(faceValue);
    }
};



int main()
{
    srand(time(0));

    //set dice
    Die die1;
    Die die2;
    Die die3;

    //roll dice
    die1.roll();
    die2.roll();
    die3.roll();

    //display what was rolled
    cout << "Die 1 is " << die1.printDie() << endl;
    cout << "Die 2 is " << die2.printDie() << endl;
    cout << "Die 3 is " << die3.printDie() << endl << endl;

    //add the die
    int sum = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();

    //display the sum of the die
    cout << "The sum of the dice is: " << sum << endl;

    return 0;
}

