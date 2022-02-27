#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

#include "PC.cpp"

// Recall semua file yang telah dibuat

int main(){
	string namePros;
	string nameDisk;
	int price1, price2, price3;
    int capacity1, capacity2;
  	
  	cout << "((Masukan Data Processor :))" << endl;
    cout << "Merk: ";
    cin >> namePros;
    cout << "Harga: ";
    cin >> price1;
    cout << endl;

    cout << "((Masukan Data Disk :))" << endl;
    cout << "Type: ";
    cin >> nameDisk;
    cout << "Kapasitas(TB): ";
    cin >> capacity1;
    cout << "Harga: ";
    cin >> price2;
    cout << endl;

    cout << "((Masukan Data Ram :))" << endl;
    cout << "Kapasitas(GB):";
    cin >> capacity2;
    cout << "Harga: ";
    cin >> price3;
    cout << endl;

    // Input ke dalam objek masing masing
	processor core(namePros, price1); 
	Disk disk(nameDisk, capacity1, price2); 
	ram memori(capacity2, price3); 

	// Masukan ke dalam 1 komputer
	PC computer(core, disk, memori);

	// Print
	computer.print();

	return 0;
}