#ifndef INHERIT_HPP
# define INHERIT_HPP

class Base
{
	public:
		virtual	~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C :public Base
{
};
#endif
