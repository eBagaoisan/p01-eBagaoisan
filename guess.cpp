#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //Variable declarations
    srand (time(NULL));
    int randNum;
    int guess;
    int absValue;
    string difficulty;
    string repeatGame;
    bool guessLoop = true;
    //bool guessTemp;
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
    cout<<"Ha, you chose easy!"<< endl;
        //while (guessLoop == true){
            cout<< "You have a 50/50 chance, pick 1 or 2: ";
            cin>>guess;
                if (guess == 1 || guess == 2){ 
                    randNum = rand() % 2 + 1;
                    if (guess == randNum){
                        cout<<endl<< "Well look at you, you guessed the right number."<<endl;
                    }
                    else{
                    cout<<"WRONG!!! Nice try though."<<endl;
                    }
                }
                else{
                    cout<<"Invalid entry, please try again."<<endl;
                }

    }
    //}

    //Medium
    if(difficulty=="Medium" || difficulty=="medium" || difficulty=="med" || difficulty=="Med" || difficulty== "m" || difficulty=="M"){
    cout<<"Okay, medium. Basic choice."<<endl;
        //while(guessLoop == true){
            cout<<"You get 2 guesses, guess a number between 1 and 10: "<<endl;
            for(int i = 0; i<2; i++){
            cin>>guess;
                if (guess < 11 || guess > 0){
                    randNum = rand() % 10 + 1;
                    if (guess == randNum){
                        cout<<endl<<"Congratulations, "<< guess << " is correct!"<<endl;
                    }
                    else if(i < 1){
                        //insert absValue declaration/initialization
                        cout<<"Incorrect guess, you are " << absValue << " away from the correct number."<<endl;
                    }
                    else{
                        //insert absValue declaration/initialization
                        cout<<"You are out of guesses. The number was "<< randNum<< "."<<endl;
                    }
                }
                else{
                    cout<<"Invalid entry, please try again."<<endl;
                }
             }

    }
    //Hard

    //Guessing Game Loop Answer
    cout<<"Would you like to play again?(Y/N): "<<endl;  

    return 0;
}
