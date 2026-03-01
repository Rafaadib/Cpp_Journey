
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

enum level {
	low,
	medium,
	high

};


//typedef /using keyword

using age = int;
using pointer = int*;
typedef int arr[6];
//or 
using arr = int[6];


int main() {

	age myage = 18;

	int x = 27;
	pointer ptr = &x;

	arr numberi = { 2,4,6,8,10,12, };
	for (int i = 0; i < 6; i++) {
		std::cout << numberi[i] << std::endl;
	}

	std::cout << myage << std::endl;

	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;

	std::cout << "it is an apple!";
	std::cout << "Hello World!" << "\n";

	int num = 7;
	std::cout << num;

	int x = 5, y = 8, z = 10;
	std::cout << x + y + z;

	int x, y, z;
	x = y = z = 23;

	std::cout << x + y + z;

	const int year = 2024;
	std::cout << year;

	int age = 25;
	double salary = 55.99;
	char grade = 'A';

	std::cout << "age employe is  " << age << " years ago " << std::endl;
	std::cout << "she has salary per hour is $ " << salary << std::endl;
	std::cout << "she grade is awesome,she grade is " << grade;

	int length = 27;
	int large = 25;
	int sum;

	sum = length * large;

	std::cout << " so the area of the rectangle it is " << sum;

	int r = 27;
	float phi = 3.14;
	int sumcircle;

	sumcircle = phi * r * r;

	std::cout << "so area of the circle it is " << sumcircle;

	int D = 25;
	float phi = 3.14;
	int aroundcircle;

	aroundcircle = phi * D;

	std::cout << "around circle it is " << aroundcircle;

	int test;
	std::cout << "input your number = ";
	std::cin >> test;
	std::cout << "your number is =  " << test;

	int a, b;
	int sum;

	std::cout << "ketikan panjang =  ";
	std::cin >> a;
	std::cout << "ketikan lebar =  ";
	std::cin >> b;

	sum = a * b;

	std::cout << "hasil =  " << sum << " m";

	float a = 35e3;
	double b = 45E4;

	std::cout << a << std::endl;
	std::cout << b;

	bool x = true;
	bool y = false;

	std::cout << x << std::endl;
	std::cout << y;

	char a = 'B';
	std::cout << a;

	std::string character = "Mulan";
	std::cout << character;

	int crabbypatties = 0;
	double cost = 1.99;
	double sum;
	char currency = '$';

	std::cout << "order you patties = ";
	std::cin >> crabbypatties;
	sum = crabbypatties * cost;

	std::cout << "total cost it is = " << currency << sum << std::endl;

	int crabbycoral = 0;
	double price = 2.98;
	double result;
	double end;

	std::cout << "order crabbycoral = ";
	std::cin >> crabbycoral;
	result = crabbycoral * price;
	std::cout << "total price is = " << currency << result << std::endl << std::endl;
	end = sum + result;
	std::cout << "so both is = " << currency << end;

	std::string firstname = "polar";
	firstname.append("game");

	std::cout << firstname;

	std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::cout << "your result is = " << alphabet.length();

	/*
		==  : sama dengan
		!   : tidak sama dengan
		>   : lebih besar
		<	: lebih kecil
		>=	: lebih dari atau sama dengan
		<=	: kurang dari atau sama dengan
	*/

	std::string greeter = " nihao "; //menyapa dalam bahasa mandarin
	std::cout << greeter[1];

	std::string mystring = " abundance ";
	std::cout << mystring[mystring.length() - 1];
	// output e

	std::string fruit = "apple";
	fruit[fruit.length() - 1];


	// at function

	std::string name = "chamelleon";
	std::cout << name;

	std::cout << name.at(0);
	std::cout << name.at(3);
	std::cout << name.at(name.length() - 2);

	name.at(3) = 'l';
	std::cout << name;

	std::string humanname;

	std::cout << "input your name : ";
	std::cin >> humanname;
	std::cout << "your name is : " << humanname;

	std::string fullname;

	std::cout << "your name : ";
	getline(std::cin, fullname);
	std::cout << "your full name is : " << fullname;

	std::string sayhello1 = "hello";	// regular string
	char sayhello2[] = "hello to ";	//c style 

	//math

	std::cout << std::max(20, 30);
	//output is 30 
	std::cout << std::min(20, 30);
	//output is 20 

	//sqrt() / akar kuadrat
	double root = 16.0;
	double result = std::sqrt(root);

	std::cout << "square root from " << root << "is a" << result << std::endl;

	//round()
	double number1 = 25.3;
	double number2 = 26.6;

	std::cout << "round(25.3) is it = " << std::round(number1) << std::endl; //25
	std::cout << "round(26.6) is it = " << std::round(number2) << std::endl; //27

	//log()

	double value = 20.0;
	double finish = std::log(value);

	std::cout << "your log is = " << finish << std::endl;

	//boolean

	bool right = true;
	bool left = false;

	std::cout << right;
	std::cout << left;

	int age = 25;
	int age2 = 27;

	std::cout << (age <= age2); //true
	std::cout << (age == age2); // false

	std::cout << std::endl;

	std::string name;
	std::string country;
	std::string email;
	std::string job;
	int age;

	std::cout << " please enter your name : ";
	std::cin >> name;
	std::cout << " your country : ";
	std::cin >> country;
	std::cout << " confirm your email : ";
	std::cin >> email;
	std::cout << " enter your job : ";
	std::cin >> job;
	std::cout << " enter your age : ";
	std::cin >> age;

	std::cout << std::endl;

	std::cout << " your name is : " << name << std::endl;
	std::cout << " you  from : " << country << std::endl;
	std::cout << " your email is : " << email << std::endl;
	std::cout << " your job : " << job << std::endl;
	std::cout << " your age : " << age << std::endl << std::endl;

	int value = 75;
	int value1 = 89;

	if (value >= value1) {

		std::cout << " yeah you right";
	}
	else {
		std::cout << " you wrong ";

	}

	int time = 21;

	if (time > 15) {
		std::cout << "good day";
	}
	else {
		std::cout << " good evening";
	}

	//tenary operator

	int time = 20;
	std::string result = (time < 18) ? "Good day." : "Good evening.";
	std::cout << result;

	double number = 2.0;
	double exponent = 5.0;
	double result = pow(number, exponent);

	std::cout << "so this final result is : " << result;
	// 32

	//swich

	int day;

	std::cout << " input your day : ";
	std::cin >> day;
	std::cout << std::endl;

	switch (day) {
	case 1:
		std::cout << " Sunday ";
		break;

	case 2:
		std::cout << " Monday ";
		break;

	case 3:
		std::cout << " Tuesday ";
		break;

	case 4:
		std::cout << " Wednesday";
		break;

	case 5:
		std::cout << " Thursday ";
		break;

	case 6:
		std::cout << " Friday ";
		break;

	case 7:
		std::cout << " Saturday ";
		break;

	default:
		std::cout << " have nice day :) ";
	}


	//while loop 

	int a = 0;

	while (a <= 10) {
		std::cout << a << std::endl;
		a++;
	}

	int alfa = 0;
	int n;

	//if you don't use a++ your code will never end 

	std::cout << " input your number : ";
	std::cin >> n;
	std::cout << std::endl;

	while (alfa <= n) {
		std::cout << alfa << std::endl;
		alfa++;
	}

	//do/while loop

	int alfa = 0;
	int n;

	std::cout << " input your number : ";
	std::cin >> n;
	std::cout << std::endl;

	do {
		std::cout << alfa << std::endl;
		alfa++;

	} while (alfa <= n);

	//for loop

	/*	Statement 1 is executed (one time) before the execution of the code block.

		Statement 2 defines the condition for executing the code block.

		Statement 3 is executed (every time) after the code block has been executed.*/

	for (int up = 0; up <= 25; up++) {

		std::cout << up;
	}

	//nestetd loop

	for (int up = 0; up <= 28; up++) {
		std::cout << up << std::endl;

		for (int down = 0; down <= 30; down++)
			std::cout << down << std::endl;

	}

	int numb = 2;
	int i;

	for (i = 1; i <= 10; i++) {
		for (i = 1; i <= 10; i++) {
			std::cout << numb * 1 << std::endl;
			//output is 2,4,6,8,10,12,14,16,18,20 	

		}

		//break/continue

		for (int f = 0; 0 <= 28; f++) {
			if (f == 25) {
				break; //continue 
			}
			std::cout << " number " << f << std::endl;

		}

		int g = 1;

		while (g <= 25) {
			if (g == 10) {
				g++;
				continue;
			}
			std::cout << g << std::endl;
			g++;
		}

		//arrays

		std::string fruit[5] = { "banana","apple","dragonfruit","grape","cerry" };
		std::cout << fruit[2] << std::endl;

		//with for loop 

		std::string fruit[5] = { "banana","apple","dragonfruit","grape","cerry" };

		for (int j = 0; j < 5; j++) {

			std::cout << fruit[j] << std::endl;


		}

		//example vector 

		/*

		push_back(value): Menambahkan value ke akhir vector.
		pop_back(): Menghapus elemen terakhir.
		size(): Mengembalikan jumlah elemen dalam vector.
		empty(): Mengecek apakah vector kosong atau tidak.
		clear(): Menghapus semua elemen dalam vector.
		at(index): Mengakses elemen pada posisi index dengan pengecekan batas.

		*/

		std::vector<std::string> motocycle = { "honda","vario","mio","scoopy","yamaha" };

		motocycle.push_back("ducati");

		for (std::string moto : motocycle) {

			std::cout << moto << std::endl;
		}


		// int.pop_back 

		std::vector<int> co = { 5,10,15,20,25,30,35 };

		co.pop_back();

		for (int y : co) {

			std::cout << y << std::endl;
		}

		//loop through,sizeof() 


		int nm[8] = { 5,10,15,20,25,30.35,40 };

		for (int n = 0; n < sizeof(nm) / sizeof(nm[0]); n++) {
			std::cout << nm[n] << std::endl;

		}

		//jumlah array

		int ar[5] = { 20,40,60,80,100 };
		int s = 0;

		for (int sm = 0; sm < 5; sm++) {
			s += ar[sm];
		}

		std::cout << "jumlah : " << s << std::endl;

		//nilai ternedah 

		int array[8] = { 10,5,15,3,25,30,35,40 };

		int low = array[0];

		for (int ar : array) {
			if (low > ar) { //jika nilai terbesar (>)
				low = ar;
			}

		}
		std::cout << low << std::endl;
		//output 3


		//structure

		struct {
			int age;
			std::string name;
			std::string skill;
			std::string from;
		}introduce;

		introduce.age = 18;
		introduce.name = "zilong";
		introduce.skill = "3d modeling";
		introduce.from = "china";

		std::cout << "my name is " << introduce.name << " i am " << introduce.age << " years ago " << "and i am a " << introduce.skill << " from " << introduce.from << std::endl;

		//enum

		enum level vr = medium;
		std::cout << vr;

		//memori address

		std::string tree = "palmtree";
		std::string& florest = tree;

		std::cout << tree;
		std::cout << florest;

		std::string tree = "palmtree";

		std::cout << &tree; // output is 000000E4ADCFF708

		//pointer

		std::string fastfood = "hamburger";
		std::string* ptr = &fastfood;

		std::cout << fastfood << std::endl;		//hamburger
		std::cout << &fastfood << std::endl;	//0000008AA10FF808
		std::cout << ptr << std::endl;			//0000008AA10FF808

		//dereference

		std::cout << *ptr << std::endl;			//hamburger

		//modify pointer

		*ptr = "potatofrice";

		std::cout << *ptr << std::endl;			//potatofrice
		std::cout << fastfood << std::endl;		//potaotfrice
		std::cout << &fastfood;					// 0000008AA10FF808


		return 0;


	}