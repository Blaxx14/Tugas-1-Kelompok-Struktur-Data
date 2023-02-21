#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Tugas 1 Kelompok Struktur Data"
         << endl
         << endl
         << "Kelompok 1"
         << endl
         << endl
         << "Anggota: "
         << endl
         << "1. Hadid Ramadhan"
         << endl
         << "2. Aisha Widya "
         << endl
         << "3. Fahri Pradana"
         << endl;

    cout << endl
         << endl
         << "Jawaban:\n\n";

    // program jawaban no 1
    int angka[5][2] = {{1, 2}, {4, 3}, {5, 10}, {9, 20}, {8, 2}};
    int angka2[5][2] = {{2, 3}, {8, 7}, {5, 10}, {5, 2}, {7, 9}};
    int jumlah[5][2];
    for (int a = 0; a < 5; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            jumlah[a][b] = angka[a][b] + angka2[a][b];
        }
    }
    cout << "1. Program:\n\nint angka[5][2] = {{1, 2}, {4, 3}, {5, 10}, {9, 20}, {8, 2}};\nint angka2[5][2] = {{2, 3}, {8, 7}, {5, 10}, {5, 2}, {7, 9}};"
         << endl
         << "int jumlah[5][2];\nfor (int a = 0; a < 5; a++)\n {\nfor (int b = 0; b < 2; b++)\n{\njumlah[a][b] = angka[a][b] + angka2[a][b];\n }\n}"
         << endl
         << endl
         << "Hasil: " << endl;

    for (int c = 0; c < 5; c++)
    {
        for (int d = 0; d < 2; d++)
        {
            cout << jumlah[c][d] << "\t";
        }

        cout << endl;
    }

    cout << endl
         << endl;

    // program jawaban no 2
    int jumlahAngka;
    cout << "2. Masukkan panjang array yang diinginkan: ";
    cin >> jumlahAngka;
    int simpan[jumlahAngka];
    for (int i = 0; i < jumlahAngka; i++)
    {
        cout << "Angka ke-" << (i + 1) << " : ";
        cin >> simpan[i];
    };

    int mulai = 0, simpan1, simpan2;

    for (int i = 0; i < jumlahAngka; i++)
    {
        for (int j = mulai; j < jumlahAngka; j++)
        {
            simpan1 = simpan[i];
            simpan2 = simpan[j];
            int penentu = simpan1 - simpan2;
            if (penentu == 0)
            {
                continue;
            }
            else if (penentu < 0)
            {
                simpan[i] = simpan2;
                simpan[j] = simpan1;
            }
            else if (penentu > 0)
            {
                simpan[i] = simpan1;
                simpan[j] = simpan2;
            }
        };

        mulai++;
    };

    cout << endl
         << endl
         << "Setelah diurutkan: "
         << endl;

    for (int a = 0; a < jumlahAngka; a++)
    {
        cout << simpan[a] << ' ,';
    }

    cout << endl
         << endl;

    // program jawaban ke 3
    cout << "3. Program mencari rata-rata nilai mahasiswa\n\n";
    int jmlh_mhs, jmlh_mk;
    float nilai;

    cout << endl
         << "================== Input Data Mahasiswa =================="
         << endl
         << endl
         << "Jumlah mahasiswa: ";
    cin >> jmlh_mhs;
    cout << "Jumlah mata kuliah: ";
    cin >> jmlh_mk;

    string nama_mhs[jmlh_mhs][2];
    cout << endl
         << endl;
    for (int nim = 0; nim < jmlh_mhs; nim++)
    {
        cout << (nim + 1) << ". Nama: ";
        cin >> nama_mhs[nim][0];
        int total = 0;
        for (int biji = 0; biji < jmlh_mk; biji++)
        {
            cout << "\tNilai mata kuliah ke-" << (biji + 1) << " : ";
            cin >> nilai;
            total += nilai;
        }

        float mean = total / jmlh_mk;
        nama_mhs[nim][1] = to_string(mean);
    }

    cout << endl
         << endl
         << "================== Data Rata-Rata Mahasiswa ==================\n\n";

    for (int a = 0; a < jmlh_mhs; a++)
    {
        cout << (a + 1) << ". Nama : " << nama_mhs[a][0]
             << endl
             << "\trata-rata : " << nama_mhs[a][1]
             << endl;
    }
    cout << "===============================================================";

    // program jawaban no 4
    cout << endl
         << endl
         << "4. Menghitung frekuensi karakter pada kalimat: "
         << endl
         << endl;
    char karakter[26];
    int frekuensi[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        karakter[i] = 'a' + i;
    }

    string masukin;
    cout << "Masukan kalimat: ";
    getline(cin >> ws, masukin);
    for (char nih : masukin)
    {
        for (int a = 0; a < 26; a++)
        {
            if (nih == karakter[a])
            {
                frekuensi[a]++;
                break;
            }
        }
    }

    cout << "Frekuensi kemunculan tiap karakter dalam kalimat:\n";
    for (char tolong : masukin)
    {
        for (int b = 0; b < 26; b++)
        {
            if (tolong == karakter[b] && karakter[b] != '0')
            {
                cout << tolong << " : " << frekuensi[b] << endl;
                karakter[b] = '0';
            }
            else
            {
                continue;
            }
        }
    }
}
