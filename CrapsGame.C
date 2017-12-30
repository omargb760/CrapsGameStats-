/*
omar gonzalez
CS111 project
Purpose:
 This program will simulate the game of craps
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  srand (time(0)); // getting ramdom
  int roll,rollMore;
  int win=0,lose=0,count=0;
  double winD,loseD;
  const int NUM_GAMES=100000;
  //for loop 
 for(int count = 1; count <= NUM_GAMES; count++){
     roll=(rand()% 6+1)+(rand()% 6+1);

     if (roll == 7 || roll == 11)
       win++;
     else if (roll == 2 || roll==3 || roll== 12)
       lose++;
     else // Keep rolling
       {
      	 do
      	   {
      	     rollMore = (rand()% 6+1) +(rand()% 6+1);
      	   }while(rollMore != 7 && rollMore != roll);

         if (rollMore == 7)
      	     lose++;
      	 else if ( rollMore == roll)
      	     win++;

      }
   }

winD = (double) win/NUM_GAMES;
winD *= 100;
loseD = (double) lose/NUM_GAMES;
loseD *= 100;

cout << setw(10) << " WIN% " << setw(10)<<" Lose% " <<endl;
cout << setw(10) << winD  << setw(10)<< loseD <<endl;

 return 0; // End of Program
}
