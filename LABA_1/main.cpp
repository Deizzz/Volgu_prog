#include <iostream>
#include <string>
#include <clocale>

using namespace std;
//Давайте разберемся, что же нужно в данной задаче? КНаша программа пока не знает что такое месяц, поэтуму научим ее! Название месяца это, по сути, набор букв(символов).
//Поэтому заводим строчный массив в который занесем все месяца по порядку. Чтобы использовать STRING, нужно подключить соответствующую библиотеку #include <string>.
//Дальше находим введенный нами месяц в нашем массиве и нахадим его индекс.
//Так как нам нужен следующий индекс, то выводим в консоль i+1-тый элемент массива.

int main()
{   setlocale( LC_ALL,"Russian" );
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string InputMonth;
    cout<<"Введите месяц: ";
    cin >> InputMonth;

    int i = 0;
    while(InputMonth !=month[i]){
        i++;
    }

    if(i == 11)cout<<month[0];//если введенный месяц - это последний элемент нашего массива, то выводим 1-ый(0-ой) элемент.
    else cout<<"За этим месяцем идет " <<month[i+1];
    return 0;
}
