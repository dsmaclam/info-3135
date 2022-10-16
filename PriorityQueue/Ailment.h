#pragma once

#include <string>

class Ailment
{
protected:
	std::string name;
	int sev;
	int time;
	int cont;
public:
	Ailment(const std::string& name, const int sev, const int time, const int cont);

	std::string get_name() const
	{
		return name;
	}

	int get_severity() const
	{
		return sev;
	}

	int get_time_sensitivity() const
	{
		return time;
	}

	int get_contagiousness() const
	{
		return cont;
	}
};
