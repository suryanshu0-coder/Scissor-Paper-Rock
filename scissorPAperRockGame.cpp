// making a scissor paper rock game

#include <iostream>
#include <random>
#include <string>

using namespace std;
int main()
{
         int humanChoice, computerChoice;
         string PlayerName;
         cout << "Enter your name:  " << PlayerName << endl;
         cin >> PlayerName;

         cout << "Welcome to the scissor paper rock game  " << PlayerName << endl;
         cout << "Best of luck!" << PlayerName << endl;

         random_device rd;
         mt19937 rng(rd());
         uniform_int_distribution<int> dist(1, 3);

         while (true)
         {

                  int humanWins = 0;
                  int computerWins = 0;

                  for (int i = 0; i < 5; i++)
                  {

                           cout << "Enter your choice  [1 -scissor, 2-paper , 3-rock]  " << PlayerName << endl;
                           cin >> humanChoice;

                           if (humanChoice == 1)
                           {
                                    cout << "You have selected  Scissors" << endl;
                           }
                           else if (humanChoice == 2)
                           {
                                    cout << "You have selected  Paper" << endl;
                           }
                           else if (humanChoice == 3)
                           {
                                    cout << "You have selected  Rock" << endl;
                           }

                           cout << endl;

                           computerChoice = dist(rng); // this will generate random number for computer

                           if (humanChoice == computerChoice)
                           {
                                    cout << "The game is tie!" << endl;
                           }

                           else if ((humanChoice == 1 && computerChoice == 2) ||
                                    (humanChoice == 2 && computerChoice == 3) ||
                                    (humanChoice == 3 && computerChoice == 1))
                           {
                                    cout << "Congratulations!   " << PlayerName << "  You won the match" << endl;
                                    humanWins++;
                           }

                           else
                           {
                                    cout << "Computer won the match  " << endl;
                                    computerWins++;
                           }
                           // cout << " " << computerChoice << endl;

                           if (computerChoice == 1)
                           {
                                    cout << "The choice of Computer was Scissors" << endl;
                           }
                           else if (computerChoice == 2)
                           {
                                    cout << "The choice of Computer was Paper" << endl;
                           }
                           else if (computerChoice == 3)
                           {
                                    cout << "The choice of Computer was Rock" << endl;
                           }

                           cout << endl;
                  }

                  cout << "Scoreboard:" << endl;
                  cout << "Your point"
                       << ": " << humanWins << endl;
                  cout << "Computer's point"
                       << ": " << computerWins << endl;

                  if (humanWins > computerWins)
                  {
                           cout << "You won " << PlayerName << endl;
                  }
                  else
                  {
                           cout << "Computer wins " << PlayerName << endl;
                  }

                  char playAgain;
                  cout << "Press 'y' if you want to play again and press 'n' if you want to quot the game" << endl;

                  cin >> playAgain;
                  if (playAgain == 'y' && playAgain != 'n')
                  {
                           continue;
                  }
                  else
                  {
                           cout << "Thanks for playing! " << endl;
                           break;
                  }
         }

         return 0;
}
