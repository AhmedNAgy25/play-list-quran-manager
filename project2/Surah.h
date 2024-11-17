//adding relative pass for surah
//add functionality sound
#pragma once
#include <iostream>
using namespace std;
class Surah
{
private:
	string surahName;
	string type;
	Surah* next;
	Surah* previous;
	//path
public:
	Surah() {
		surahName = " ";
		type = " ";
		next = nullptr;
		previous = nullptr;
	}
	Surah(string sn, string t) {
		surahName = sn;
		type = t;
		next = nullptr;
		previous = nullptr;
	}
	void setSurahName(string sn) {
		surahName = sn;
	}
	void setSurahType(string sn) {
		surahName = sn;
	}

	string getSurahName() {
		return surahName;
	}

	string getSurahName() {
		return surahName;
	}

	void display() {
		cout << "surah Name"<<surahName<< endl;
		cout << "surah Type"<<type<< endl;
		//fn():play path path
	}
};

