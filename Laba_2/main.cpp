#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale( LC_ALL,"Russian" );
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string InputMonth;
    cout<<"������� �����: ";
    cin >> InputMonth;

    int i = 0,k;
    while(InputMonth != month[i]){
        i++;
    }
    cout << "������� K: ";
    cin >> k;
    if(i+k<12){cout <<k<<"-�� ����� ����� " <<month[i] << '-' << month[i+k];}
    if(i+k>=12){cout <<k<<"-�� ����� ����� " <<month[i] << '-' << month[i+k-12];}
    return 0;
}
