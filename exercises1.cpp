#include <iostream>
#include <string>

using std::string;

int main(){
    const string exclam = "!";
    const string message = "Hello, world" + exclam;

    std::cout << message;
    return 0;
}