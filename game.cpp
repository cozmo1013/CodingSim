#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void game() {
    string code[] = {"cout << \"Hello, World!\";","int main()", "hi()"};
    cout << "Press any key to code!" << endl;
    cout << "Press U to upgrade!" << endl;
    cout << "Press Q to Exit" << endl;
    short codeNum {0};
    int lines {0};
    int lvl {1};
    while(true) {
        if (getch() != 'q'&&getch() != 'u') {
            lines=lines+lvl;
            cout << "============" << endl;
            codeNum = rand() % 3;
            for (int i = 0;i<=code[codeNum].length()-1;i++) {
                cout << code[codeNum][i];
                _sleep(50);
            }
            cout << endl << "============" << endl;
            cout << "lines of code written: " << lines << endl;
            cout << "Level: " << lvl << endl;
            
        } else if (getch() == 'u') {
            if (lines-10 >= 0) {
                lvl++;
                lines = lines - 10;
            }
        } else {
            string thx {"Thanks for playing!"};
            for (int i = 0;i<=thx.length()-1;i++) {
                cout << thx[i];
                _sleep(50);
            }
            _sleep(1000);
            break;
        }
    }
}
int main() {
    _sleep(100);
    cout << "-XXXX------XXX" << endl;
    _sleep(50);
    cout << "-X--X-----X---" << endl;
    _sleep(50);
    cout << "-XXXX-----X---" << endl;
    _sleep(50);
    cout << "-X--------X---" << endl;
    _sleep(50);
    cout << "-X----X----XXX" << endl;
    _sleep(1000);
    for (int i = 0; i <=3;i++) {
        cout << "========================="<< endl;
        _sleep(100);
    }
    //Intro and stuff done
    _sleep(2000);
    cout << "\033[2J\033[1;1H";
    _sleep(20);
    cout << "CODING SIM!" << endl;
    for (int i = 0; i <=3;i++) {
        cout << "========================="<< endl;
        _sleep(100);
    }
    _sleep(500);
    cout << "Press a to play" << endl;
    cout << "Press any other to quit" << endl;
    char optn = getch();
    if (optn == 'a') {
        cout << "\033[2J\033[1;1H";
        game();
    }
    return 0;
}
