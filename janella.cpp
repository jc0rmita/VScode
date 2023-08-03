#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



using namespace std;

int main()
{
    srand(time(NULL));

    string syntax[6] = {
        "cout<<variable_name;",
        "cin>>variable;",
        "data type variableName = value;",
        "const type name = value;",
        "// comment",
        "/* comment */"
    };

    string syntaxWithErrors[6] = {
        "cout<<<variable_name;",
        "cin<<variable;",
        "data type variableName == value;",
        "const type name =;",
        "// comment //",
        "/ comment /"
    };

   // int num = 1;

   
    string random;
for (int i = 0; i <6; i++){
    int errorIndex = rand() % 6;
    random = syntaxWithErrors[errorIndex];

    cout << "Identify the correct syntax:\n";
    cout << random << "\n";

    string userAnswer;
    cout << "Your answer: ";
    getline(cin, userAnswer);

    string correctAnswer = syntax[errorIndex];

    if (userAnswer == correctAnswer)
    {
        cout << "\nCongratulations! Your answer is correct.\n";
    }
    else
    {
        cout << "\nSorry, your answer is incorrect. The correct syntax is: \n";
        cout << correctAnswer << "\n";
    }
}
    return 0;
}