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
    int randTemp = 0;
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
    if(difficulty == "Easy" || difficulty == "easy" || difficulty == "ez"|| difficulty == "e" || difficulty == "E"){
    cout<<"Ha, you chose easy!\n"<< endl;
        while (guessLoop == true){
            cout<< "You have a 50/50 chance, pick 1 or 2: ";
            cin>>guess;
                if (guess == 1 || guess == 2){ 
                    randNum = rand() % 2 + 1;
                    if (guess == randNum){
                        cout<<endl<< "You guessed "<< guess << ", thats the correct number!"<<endl;
                        break;
                    }
                    else{
                    cout<<"WRONG!!! Nice try though, the correct number was "<< randNum<< "."<<endl;
                    break;
                    }
                }
                else{
                    cout<<"Invalid entry, please try again."<<endl;
                }

    }
    }

    //Medium
    if(difficulty=="Medium" || difficulty=="medium" || difficulty=="med" || difficulty=="Med" || difficulty== "m" || difficulty=="M"){
    cout<<"Okay, medium. Basic choice.\n"<<endl;
    randNum = rand() % 10 + 1;
        for(int i = 0; i<2; i++){
            cout<<"You get 2 guesses, guess a number between 1 and 10: "<<endl;
            cin>>guess;
                if (guess < 11 || guess > 0){
                    if (guess == randNum){
                        cout<<endl<<"Congratulations, "<< guess << " is correct!"<<endl;
                        break;
                    }
                    else if(i < 1){
    //insert absValue declaration/initialization
                        absValue = abs(randNum - guess);
                        cout<<"Incorrect guess, you are " << absValue << " away from the correct number."<<endl;
                    }
                    else{
    //insert absValue declaration initialization
                        absValue = abs(randNum - guess);
                        cout<<"You are out of guesses. The number was "<< randNum<< " and you were off by" << absValue<<"."<<endl;
                    }
                }
                else{
                    cout<<"Invalid entry, please try again."<<endl;
                    i--;
                }

        }
    }
    //Hard
    if(difficulty=="Hard" || difficulty=="hard" || difficulty=="h" || difficulty=="H" || difficulty=="Hardest"){
    cout<<"Wow a tough guy over here wanting to play hard. Alright you get 3 guesses."<<endl;
    randNum = rand() % 100 + 1;
        for(int i = 0; i<3; i++){
            cout<<"Guess a number between 1 and 100: ";
            cin>>guess;
                if(guess > 0 && guess < 101){
                    if (guess == randNum){
                        cout<<endl<<"Congratulations, " << guess << " is the correct number!"<<endl;
                        break;
                    }
                    else if(i < 2) {
                        absValue = abs(randNum - guess);
                        cout<<endl<<"Incorrect, you are "<< absValue << " away from the correct number."<<endl;
                    }
                    else{
                        cout<<"You're out of guesses. The number was "<< randNum <<" and you were off by " << absValue <<"."<<endl;
                    }
                }
                else{
                    cout<<"Invalid entry, please try again."<<endl;
                    i--;
                }
        }
        }

    //Guessing Game Loop Answer
    cout<<"Would you like to play again?(Y/N): "<<endl;  

    return 0;
}
