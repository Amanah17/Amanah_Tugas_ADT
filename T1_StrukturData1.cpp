Buatlah fungsi tambahan pada file jam.h dengan ketentuan sebagai berikut
Value changer procedure
void "....."()
Prosedur setJam, digunakan untuk meng-set nilai jam
Prosedur setMenit, digunakan untuk meng-set nilai menit
Prosedur setDetik, digunakan untuk meng-set nilai detik

Selector function
int "......."()
Fungsi getJam, mengembalikan nilai jam
Fungsi getMenit, mengembalikan nilai menit
Fungsi getDetik, mengembalikan nilai detik

Validator
Fungsi isValid, digunakan untuk mengecek apakah waktu yang diinputkan valid atau tidak dengan ketentuan sebagai berikut
Mengembalikan nilai true jika memenuhi ketentuan if 0 ≤ HH ≤ 23, and 0 ≤ MM ≤ 59, and 0 ≤ MM ≤59

void setJam(int input1,int input2, int input3){
  cout << input1 << ":" << input2 << ":" << input3 << endl;
};
