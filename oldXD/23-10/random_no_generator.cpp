#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    srand(time(NULL));
    int sn = rand() % 100 + 1;

    int guess;
    int numberOfGuesses = 0;

    std::cout<<" welcome to the number guessing game! \n" ;
    std::cout<<"I hae chosen a number between 1 and 100. try to guess it.\n";

    do{
        std::cout<<"enter your guess:";
        std::cin>> guess;

        numberOfGuesses++;
        if(guess > sn){
            std::cout<<"too hight!\n";
        } else if (guess < sn){
            std::cout<<"too low!\n";
        } else {
            std::cout<<" GG you have guessed the number :" << guess ;
        }
    } while ( guess != sn);

    return 0;
}



// Implement the "Provide a Range of Numbers" enhancement: Modify the game to allow the player to specify the minimum and maximum values for the secret number. Use scanf to get the range from the user before generating the secret number.
// Implement the "Difficulty Levels" enhancement: Create three difficulty levels (Easy, Medium, Hard) with different ranges and guess limits. Ask the player to choose a difficulty level at the beginning of the game. Use if or else if statements to set the range and guess limit based on the chosen difficulty.
// Implement the "Hints" enhancement: After a certain number of incorrect guesses (e.g., after 3 guesses), provide a hint to the player. The hint could be whether the number is even or odd. You'll need to use the modulo operator (%) to check if the secret number is even or odd.

//future work