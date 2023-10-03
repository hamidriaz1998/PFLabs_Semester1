#include <iostream>
string checkAlphabetCase(char);
main()
{

    char c;
    string answer;
    cout << "Enter a character (A/a): ";
    cin >> c;
    answer = checkAlphabetCase(c);
    cout << answer;
}

string checkAlphabetCase(char character){

    if (character == 'A'){
        return "You have entered Capital A";
    }
    if (character == 'a'){
        return "You have entered small A";
    }
}