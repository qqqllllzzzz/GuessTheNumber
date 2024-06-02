#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main() {
   int inp;
   srand( time( 0 ) );
   cout << "Guess the number (1 - 10): ";
   cin >> inp;
   int rand_num = 1 + rand() % 10;
   if (inp == rand_num) {
      cout << "YOU WIN!\n";

      string again;
      cout << "Play again? (yes/no): ";
      cin >> again;

      if (again == "yes") {
         system("cls");
         return main();
      }
      else {
         exit(0);
      }
   }
   else {
      cout << "YOU LOSE!\n";

      string again;
      cout << "Play again? (yes/no): ";
      cin >> again;

      if (again == "yes") {
         system("cls");
         return main();
      }
      else {
         exit(0);
      }
   }

   return 0;
}
