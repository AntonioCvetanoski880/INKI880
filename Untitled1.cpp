#include <iterator>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct covek {
int redenbroj;
string ime;
float bodovi;

void Print(vector<int>redenBroj,vector<string>Ime , vector<float>Bodovi) {
float temp;
for (int j = 0; j < redenBroj.size() - 1; j++) {
int min = j;
for (int i = j + 1; i < redenBroj.size(); i++) {
if (Bodovi[i] > Bodovi[min]){

temp = Bodovi[i];
Bodovi[i] = Bodovi[min];
Bodovi[min] = temp;
};
};
};

int a;
vector<float>::iterator it;
while (a < redenBroj.size()){
for ( it = Bodovi.begin(); it != Bodovi.end(); ++it ) {
cout << redenBroj[a] << ". " << Ime[a] << " --> " << *it << " poeni\n";
a++;
};

};
};
};
int main()
{

vector<covek> ucenik ={
{1, "Antonio Cvetanoski", 78.5},
{2, "Andrej Chadamov", 98},
{3, "Dimitar Dameski", 89.4},
{4, "Antonio Stojoski", 50.3},
{5, "Leonardo Ivanoski", 80.5},
{6, "Leonardo Ivanoski", 100},
{7, "Stefan Joseski", 40.3},

};
vector<int>redenBroj;
vector<string>Ime;
vector<float>Bodovi;
cout<<"Ova e listata"<<endl;
vector<covek> c( ucenik.begin(), ucenik.end() );
for (const auto &a : c) {
cout << a.redenbroj << ". " << a.ime << " = " << a.bodovi << " poeni " << endl;
redenBroj.push_back(a.redenbroj);
Ime.push_back(a.ime);
Bodovi.push_back(a.bodovi);
}
cout<<"======================================="<<endl;
cout<<"Ova e sortirana lista:"<<endl;
covek c1;
c1.Print(redenBroj, Ime, Bodovi);


return 0;

}