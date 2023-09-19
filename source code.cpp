#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<vector<int>>v(10,vector<int>(10));
vector<int> lb = {1, 4, 9, 21, 28, 51, 72, 80};
vector<int> lt = {38, 14, 31, 42, 84, 67, 91, 99};
vector<int> sh = {17, 62, 64, 54, 87, 93, 95, 98};
vector<int> st = {7, 19, 60, 34, 36, 73, 75, 79};
int x = 0, y = 0, n = 8, t;
void fill();
void print();
void turnofx();
void turnofy();
signed main() {
    srand(time(0));
    fill();
    print();
    while(true){
        turnofx();
        turnofy();
    }
}
void fill(){
    int q = 100;
    for(int i = 0; i < 10; ++i){
        if(i % 2 == 0){
            for(int j = 0; j < 10; ++j, --q)
                v[i][j] = q;
        }
        else{
            for(int j = 9; j >= 0; --j, --q)
                v[i][j] = q;
        }
    }
}
void print(){
    cout << "X = " << x << "   |   "<< "Y = " << y << endl;
    for(int i = 0; i < 10; ++i) {
        switch(i) {
            case 0:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "Ladders" << "  |  " << "Snakes   |";
                cout << endl << " ";
                break;
            case 1:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |------------|-----------|";
                cout << endl << " ";
                break;
            case 2:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "1 -> 38" << "  |  " << "17 -> 7  |";
                cout << endl << " ";
                break;
            case 3:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "4 -> 14" << "  |  " << "62 -> 19 |";
                cout << endl << " ";
                break;
            case 4:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "9 -> 31" << "  |  " << "64 -> 60 |";
                cout << endl << " ";
                break;
            case 5:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "21 -> 42" << " |  " << "54 -> 34 |";
                cout << endl << " ";
                break;
            case 6:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "28 -> 84" << " |  " << "87 -> 36 |";
                cout << endl << " ";
                break;
            case 7:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "51 -> 67" << " |  " << "93 -> 73 |";
                cout << endl << " ";
                break;
            case 8:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << " ";
                    else if (v[i][j] == y)
                        cout << 'Y' << " ";
                    else
                        cout << v[i][j] << " ";
                }
                cout << "    |   " << "72 -> 91" << " |  " << "95 -> 75 |";
                cout << endl << " ";
                break;
            case 9:
                for (int j = 0; j < 10; ++j) {
                    if (v[i][j] == x)
                        cout << 'X' << "  ";
                    else if (v[i][j] == y)
                        cout << 'Y' << "  ";
                    else
                        cout << v[i][j] << "  ";
                }
                cout << "   |   " << "80 -> 99" << " |  " << "98 -> 79 |";
                cout << endl << " ";
                break;
            default:
                break;
        }
    }
}
void turnofx(){
    cout << "Turn of X, enter any number to roll the dice..." << endl;
    cin >> t;
    int dice = 1 + rand() % 6;
    cout << "Dice number is " << dice <<" !" << endl;
    if(dice == 6){
        if(dice <= 100 - x){
            x += dice;
            if(x == y) {
                y = 0;
                cout << "Oops Y has been eaten" << endl;
            }
            for(int i = 0; i < n; ++i){
                if(x == lb[i]) {
                    x = lt[i];
                    cout << "Yeah! you've climbed the ladder" << endl;
                }
            }
            for(int i = 0; i < n; ++i){
                if(x == sh[i]) {
                    x = st[i];
                    cout << "Damn snake! ate us" << endl;
                }
            }
            fill();
            print();
            if(x == 100) {
                cout << "X has won :)" << endl;
                exit(0);
            }
        }
        else
            cout << "Oops this is more than what we need" << endl;
        turnofx();
    }
    else{
        if(dice <= 100 - x){
            x += dice;
            if(x == y) {
                y = 0;
                cout << "Oops Y has been eaten" << endl;
            }
            for(int i = 0; i < n; ++i){
                if(x == lb[i]) {
                    x = lt[i];
                    cout << "Yeah! you've climbed the ladder" << endl;
                }
            }
            for(int i = 0; i < n; ++i){
                if(x == sh[i]) {
                    x = st[i];
                    cout << "Damn snake! ate us" << endl;
                }
            }
            fill();
            print();
            if(x == 100) {
                cout << "X has won :)" << endl;
                exit(0);
            }
        }
        else
            cout << "Oops this is more than what we need" << endl;
    }
}
void turnofy(){
    cout << "Turn of Y, enter any number to roll the dice..." << endl;
    cin >> t;
    int dice = 1 + rand() % 6;
    cout << "Dice number is " << dice <<" !" << endl;
    if(dice == 6){
        if(dice <= 100 - y){
            y += dice;
            if(y == x) {
                x = 0;
                cout << "Oops X has been eaten" << endl;
            }
            for(int i = 0; i < n; ++i){
                if(y == lb[i]) {
                    y = lt[i];
                    cout << "Yeah! you've climbed the ladder" << endl;
                }
            }
            for(int i = 0; i < n; ++i){
                if(y == sh[i]) {
                    y = st[i];
                    cout << "Damn snake! ate us" << endl;
                }
            }
            fill();
            print();
            if(y == 100) {
                cout << "Y has won :)" << endl;
                exit(0);
            }
        }
        else
            cout << "Oops this is more than what we need" << endl;
        turnofy();
    }
    else{
        if(dice <= 100 - y){
            y += dice;
            if(y == x) {
                x = 0;
                cout << "Oops X has been eaten" << endl;
            }
            for(int i = 0; i < n; ++i){
                if(y == lb[i]) {
                    y = lt[i];
                    cout << "Yeah! you've climbed the ladder" << endl;
                }
            }
            for(int i = 0; i < n; ++i){
                if(y == sh[i]) {
                    y = st[i];
                    cout << "Damn snake! ate us" << endl;
                }
            }
            fill();
            print();
            if(y == 100) {
                cout << "Y has won :)" << endl;
                exit(0);
            }
        }
        else
            cout << "Oops this is more than what we need" << endl;
    }
}
