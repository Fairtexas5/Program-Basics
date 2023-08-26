#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char *str;

public:
    String();                                 // Default Constructor
    String(const char *s);                    // Parameterized Constructor
    String(const String &other);              // Copy Constructor
    ~String();                                // Destructor

    String &assign(const char *s);            // Assign a new string
    String &concatenate(const String &s);     // Concatenate two strings
    void display() const;                     // Display the string
};

String::String() : str(new char[1]{}), str("") {
    cout << "Default constructor is invoked." << endl;
}

String::String(const char *s) : str(new char[strlen(s) + 1]) {
    strcpy(str, s);
    cout << "Parameterized constructor is invoked." << endl;
}

String::String(const String &other) : str(new char[strlen(other.str) + 1]) {
    strcpy(str, other.str);
    cout << "Copy constructor is invoked." << endl;
}

String::~String() {
    delete[] str;
    cout << "Destructor is invoked." << endl;
}

String &String::assign(const char *s) {
    delete[] str;
    str = new char[strlen(s) + 1];
    strcpy(str, s);
    return *this;
}

String &String::concatenate(const String &s) {
    char *temp = new char[strlen(str) + strlen(s.str) + 1];
    strcpy(temp, str);
    strcat(temp, s.str);
    delete[] str;
    str = temp;
    return *this;
}

void String::display() const {
    cout << str;
}

int main() {
    String s1;                // Uninitialized
    String s2("Well done");  // Initialized

    s1.assign("Hello").display();

    cout << "\nConcatenating s2 and s1 to s2..." << endl;
    s2.concatenate(s1).display();

    return 0;
}
