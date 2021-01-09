#include <iostream>
#include <string>
using namespace std;

void print(string output){
    cout << output << endl;
}

void print(int output){
    cout << output << endl;
}

int fun(int &x)
{
    return x;
}

class Car {
public:
    string name;
    int id;
    Car(string name, int id) {
        this->name = name;
        this->id = id;
    }
};

int main(){
    Car c("speedy", 42);
    print(c.name);
    print(c.id);

    print("Hello! Enter your name.");
    string name;
    string greeting = "Hello ";
    getline(cin, name);
    print(greeting.append(name));

    int x = 10;
    int& a = x;
    a += 5;
    print(x);
    //15

    int bb = 7;
    print(fun(bb));
    system("pause");
    return 0;
}
