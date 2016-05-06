#include <iostream>
#include <string>

using namespace std;

int main()
{
    string month;
    cout << "Vvedite nazvanie mesiaca: ";
    cin >> month;

    if(month == "December" || month == "January" || month == "February"){
        cout << "Winter";
    }
    if(month == "March" || month == "April" || month == "May"){
        cout << "Spring";
    }
    if(month == "June" || month == "July" || month == "August"){
        cout << "Summer";
    }
    if(month == "September" || month == "October" || month == "November"){
        cout << "Autumn";
    }


    return 0;
}
