#pragma once
#include<iostream>

namespace static_ {
	template<typename Child = std::nullptr_t>
	class parent {
	public:
		void interface() const {
			static_cast<const Child&>(*this).execute();
		}
		void execute()const {
			std::cout << "parent\n";
		}
		virtual ~parent() {}
	};
	template<>
	class parent<std::nullptr_t> {
	public:
		void interface() const {
			(*this).execute();
		}
		void execute()const {
			std::cout << "parent\n";
		}
		virtual ~parent() {}
	};
	class A final :public static_::parent<A> {
	public:
		void execute()const { std::cout << "A\n"; }
	};

	class B final :public static_::parent<B> {
	public:
		void execute()const { std::cout << "B\n"; }
	};
	template<typename T>
	void print(parent<T>& p) { p.interface(); }
}