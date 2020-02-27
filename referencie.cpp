#include <iostream>

using std::cout;
using std::endl;

int main(){

int x = 0;
int& y = x;
int& z = y;
int& a = z;
int& b = a;
int& c = b;
int& d = c;

a++;
b++;
c++;

cout << x << " " << y << " " << z << endl;
    return 0;
}