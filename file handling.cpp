
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream Myfile;


    // Taking the input string from the user

    string story;
    cout << "Enter a text: \n";
    getline(cin, story);

    // Converting the string to character array

    char story_char[story.length()];
    for (int i = 0; i < story.length(); i++)
    {
        story_char[i] = story[i];
    }
	cout<<"\n";
    // Ciphering the story and writing it into the file.....

    Myfile.open("dan.txt", ios::out);
    if (Myfile.is_open())
    {
    	cout<<"ASCII Code: \n";
        for (int i = 0; i < story.length(); i++)
        {
            Myfile << int(story_char[i]);
            cout<< int(story_char[i]);
        }
    }
    Myfile.close();
	
	cout<<"\n";
	
    // De-ciphering the numbers into story.....
    cout<<"\n";
    cout << "The deciphered numbers form the text:\n ";
    Myfile.open("dan.txt", ios::in);
    if (Myfile.is_open())
    {
        string line;
        while(getline(Myfile, line)){
            int num = 0;
            for(int i = 0; i < line.length(); i++){
                num = num * 10 + (line[i] - '0');
                if(num>=32 && num<=122){
                    char ch = (char)num;
                    cout <<ch;
                    num = 0;
                }
            }
        }
    }
    Myfile.close();

    return 0;
}
