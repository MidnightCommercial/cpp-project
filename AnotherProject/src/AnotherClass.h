#pragma once

#include <string>

class AnotherClass {

public:

	AnotherClass() = default;
	AnotherClass(const std::string& something);
	~AnotherClass() = default;

	const std::string& saySomething(){ return mSomething; }

private:

	std::string mSomething;

};