#include "Error.h"

void Error::addError(string str)
{
	this->errorResult.push_back("Error:" + str);
}

Error& Error::Get()
{
	static Error e;
	return e;
}

void Error::AddError(string str)
{
	Get().addError(str);
}

void Error::ClearError()
{
	Get().errorResult = vector<string>();
}

const vector<string>& Error::getError()
{
	return Get().errorResult;
}
