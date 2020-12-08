#include<bits/stdc++.h>
using namespace std;

bool playGame(int diff) {
    int codea = (rand() % diff) + 1;
    int codeb = (rand() % diff) + 1;
    int codec = (rand() % diff) + 1;
    int codeSum = codea + codeb + codec;
    int codeProduct = codea * codeb * codec;
    cout<<"\n\nSolve each problem to move to the next level"<<endl;
    cout<<"\n\nYou are at level "<<diff<<endl;
    cout<<"\n\n1. Nums multiply up to "<<codeProduct<<endl;
    cout<<"\n\n2. Nums add up to "<<codeSum<<endl;
    cout<<"\n\n3. Three number digit"<<endl;
    int a; int b; int c;
    cin>>a; cin>>b; cin>>c;
    cout<<"You guessed "<<a<<" "<<b<<" "<<c<<endl;
    const int sum = a + b + c;
    const int product = a * b * c;
    if (sum == codeSum && product == codeProduct) {
        cout<<"\n\nCorrect"<<endl;
        return 1;
    } else {
        cout<<"\n\nWrong"<<endl;
        return 0;
    }
}

int main() {
    int levelDifficulty = 1;
    bool endGame = 0;
    while (endGame != 1) {
        bool game = playGame(levelDifficulty);
        cin.clear();
        cin.ignore();
        if (game) {
            levelDifficulty++;
        } else {
            endGame = 1;
            cout<<"\n\nLmao you suck"<<endl;
        }
    }

    return 0;
}