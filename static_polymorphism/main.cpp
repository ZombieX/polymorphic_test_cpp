

#include"CRTP.hpp"
#include"Inherit.hpp"




int main() {
	dynamic::parent p;
	dynamic::A a;
	dynamic::B b;
	

	print(p);
	print(a);
	print(b);


	static_::parent<> p2;
	static_::A a2;
	static_::B b2;

	print(p2);
	print(a2);
	print(b2);

	return 0;
}