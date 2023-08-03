#include<iostream>
#include<fstream>

std::string encrypt_line(const std::string text, int shift = 0){
    const int length = text.length();
    std::string encrypted_text = "";
    char base, shifted_char;
    for(size_t i = 0; i < length; i++){
        if(isalnum(text[i])){
            if(isdigit(text[i])) encrypted_text += 'A' + (text[i] - 1);
            else {
                base = islower(text[i]) ? 'a' : 'A';
                encrypted_text += std::to_string(static_cast<int>(((text[i] - base + shift) % 26) + base)) + " ";
            }
        } else encrypted_text += text[i];
    }
    return encrypted_text;
}
bool encryption(const std::string inputFile, int shift, const std::string outputFile = "Encrypt_File.txt"){
    std::ifstream inFile;
    std::ofstream outFile;
    std::string line;
    inFile.open(inputFile, std::ios::in);
    if(inFile.is_open()){
        while(std::getline(inFile, line)){
            outFile.open(outputFile, std::ios::app);
            if(outFile.is_open()){
                outFile << encrypt_line(line, shift) << '\n';
                outFile.close();
            } else {
                outFile.close();
                std::cerr << "The file did not open" << std::endl;
            }
        }
        inFile.close();
    } else {
        inFile.close();
        std::cerr << "The file did not open" << std::endl;
        return false;
    }
    return true;
}
std::string decrypt_line(const std::string text, int shift){
    const int length = text.length();
    std::string decrypted_text = "", strNum = "";
    char base, shifted_char, char_num;
    for(size_t i = 0; i < length; i++){
        if(isdigit(text[i])) strNum += text[i];
        else if(!strNum.empty()){
            char_num = std::stoi(strNum);
            base = islower(char_num) ? 'a' : 'A';
            decrypted_text += ((char_num - base - shift + 26) % 26) + base;
            strNum = "";
        } else if(isalpha(text[i])) decrypted_text += text[i] - 'A' + 1;
        else decrypted_text += text[i];
    }
    return decrypted_text;
}
bool decryption(const std::string inputFile, int shift){
    std::ifstream inFile;
    inFile.open(inputFile);
    std::string line;
    if(inFile.is_open()){
        while(std::getline(inFile, line)){
            if(line.empty()){
                std::cout << std::endl;
                continue;
            } else {
                std::cout << decrypt_line(line, shift) << std::endl;
            }
        }
        inFile.close();
    } else {
        inFile.close();
        std::cerr << "The file did not open" << std::endl;
        return false;
    }
    return true;
}
int main(){

    int shift;
    std::string File_name;
    char choice;
    bool result;
    do{
        system("cls");
        std::cout << "Encryption & Decryption Program" << std::endl;
        std::cout << "A - Encrypt a file" << std::endl;
        std::cout << "B - Decrypt a file" << std::endl;
        std::cout << "C - Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        choice = toupper(choice);

        switch(choice){
            case 'A':
                std::cout << "Enter the file you want to encrypt(include the .txt): ";
                std::cin >> File_name;
                std::cout << "Enter the shift of encryption: ";
                std::cin >> shift;
                result = encryption(File_name, shift);
                if(result) std::cout << "The file encrypted successfully in \'Encrypt_File.txt\'" << std::endl;
                else std::cout << "The file did not encrypted" << std::endl;
                break;
            case 'B':
                std::cout << "Enter the file you want to decrypt(include the .txt): ";
                std::cin >> File_name;
                std::cout << "Enter the shift of decryption: ";
                std::cin >> shift;
                result = decryption(File_name, shift);
                std::cout << std::endl;
                if(result) std::cout << "The file decrypted successfully" << std::endl;
                else std::cout << "The file did not decrypted" << std::endl;
                break;
            case 'C': break;
            default: std::cout << "That is a invalid choice" << std::endl;
        }
        system("pause");
    }while(choice != 'C');
    return 0;
}