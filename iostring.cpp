#include <iostream>
#include <sstream>

int main2()
{
	std::string str("rrrr");
	std::stringstream strStream(str);
	 
	int i = 0;
	strStream >> i;
	if(strStream.bad())
	{
		throw std::runtime_error("strStream is corrupted");
	}
	else if(strStream.fail())
	{
		strStream.clear();
		strStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "string format error" << std::endl;
	}else
	{
		std::cout << i << std::endl;
	}
	return 0;
}

int main3s()
{
	int srcI = 100;
	std::stringstream strStream;
	strStream << srcI << std::endl;
	if(strStream.bad())
	{
		throw std::runtime_error("strStream is corrupted");
	}else
	{
		std::cout << strStream.str() << std::endl;
	}
	return 0;
}

int main4()
{
	std::string srcString("hello world hello world");
	std::string destString;
	std::stringstream strStream(srcString);
	while(strStream>>destString)
	{
		std::cout << destString << std::endl;
	}
	if(strStream.bad())
	{
		throw std::runtime_error("strStream is corrupted");
	}

	return 0;
}