#include <iostream>

class Q
{
	private:
		int value;

	public:

		Q()
			:
			value(42)
		{
			std::cout << "Default constructor" << std::endl;
		}

		//Q(const Q&) = delete;		This would stop the copy
		// Or using something like boosts' noncopyable:
		// https://www.boost.org/doc/libs/1_68_0/libs/core/doc/html/core/noncopyable.html

		Q(const int& p_Value)
			:
			value(p_Value)
		{
			std::cout << "Custom Constructor" << std::endl;
		}

		void Print()
		{
			std::cout << value << std::endl;
		}
};

int main()
{
	Q q;
	q.Print();

	Q qq = q;
	qq.Print();

	Q qqq(999);
	qqq.Print();

	Q qqqq = qqq;
	qqqq.Print();
}