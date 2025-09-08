#include <iostream>
#include <string>
using namespace std;


/*
Variables Used

Gword = original word to guess
guessword = Gword which user guesses
char_word = Gword char which he eneterd





*/



string guessword;
string word = "goldg";
int length = word.length();
int tries_length = 5;
int tries;

int main() {

    int i;
    guessword = string(length, '_');

    //initialized  string word to char word
    char char_word[10];
    for (i=0; i<=length; i++)
    {
        char_word[i] = word[i];
    }

    cout<< "welcome to game"<<endl;
    cout<< "you have to guess "<< length<<" letters"<<endl<<endl;

    while(guessword != word) {

        cout << endl << "*****************************" << endl<< endl;
        cout << "Current word: "<< guessword << endl;

        cout  << "enter char to insert/guess: ";
        char user_char;
        cin >> user_char;

        bool found = false;

        for(i=0; i<length; i++)
        {
            if ( user_char == char_word[i] )
            {
                cout<< "you guessed right"<<endl;
                guessword[i] = user_char;
                found = true;
                break;
            }
        }
        if (found == false) {
            cout << endl << "try again, wrong guess" << endl;
            tries++;
            cout << endl << "remaning no. of tries: "<< tries_length - tries << endl;
        }

        if (tries >= tries_length)
        {
            cout << endl << "you tries are all done" << endl;
            break;
        }
        
        for(i=0; i<=guessword.length(); i++){
          if(char_word[i]= user_char){
            cout << "You already guessed this letter."<< endl;
        }
      
    }}
    


    if(guessword == word && tries < tries_length ) 
    {
        cout << "\n\n\n\n\tyou guessed the word:     "<< word << "!!!!\n\n\n\n"<<endl;
    }
    else
        cout << "\n\n\n\n\tyou falied this game" <<"!!!\n\n\n\n"<< endl;
    



    return 0;
}
