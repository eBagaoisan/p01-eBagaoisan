#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

int main(){
    //Variable declarations
    srand (time(NULL));
    int randNum;
    int guess;
    string difficulty;
    string repeatGame;
    bool guessLoop = true;
    bool gameLoop = true;

    cout<<endl;
    //Introduction
    cout<<"Welcome to the guessing game!"<<endl;
    cout<<"Easy: 1 guess for either 1 or 2"<<endl;
    cout<<"Medium: 2 guesses for a random number between 1-10"<<endl;
    cout<<"Hard: 3 guesses for a random number between 1-100"<<endl;
    
    //Guessing Game Loop
    //while (gameLoop == true){
    cout<<"Please select a difficulty: ";
    cin>>difficulty;

    //Easy
    if(difficulty == "Easy" || difficulty == "easy" || difficulty == "ez"){
    while (guessLoop == true){
        cout<<"Ha, you chose easy!"<<endl<< "You have a 50/50 chance, pick 1 or 2: ";
        cin>>guess;
        if (guess == 1 || guess == 2){ 
            randNum = rand() % 2 + 1;
            if (guess == randNum){
                cout<<endl<< "Well look at you, you guessed the right number."<<endl;
                guessLoop == false;
            }
            else{
                cout<<"WRONG!!! Nice try though."<<endl;
            }
        }
        else{
            cout<<"Invalid entry, please try again."<<endl;
        }
    }
    }
/*
    //Medium

    //Hard

    }

    //Guessing Game Loop Answer
    cout<<"Would you like to play again?(Y/N): "<<endl;
*/  

    return 0;
}
