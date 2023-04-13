

#include <iostream>

#include <vector>

#include <algorithm>

#include <random>

using namespace std;

int main() {


vector<string> baralho;

for (int b = 1; b <= 2; b++) {

for (int n = 1; n <= 4; n++) {

for (int i = 1; i <= 13; i++) {

string carta = to_string(n) + "-" + to_string(i) + "-B" + to_string(b);

baralho.push_back(carta);

}

}

}

random_device rd;

mt19937 g(rd());

shuffle(baralho.begin(), baralho.end(), g);


vector<vector<string>> maos(4, vector<string>(11));


int cartaIndex = 0;


for (int j = 0; j < 4; j++) {

for (int c = 0; c < 11; c++) {


maos[j][c] = baralho[cartaIndex];

cartaIndex++;

}

}


for (int j = 0; j < 4; j++) {

cout << "Mao do Jogador " << j+1 << ": ";

for (int c = 0; c < 11; c++) {

cout << maos[j][c] << " ";
}

cout << endl;

}
return 0;

}