#pragma once
#include <iostream>
#include"surah.h"
using namespace std;
class PL
{
private:
	Surah* surah;
	string shName;
	Surah* head;
	Surah* tail;
public:
	PL() {
		surah = nullptr;
		head = nullptr;
		tail = nullptr;
	}

	PL(const string& surahName, const string& type, const string& path ,const string& shName) {
		surah = new Surah(surahName,type);
		head = nullptr;
		tail = nullptr;
		this-> shName = shName;
	}
};

