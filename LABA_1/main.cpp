#include <iostream>
#include <string>
#include <clocale>

using namespace std;
//������� ����������, ��� �� ����� � ������ ������? ����� ��������� ���� �� ����� ��� ����� �����, ������� ������ ��! �������� ������ ���, �� ����, ����� ����(��������).
//������� ������� �������� ������ � ������� ������� ��� ������ �� �������. ����� ������������ STRING, ����� ���������� ��������������� ���������� #include <string>.
//������ ������� ��������� ���� ����� � ����� ������� � ������� ��� ������.
//��� ��� ��� ����� ��������� ������, �� ������� � ������� i+1-��� ������� �������.

int main()
{   setlocale( LC_ALL,"Russian" );
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string InputMonth;
    cout<<"������� �����: ";
    cin >> InputMonth;

    int i = 0;
    while(InputMonth !=month[i]){
        i++;
    }

    if(i == 11)cout<<month[0];//���� ��������� ����� - ��� ��������� ������� ������ �������, �� ������� 1-��(0-��) �������.
    else cout<<"�� ���� ������� ���� " <<month[i+1];
    return 0;
}
