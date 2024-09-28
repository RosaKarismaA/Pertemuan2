#include <iostream>

using namespace std;
    string nama;
    string nim;
    int usia;

int main()
{
    cout<<"Masukkan Nama :";
    cin>>nama;
    cout<<"Masukkan NIM  :";
    cin>>nim;
    cout<<"Masukkan Usia :";
    cin>>usia;

    cout<<endl;

    cout<<"Nama Anda :"<<nama<<endl;
    cout<<"NIM Anda  :"<<nim<<endl;
    cout<<"Usia Anda :"<<usia<<endl;

    cout<<endl;

    cout<<"For :"<<endl;
    for(int i=0;i<usia;i++) {
        cout<<nama<<endl;
    }

    cout<<endl;

    cout<<"While :"<<endl;
    int i=0;
    while (i<usia) {
        cout<<nama<<endl;
        i++;
    }

    return 0;
}
