#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;         using std::setprecision;
using std::cout;        using std::string;
using std::endl;        using std::streamsize;
using std::vector;      using std::sort;

int main(){
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
    
    double x;
    vector<double> homework;

    while (cin >> x)
        homework.push_back(x);

    typedef vector<double>::size_type vec_size;
    vec_size size = homework.size();

    if(size == 0) {
        cout << "Sorry, size cant be 0, try again!";
        return 1;
    }

    sort(homework.begin(), homework.end());

    // dorobic
   
    
    return 0;
}