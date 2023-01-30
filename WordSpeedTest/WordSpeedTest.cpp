#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main()
{
    string text; //Declare a string to hold the user's input.
    cout << "Enter a sentence: "; //Prompt the user to enter a sentence.
    getline(cin, text); //Get the user's input and store it in the string.

    auto start = chrono::steady_clock::now(); //Start the timer.

    int words = 1; //Initialize a counter for the number of words in the sentence.

    for (int i = 0; i < text.length(); i++) { //Loop through each character in the sentence.
        if (text[i] == ' ') { //If there is a space, then increase the word count by one.
            words++;
        }
    }

    auto end = chrono::steady_clock::now(); //Stop the timer.

    auto elapsed = end - start; //Calculate how long it took to count the words.

    cout << "Number of words: " << words << endl; //Output the number of words in the sentence. 

    cout << "Elapsed time: " << chrono::duration<double, milli>(elapsed).count() << " ms" << endl; //Output how long it took to count the words in milliseconds.  

    return 0;
}