#include <iostream>
#include <string>

using namespace std;

void printASCIIArt()
{   
    string asciiArt = R"(

                      
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                      
                 
             _______  ___   ___________   _  __                                
            / ___/\ \/ / | / /_  __/   | | |/ /                                
            \__ \  \  /  |/ / / / / /| | |   /                                 
           ___/ /  / / /|  / / / / ___ |/   |                                  
    ______/____/__/_/_/ |_/_/_/_/_/__|_/_/|_|__________  ______________  _   __
   /  _/ __ \/ ____/ | / /_  __/  _/ ____/  _/ ____/   |/_  __/  _/ __ \/ | / /
   / // / / / __/ /  |/ / / /  / // /_   / // /   / /| | / /  / // / / /  |/ / 
 _/ // /_/ / /___/ /|  / / / _/ // __/ _/ // /___/ ___ |/ / _/ // /_/ / /|  /  
/___/_____/_____/_/ |_/ /_/ /___/_/   /___/\____/_/  |_/_/ /___/\____/_/ |_/   
                                                                               
                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                      

)";

    cout << asciiArt << endl;
}

int main()
{
    printASCIIArt();

    return 0;
}
