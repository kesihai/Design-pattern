#pragma once
class Status;
class Work
{
public:
	Work();
	~Work();
	void Set_Status(Status* cur);
	void Work_Hard();
public:
	int hour;
private:
	Status* cur_status;
};

