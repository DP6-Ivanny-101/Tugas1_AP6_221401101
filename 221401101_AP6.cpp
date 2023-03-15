#include <stdio.h>
#include <string>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){

    system("CLS");
    int a,b,c;
    bool d;

    cout << "Masukkan Nilai A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;

    cout <<"\n";
    cout <<"-----Operator Aritmatika-----" << endl;
    cout <<"\n";
    c = a + b; //pertambahan
    cout <<"Untuk A + B     : "<< c << endl;

    c = a - b; //pengurangan
    cout <<"Untuk A - B     : "<< c << endl;

    c = a * b; //perkalian
    cout <<"Untuk A * B     : "<< c << endl;

    c = a / b; //pembagian
    cout <<"Untuk A / B     : "<< c << endl;

    c = a % b ; //sisa pembagian atau mod
    cout <<"Untuk A mod B   : "<< c << endl;
    
    cout <<"\n";
    cout <<"------Operator Bitwise-------" << endl;
    cout <<"\n";
    c = a & b; //AND
    cout <<"Untuk A AND B   : "<< c << endl;

    c = a | b; //OR
    cout <<"Untuk A OR B    : " << c << endl;

    c = a << 1; //SHL
    cout <<"Untuk A SHL B   : " << c << endl;

    c = b >> 1; //SHR
    cout <<"Untuk A SHR B   : " << c << endl;
    
    cout <<"\n";
    cout <<"-----Operator Pembanding-----" << endl;
    cout <<"\n";
    d = a > b; //lebih besar dari
    cout <<"Untuk A > B     : " << d << endl;
    
    d = a < b; //lebih kecil dari 
    cout <<"Untuk A < B     : " << d << endl;

    d = a >= b; //lebih besar sama dengan
    cout <<"Untuk A >= B    : " << d << endl;

    d = a <= b; //lebih besar sama dengan
    cout <<"Untuk A <= B    : " << d << endl;
    
    d = a == b; //sama dengan
    cout <<"Untuk A == B    : " << d << endl;

}