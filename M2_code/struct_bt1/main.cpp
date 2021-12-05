#include <bits/stdc++.h>

using namespace std;

struct danh_sach{
    int stt;
    string name;
    string birthday;
    float toan;
    float li;
    float hoa;
    char xep_loai;
};

int main()
{
    int n;
    cin >> n;
    danh_sach ds[n];
    for(int i = 0; i < n; i++){
        cin >> ds[i].stt;
        cin.ignore();
        getline(cin, ds[i].name);
        cin.ignore();
        getline(cin, ds[i].birthday);
        cin >> ds[i].toan;
        cin >> ds[i].li;
        cin >> ds[i].hoa;
        float tong = ds[i].toan + ds[i].li + ds[i].hoa;
        if(tong >= 24) ds[i].xep_loai = 'A';
        else if(tong >= 19.5) ds[i].xep_loai = 'B';
        else if(tong >= 15)ds[i].xep_loai = 'C';
        else ds[i].xep_loai = 'D';
    }

    freopen("DATA.OUT", "w", stdout);
    cout << setw(5) << left << "STT" << setw(30) << left << "NAME" << setw(15) << left << "NGAY SINH" << setw(5) << right << "TOAN" << setw(4) << right << "LI" << setw(4) << right << "HOA" << setw(3) << right << "XL" << endl;

    for(int i = 0; i < n; i++){
        cout << setw(5) << left << ds[i].stt << setw(30) << left << ds[i].name << setw(15) << left << ds[i].birthday << setw(5) << right << ds[i].toan << setw(4) << right << ds[i].li << setw(4) << right << ds[i].hoa << setw(3) << right << ds[i].xep_loai << endl;
    }
}
