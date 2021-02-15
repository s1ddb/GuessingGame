#include <iostream>
#include <time.h> //needed for the srand
using namespace std;


/* BY: Siddhartha Bobba
   2/14/2021
   The game will generate a random number and will ask the user to guess the number until they get the correct number.
   It hints at the user with 'too high' or 'too low'. It also has a prompt to ask the user to restart the game if they win.
*/



int main()
{


  srand (time(NULL)); //sets the seed for the random num generation
  
  int randomNum = rand()%100; // the random number being set by the computer
  int usrinput = -1; //the user's guess 
  int inputCount = 0; //variable to keep track of how many times the user has guessed
  char RestartGame; //variable to set restart game to t or f

  bool Restart = true;

  while (Restart == true) { //Keeps programming running if restart stays true, if user enters N for restart then it terminates
      
  while(randomNum != usrinput) { //the  loop keeps going as long as the user has not gotten the number right
    cout << "Enter a number: ";
    cin >> usrinput; // variable to store the user's answer to 'enter a number'
    if (usrinput < randomNum) { // if the userinput is lower than the correct number
      cout << "Your guess number is too low" << endl;
    }
    else if (usrinput > randomNum) { //if the userinput is higher than the correct number. Friend suggested 'else if' and not 'if'.
	cout << "Your guess number is too high" << endl;
      }
    inputCount++; //adds 1 to the guess count after every input by the user
    
  }

  cout << "It took you " << inputCount << " guesses" << endl;
  cout << "You win!";
  cout << "Would you like to play again? Type 'Y' for Yes, 'N' for No." << endl;
  cin >> RestartGame; // variable to store user's yes or no response to restart the game
  if (RestartGame == 'N') {
    Restart = false; //sets restart to false if user does not want to replay
  }
  // resets ALL variables
  
  randomNum = rand()%100;
  usrinput = -1;  
  inputCount = 0; 
    }
  
  return 0;
}
