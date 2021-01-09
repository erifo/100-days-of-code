#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("TEXT.txt");
    MyFile << "This song is new to me, but I'm honored to be a part of it.";
    MyFile.close();

    string myText;
    ifstream MyReadFile("TEXT.txt");
    while (getline(MyReadFile, myText)) {
        cout << myText;
    }
    cout << endl;
    MyReadFile.close();

    system("pause");
    return 0;
}
