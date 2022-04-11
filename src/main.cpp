#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void board();
void source();
void dest();
void determine_win();

int protect_data(int);
int get_input();
int check_source(int);


char tmp;
char tmp2;

vector<char>T1{'A','B','C','D'};
vector<char>T2{};
vector<char>T3{};

bool flag = true;
int main() {

    cout << "Tower of Hanoi\n";

    while(flag) {

        board();
        source();
        dest();

    }

    return 0;
}


void board(){

    cout << "\tT1";
    for(char y:T1){
        cout << "\t" << y;
    }
    cout << "\n\n";

    cout << "\tT2";
    for(char y:T2){
        cout << "\t"<<y;
    }
    cout << "\n\n";

    cout << "\tT3";
    for(char y:T3){
        cout << "\t"<<y;
    }
    cout << "\n";

}
void source(){

    int choice;
    enum tower{one=1,two,three};
    tower x = one;

    cout << "Choose a source tower 1,2,3: ";
    cin >> choice;
    choice = protect_data(choice);
    choice = check_source(choice);

    if(choice==x){
        tmp = T1[T1.size()-1];
        T1.pop_back();
    }
    if(choice==tower::two){
        tmp = T2[T2.size()-1];
        T2.pop_back();
    }
    if(choice==tower::three){
        tmp = T3[T3.size()-1];
        T3.pop_back();

    }

}
int check_source(int x){

    if(T1.empty() && x == 1){
        while(T1.empty()&& x == 1) {
            cout << "\nSource tower empty\nChoose new source tower: ";
            x = get_input();
        }
        return x;
    }
    if(T2.empty()&& x == 2){
        while(T2.empty()&& x == 2) {
            cout << "\nSource tower empty\nChoose new source tower: ";
            x = get_input();
        }
        return x;

    }
    if(T3.empty()&& x == 3){
        while(T3.empty() && x == 3) {
            cout << "\nSource tower empty\nChoose new source tower: ";
            x = get_input();
        }
        return x;
    }

}
void dest(){
    int choice;
    cout <<"Choose a destination tower 1,2,3: ";
    cin >> choice;
    choice = protect_data(choice);

    if (choice==1){
        if(T1.size() !=0){
            tmp2 = T1[T1.size()-1];
            if(tmp<tmp2){
                cout<< tmp << " cannot go on "<< tmp2<<endl;
                dest();
            }
        }
        if(tmp>=tmp2 || T1.size()==0) {
            T1.push_back(tmp);

        }
    }
    if (choice==2){
        if(T2.size() !=0){
            tmp2 = T2[T2.size()-1];
            if(tmp<tmp2){
                cout<< tmp << " cannot go on "<< tmp2<<endl;
                dest();

            }
        }
        if(tmp>=tmp2 || T2.size()==0) {
            T2.push_back(tmp);
        }
    }
    if (choice==3){
        if(T3.size() !=0){
            tmp2 = T3[T3.size()-1];
            if(tmp<tmp2){
                cout<< tmp << " cannot go on "<< tmp2<< endl;
                dest();
            }
        }
        if(tmp>tmp2 || T3.size()==0) {
            T3.push_back(tmp);
            determine_win();
        }
    }
}

void determine_win(){

    if(T3[0]=='A'&&T3[1]=='B'&&T3[2]=='C' && T3[3]=='D'){

        cout << "\nWin\n";

        board();
        exit(EXIT_SUCCESS);
    }
}

int protect_data(int x) {

    while (x < 1 || x > 3 || cin.fail()) {
        cin.clear();
        cin.ignore();

        cout << "Choose new tower, wrong data entered ";
        cin >> x;
    }
    return x;
}

int get_input(){
    int input;
    cin >> input;
    protect_data(input);
    return input;
}