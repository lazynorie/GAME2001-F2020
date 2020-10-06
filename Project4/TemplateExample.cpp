//Generic Classes or functions
//Compare two numbers, Return smallest. Return largest
#include <iostream>
using namespace std;

//check 2 "things" return the smallest
template <class T>
T min_func(T lVal, T rVal)
{
	if (lVal > rVal)
	{
		return rVal;
	}

	return lVal;
}

//check 2 things return the lasrgest 
template<class T>
T max_func(T lVal, T rVal)
{
	if (lVal>rVal)
	{
		return lVal;
	}

	return rVal;
}

//Implement a template class here
template <class T>
class TemplateClass
{
public:
	TemplateClass(T val)
	{
		m_val = val;
	}
	//MISSING SOMETHING HERE! overloading operator
	bool operator<(TemplateClass& rVal)
	{
		return m_val < rVal.GetVal();
	}
	bool operator>(TemplateClass& rVal)
	{
		return m_val > rVal.GetVal();
	}

	T GetVal()
	{
		return m_val;
	}

private:
	T m_val;
};
//Main

int main()
{
	cout << "Template Example" << endl << endl;
	cout << "Min =" << min_func('c', 'd') << endl;
	cout << "Max =" << max_func(56.1, 43.6) << endl;

	//Create 2 "TemplateClass" objects and compare them
	cout << "Max (objects) =" << max_func(TemplateClass<int>(7), TemplateClass<int>(4)).GetVal();
	return 0;
}
