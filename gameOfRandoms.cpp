#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int computer_choice = (rand() % 100) + 1;
    int user_choice;
    int count = 0;
    cout << "****************Guess the number*******************\n"
         << endl;
    do
    {
        cout << "Guess the number between 1-100 : ";
        cin >> user_choice;
        count++;
        if (user_choice == computer_choice)
        {
            cout << "\nHey you won the game , the number was " << user_choice << endl;
            cout << "You guessed the number in " << count << " guesses" << endl;
            cout << "\n**************************************************" << endl;
            return 0;
        }
        else if (user_choice > computer_choice)
        {
            cout << "Your number is too large....\n\n";
        }
        else
        {
            cout << "Your number is too small...\n\n";
        }
    } while (1);
}
