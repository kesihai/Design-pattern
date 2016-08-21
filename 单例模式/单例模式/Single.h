#pragma once
#include <string>
using namespace std;

#ifndef SINGLE_H_
#define SINGLE_H_

class Single
{
private:
	Single();
	static Single* cur;
public:
	static Single * GetInstance();
	string ans;
	~Single();
};

#endif
