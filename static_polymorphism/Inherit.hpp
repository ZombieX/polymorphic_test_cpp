#pragma once
#include<iostream>

namespace dynamic {

	class parent {
	public:
		virtual void execute() const { std::cout << "parent\n"; }
		virtual ~parent() {}
	};

	class A final :public dynamic::parent {
	public:
		void execute()const { std::cout << "A\n"; }
	};

	class B final :public dynamic::parent {
	public:
		void execute()const { std::cout << "B\n"; }
	};
	void print(parent& p) { p.execute(); }
}
