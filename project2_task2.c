/*
* Name: Hunter Hawkins - U13938229
* Email: hunterhawkins@usf.edu 
* Assignment: Project 2: Task 2
* This C program will allow two users to enter an arbitrary amount of characters and then display the winner using a predetermined
* scoring system or prompt the users to play again if there is a tie. Per requirements, the players will recieve one point for a vowel,
* two points for a popular consonant, and three points for other characters. Whitespace will be ignored. 
* This program will strictly use the getchar function to read character input. 
*/

// ADDING LIBRARIES
#include <stdio.h> 

int main () {

    //Initializing a letter variable to keep track of user inputted characters.
    char letter;

    //Initializing special case vowel and popular consonant arrays to check against and add additional points to score if conditionals are met.
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    char consonant[] = {'t', 'n', 's', 'r', 'h'};

    //Initializing a found flag to determine if the letter is a vowel or consonant.
    int found;

    //Initializing scores for each player to keep track of the winner.
    int p1Score = 0, p2Score = 0;

    //Prompt user to enter the first sequence.
    printf("Enter the first sequence: ");

    //Initialize do-while loop with getchar to begin collecting characters. This loop will break once a newline (enter) input is detected.
    do {
        letter = getchar();

        //Skipping any space characters.
        if (letter == ' ') {
            continue;
        }

        //Resetting our flag after each character.
        found = 0;

        //Begin checking the arrays of vowels and consonants to see if the letter matches.
        for (int i = 0; i < 5; i++) {

            if (letter == vowel[i]) { //If the character is found to be a vowel, add 1 to score and set found flag as true.
                p1Score += 1; //Adding one point to player 1 score.
                found = 1; //Setting our found flag to true. 
                break; //Exiting if statement.

            } else if (letter == consonant[i]) { //If the character is found to be a consonant, add 1 to score and set found flag as true.
                p1Score += 2; //Adding two points to player 1 score.
                found = 1; //Setting our found flag to true. 
                break; //Exiting if statement.

            } 
        }

        //If the character is not found, shown by a false flag, add three points to the players score.
        if (found == 0) {
            p1Score += 3; //Adding three points to player 1 score.
        }

    } while (letter != '\n'); //Do-while loop breaks once a newline character, or the enter key, is read.
    
    //Prompt user to enter the second sequence.
    printf("Enter the second sequence: ");
    
    //Initialize do-while loop with getchar to begin collecting characters. This loop will break once a newline (enter) input is detected.
    do {
        letter = getchar();

        //Skipping any space characters.
        if (letter == ' ') {
            continue;
        }

        //Resetting our flag after each character.
        found = 0;

        //Begin checking the arrays of vowels and consonants to see if the letter matches.
        for (int i = 0; i < 5; i++) {

            if (letter == vowel[i]) { //If the character is found to be a vowel, add 1 to score and set found flag as true.
                p2Score += 1; //Adding one point to player 2 score.
                found = 1; //Setting our found flag to true. 
                break; //Exiting if statement.

            } else if (letter == consonant[i]) { //If the character is found to be a consonant, add 1 to score and set found flag as true.
                p2Score += 2; //Adding two points to player 2 score.
                found = 1; //Setting our found flag to true. 
                break; //Exiting if statement.

            } 
        }

        //If the character is not found, shown by a false flag, add three points to the players score.
        if (found == 0) {
            p2Score += 3; //Adding three points to player 2 score.
        }

    } while (letter != '\n'); //Do-while loop breaks once a newline character, or the enter key, is read.
    
    //Use of a conditional to compare the player scores and determine the winner, or if tie.
    if (p1Score > p2Score) { //Checking if Marjorie is the winner.
        printf("Marjorie wins!"); //Printing Marjorie is the winner.

    } else if (p2Score > p1Score) { //Checking if John is the winner.
        printf("John wins!"); //Printing John is the winner.

    } else printf("Play again!"); //Prompting users to play again because there is a tie!
    
    return 0;
}
