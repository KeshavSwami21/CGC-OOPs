#include <iostream>
#include <string.h>
using namespace std;

string str;

class ROS
{
public:
    char temp;
    int i, j;

    void Input()
    {
        
        // Getting input from the user
        cout << "Enter a string: ";
        cin.ignore();
        getline(cin, str);
    }

    // Logic for revesing the string given by "Split_logic" i.e "word"
    void Reverse_Logic(string word)
    {

        // Getting the length for looping variable "j"
        j = (word.length() - 1);

        // Both looping variable will be increment and drement at the same time so that value can be transfer between variables.
        for (i = 0; i < j; i++, j--)
        {
            temp = word[i];
            word[i] = word[j];
            word[j] = temp;
        }

        cout << word << " ";
    }

    // Logic for split the string (Whole sentence into words) main functoin by i.e "str" and passing it to "Reverse_Logic"
    void Split_Logic(string str)
    {

        string word = "";
        cout << "\nReversed String: ";

        // Main logic to split sentence into words
        for (auto x : str)
        {
            // When the space is detected "if" statement will be executed
            if (x == ' ')
            {
                // Calling "Reverse_logic" to print the splited word into reverse
                Reverse_Logic(word);

                // After printing the splited word, it'll be set to null
                word = "";
            }
            else
            {
                // If the space is not detected after then the character in x will be added to "word" so that it can form a word
                word = word + x;
            }
        }

        // Calling "Reverse_Logic" for the last word to be printed in reverse form
        Reverse_Logic(word);
    }
};

int main()
{
    cout << "This program is to print a sentence in reverse form without loosing the position of words.\n\n";

    char opt[3];

    // Calling the "ROS" Class by forming an object "ros"
    ROS ros;

Repeat:

    // Calling the "Input" function inside the "ROS" class by the help of "ros" object
    ros.Input();
    // Calling the "Split_Logic" function inside the "ROS" class by the help of "ros" object
    ros.Split_Logic(str);

Decision:
    cout << "\n\nDo you want it again (y/n): ";
    cin >> opt;

    // Storing the first character of the array "opt" to r_opt to convert it to lowercase
    char r_opt = opt[0];

    switch (tolower(r_opt))
    {
    case 'y':
        cout << endl;
        goto Repeat;
        break;

    case 'n':
        break;

    default:
        cout << "\nPlease input correct option.\n";
        goto Decision;
        break;
    }

    cout << "\nThanks for using me:D\n";
}