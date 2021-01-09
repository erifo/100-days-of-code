#include <iostream>
#include "person.h"

using namespace std;

int main() {
    person p("Billy", 42);
    cout << "His name is " << p.name << " and he is " << p.age << " years old." << endl;
    system("pause");
    return 0;
}
