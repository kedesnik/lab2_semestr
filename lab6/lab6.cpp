#include <iostream>
#include <cstring>
#include <string>
void stroka(char* str);
using namespace std;

int main() {
    //1
    char str[61];
    cin.getline(str, 60);
    stroka(str);
    //2

    return 0;
}
void stroka(char* str) {
    char* pch;
    int count = 0;
    pch = strtok(str, " ,.-");
    while (pch != NULL) {
        if (count != 0) {
            cout << pch[0] << ".";
        }
        else {
            cout << pch << " ";
        }
        count++;
        pch = strtok(NULL, " ,.-");
    }
    cout << endl;

}
