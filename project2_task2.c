/*
* Name: Hunter Hawkins - U13938229
* Email: hunterhawkins@usf.edu 
* Assignment: Project 2: Task 2
* This 
*/

// ADDING LIBRARIES
#include <stdio.h> 

int main () {

    //Initializing a letter variable to keep track of user inputted characters.
    char letter;

    //Initializing special case vowel and popular consonant arrays to check against and add additional points to score if conditionals are met.
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    char consonant[] = {'t', 'n', 's', 'r', 'h'};

    //Initializing scores for each player to keep track of the winner.
    int p1Score = 0, p2Score = 0;
    //int playerTurn = 1;

    //char ch[]; //This will populate with an array of ints > may need to use int instead of char << dont neeed with getchar?

    //Prompt user to enter the first sequence.
    printf("Enter the first sequence: ");

    //Initialize do/while loop to begin collecting characters. This loop will break once a newline (enter) input is detected.
    do {
        letter = getchar();

        //Requirements state whitespace will be skipped, if whitespace is detected the loop will continue onto the next character.
        if (letter == ' ') { 
            continue;
            
            //Beginning to check all character.
        } else if (letter) {

            //Iterating through our vowel list to check if the entered character is a vowel.
            for (int i = 0; i < 5; i++) {

                //If character is a vowel, we will increment the score by 1 point per requirements.
                if (letter == vowel[i]) {
                    p1Score += 1;

                } else if (letter == consonant[i]) {
                    p1Score += 2;

                } else p1Score +=3;
            }
        }
                
    } while (letter != '\n');

    printf("%d", p1Score);

    return 0;
}
