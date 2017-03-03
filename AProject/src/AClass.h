#pragma once

#include <string>

class AClass {

public:

	AClass() = default;
	AClass(const std::string& something);
	~AClass() = default;

	const std::string& saySomething(){ return mSomething; }

private:

	std::string mSomething;

};