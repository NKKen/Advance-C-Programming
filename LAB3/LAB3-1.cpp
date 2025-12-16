#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream file("Subject.txt");
    string line;
    while(getline(file, line)){
        cout << line << endl;
        string lowerline = line;
        for(char &c : lowerline){
            c = tolower(c);
        }
        size_t pos = line.find("love");

        if (pos >= line.length()) {
            cout << "The word 'love' was not found in the line." << endl;
        } else {
            cout << "The word 'love' was found at position: " << pos << endl;
        }

        //tokenizing the line into words
        size_t start = 0;
        size_t end = line.find(" ");
        bool found = false;
         while (end != string::npos) {
            string word = line.substr(start, end - start);
            start = end + 1;
            end = line.find(' ', start);
            cout << word << endl;
        }
    }
    file.close();
    return 0;
}