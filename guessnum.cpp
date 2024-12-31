#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int easy();
int medium();
int difficult();
int main()
{  cout <<"\n\t\t\t Welcome to guess the number game!"<<endl;
   cout <<"you have to guess a number between 1 to 100.\n"
          "you'll have limited choices based on the level you choose. GOOD LUCK!! "<<endl;
      while(1)
      {
        cout<<"\nEnter the difficulty level: \n";
        cout<<" 1. For easy!  ";
        cout<<" 2. For medium!  ";
        cout<<" 3. For dificult!  ";
        cout<<" 4. For ending the game!\n"<<endl;
      
      int choice;
      cout<<"enter your choice :\n";
      cin>>choice;
      
      int playerchoice;
      switch(choice)
      { case 1: easy();
              break;
        case 2: medium();
              break;
        case 3: difficult();
              break;
        case 4: exit(0);
        default:  cout<<"invalid choice!!\n";
      }
        
      } return 0; 
  }
int easy()
{ cout<< "You have 10 choices for finding the secret number.\n ";
  int playerchoice;
  //generating the secret number
      srand(time(0));
      int secretnum =  (rand() % 100);

  int choicesleft =10;
  for(int i=1; i<=10; i++)
  { cout<<"\n\n Enter the number that you guess:\t";
    std::cin>>playerchoice;
    if (playerchoice == secretnum)
    { cout<<"\n WEll PLAYED! you won, "<<playerchoice<<" is the secret number"<<endl;
      cout<< "\nthanks for playing\n"<<endl;
      cout<<"If you want to play again chose the difficulty level or you can press 4 to end the game\n";
      break;
    }
    else {
      cout<<"\nNope, "<<playerchoice<<" is not the right number\n";
      if(playerchoice > secretnum)
      { cout<<"\n The secret number is smaller than your chosen number\n"<<endl;
       }
      else
      { cout<<"The secret number is greater than your chosen number\n"<<endl;
      }
      choicesleft--;
      cout<<"\nYou have "<<choicesleft<<" choices left.\n"<<endl;
    if(choicesleft==0)
    { cout<< "YOU LOST!!, you couldn,t find the number, it was "<<secretnum;
      cout<< "\nplay game again to win!!   Or you can press 4 to exit \n\n";
      break;

    }
   }
 } return 0;
}
int medium()
{ cout<< "You have 5 choices for finding the secret number.\n ";
  int playerchoice;
  //generating the secret number
      srand(time(0));
      int secretnum =  (rand() % 100);

  int choicesleft =5;
  for(int i=1; i<=5; i++)
  { cout<<"\n\n Enter the number that you guess: ";
    std::cin>>playerchoice;
    if (playerchoice == secretnum)
    { cout<<"\n WEll PLAYED! you won, "<<playerchoice<<" is the secret number"<<endl;
      cout<< "\nthanks for playing\n"<<endl;
      cout<<"If you want to play again chose the difficulty level or you can press 4 to end the game\n";
      break;
    }
    else {
      cout<<"\nNope, "<<playerchoice<<" is not the right number\n";
      if(playerchoice > secretnum)
      { cout<<"\n The secret number is smaller than your chosen number\n"<<endl;
       }
      else
      { cout<<"The secret number is greater than your chosen number\n"<<endl;
      }
      choicesleft--;
      cout<<"\nYou have "<<choicesleft<<" choices left\n"<<endl;
    if(choicesleft==0)
    { cout<< "YOU LOST!!, you couldn,t find the number, it was "<<secretnum;
      cout<< "\nplay game again to win!!   Or you can press 4 to exit \n\n";
      break;

    }
   }
 }return 0;
}
int difficult()
{cout<< "You have 3 choices for finding the secret number.\n ";
  int playerchoice;
  //generating the secret number
      srand(time(0));
      int secretnum =  (rand() % 100);

  int choicesleft =3;
  for(int i=1; i<=3; i++)
  { cout<<"\n\n Enter the number that you guess:";
    std::cin>>playerchoice;
    if (playerchoice == secretnum)
    { cout<<"\n WEll PLAYED! you won, "<<playerchoice<<" is the secret number"<<endl;
      cout<< "\nthanks for playing\n"<<endl;
      cout<<"If you want to play again chose the difficulty level or you can press 4 to end the game\n";
      break;
    }
    else {
      cout<<"\nNope, "<<playerchoice<<" is not the right number\n";
      if(playerchoice > secretnum)
      { cout<<"\n The secret number is smaller than your chosen number\n"<<endl;
       }
      else
      { cout<<"The secret number is greater than your chosen number\n"<<endl;
      }
      choicesleft--;
      cout<<"\nYou have "<<choicesleft<<" choices left\n"<<endl;
    if(choicesleft==0)
    { cout<< "YOU LOST!!, you couldn,t find the number, it was "<<secretnum;
      cout<< "\nplay game again to win!!   Or you can press 4 to exit \n\n";
      break;
    }
   }
 }return 0;
}
