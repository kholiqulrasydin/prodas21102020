/* Much Kholiqul Rosidin */
/* NIM 20051397058 */
/* 2020B */


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int jumlahsuku;
    string pager = "===========================================================";

    cout <<pager<<endl<<pager<<endl;
    cout << "Menghitung Jumlah 6 Suku Pertama" << endl <<"dari barisan ";

    for(int i = 1; i <= 10; i++){
        if(i<10){
            cout << i <<"^3, ";
        }
        if(i<7){
        jumlahsuku += pow(3, i);
        }
        if(i==10){
            cout << i <<"^3 "<<endl;
            cout<<endl<<"Jumlah 6 suku pertama Adalah "<<jumlahsuku<<endl;
        }
    }


    cout << endl << endl << pager << endl;
    cout << pager << endl;
    cout << "menghitung jumlah dari deret " ;

    int jumlahderet = 0;

    for(int i=3; i<=15; i+=4){
        jumlahderet += i;
        if(i<15){
            cout << i << ", ";
        }
        if(i==15){
            cout << i << endl;
        }
    }

    cout << "jumlah deret = " << jumlahderet << endl << pager << endl << endl;
    cout << endl << pager << endl << pager << endl << "membuat tabel perkalian" << endl << pager << endl;


    int h;
    int n = 10;


    for(int b = 0; b <= n; b++){

            if(b == 0){
                for(int i = 0; i <= n; i++){
                        if(i==0){
                            cout<<"     ";
                        }
                    if(i>0){
                        cout << i;
                        cout<<"    ";
                    }
                }
            }

            for(int k = 0; k <= n; k++){
                    h = b*k;
                    int tr = trunc(log10(h))+1;
                    if(k == 0){
                        if(b != 0){
                            cout << b;
                        }
                        cout<<"    ";
                    }
                    if (h > 0 ){
                        cout << h;
                        if(tr == 1){
                            cout<<"    ";
                        }
                        if(tr == 2){
                            cout<<"   ";
                        }
                        if(tr == 3){
                            cout<<"  ";
                        }
                    }

            }
            cout << endl << endl;

    }

    cout << endl << endl << pager << endl;
    cout << pager << endl;
    cout << "Membuat Tampilan segitiga angka " << endl;
    cout << endl;
    int angka;

    cout << "Masukkan angka : "; cin >> angka;

    for (int i=1; i<=angka;i++){
        for(int l=1; l<=i; l++){
            cout<<l;
        }
        cout<<endl;
    }
    for (int i=angka-1; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;

}
