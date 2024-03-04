#include <bits/stdc++.h>

using namespace std;

bool isValidContent(const string& user_input, const string& file_content) {
    if (file_content.find(user_input) == string::npos) {
        cout << "The input is Invalid" << endl;
        cout << "It should match content in the file." << endl;
        return false;
    }

    cout << "The input is Valid" << endl;
    return true;
}

int main() {
    ifstream inputFile("r.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string file_content;
    string line;
    while (getline(inputFile, line)) {
        file_content += line;
        file_content += '\n';
    }

    inputFile.close();

    cout << "File Content:\n" << file_content << endl;

    string user_input;
    cout << "Enter your output: ";
    getline(cin, user_input);

    cout <<boolalpha << isValidContent(user_input, file_content) << endl;

    return 0;
}
