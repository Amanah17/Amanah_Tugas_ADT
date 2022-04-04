#include <iostream>

using namespace std;

struct Clock {
    int jam;
    int menit;
    int detik;
};

int getJam(int jam){
    return jam;
};

int getMenit(int menit){
    return menit;
};
int getDetik(int detik){
    return detik;
};

int main()
{
    Clock setJam;
    Clock setMenit;
    Clock setDetik;

cout << "Masukan jam :";
    cin >>setJam.jam;
    int hh = getJam(setJam.jam);

cout << "Masukan menit :";
    cin >> setMenit.menit;
    int jj = getMenit(setMenit.menit);

cout << "Masukan detik :";
    cin >> setDetik.detik;
    int dd = getDetik(setDetik.detik);

if (hh <= 23 && jj <= 59 && dd <= 59){
    cout << "Waktu->"<<hh<<":"<<jj<<":"<<dd;
}else{
    cout << "Waktu Salah";
}
return 0;
};

