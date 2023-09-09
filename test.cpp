#include <iostream>

// class Test
// {
// 	public:
// 		std::string a;

// 	void	print(int	*okk)
// 	{
// 		int i = 0;

// 		while (i < 6)
// 		{
// 			std::cout << "hello my name is " << *okk << std::endl;
// 			i++;
// 			okk++;
// 		}
// 	}
// };

// int main()
// {
// 	Test ok;
// 	int os[] = {1,2,3,4,5,6};
// 	ok.print(os);
// }

// struct kk
// {
// 	int a;
// 	int b;
// 	int c;
// };

// void	print(kk &data)
// {
// 	std::cout << data.a << " " << data.b << " " << data.c << std::endl;
// }

// int main()
// {
// 	kk day;

// 	day.a = 1;
// 	day.b = 2;
// 	day.c = 3;

// 	day.c = 100;
// 	print(day);
// }

// class Test
// {
// 	private:
// 		int a;
// 		int b;
// 	public:
// 		void	set_val(int a_a, int b_b)
// 		{
// 			a = a_a;
// 			b = b_b;
// 		}

// 		int		get_val()
// 		{

// 		}
// 		void	print()
// 		{
// 			std::cout << a << " " << b << "\n";
// 		}
// };

// class Test_2
// {
// 	private:
// 		int c;
// 		int d;
// 	public:
// 		void	print()
// 		{
// 			std::cout << "hello world\n";
// 		}
// };

// int main()
// {
// 	Test test;
	
// 	test.set_val(0, 1);
// 	std::cout << test.get_val();
// 	return (0);
// }
// # include <cmath>

// class Cercle
// {
// 	private:
// 		double	radius;
// 	public:
// 		double	pi;
// 		void	set(double m_radius)
// 		{
// 			radius = m_radius;
// 		}

// 		double	c_area()
// 		{
// 			return (pow(radius, 2) * pi);
// 		}
// };

// int main()
// {
// 	Cercle c;

// 	c.pi = 3.14;
// 	c.set(5);
// 	std::cout << c.c_area() << std::endl;
// }

// class IntPair
// {
// 	private:
// 		int a;
// 		int b;
// 	public:
// 		IntPair::IntPair()
// 		{

// 		}

// 		IntPair::IntPair(int a)
// 		{

// 		}
		
// 		void	set(int a_a, int b_b)
// 		{
// 			a = a_a;
// 			b = b_b;
// 		}

// 		void	print()
// 		{
// 			std::cout << "Pair(" << a << ", " << b << ")\n";
// 		}
// };

// int main()
// {
// 	IntPair p1;
// 	p1.set(1, 1); // set p1 values to (1, 1)

// 	IntPair p2; // initialize p2 values to (2, 2)

// 	p2.a = 2;
// 	p2.b = 2;

// 	p1.print();
// 	p2.print();

// 	return 0;
// }

// class Test
// {
// 	private:
// 		int a;
// 		int b;
// 	public:
// 		Test()
// 		{
// 			a = 0;
// 			b = 1;
// 		}
		
// 		Test (int a_s, int b_s = 4)
// 		{
// 			a = a_s;
// 			b = b_s;
// 		}
// 		void	print()
// 		{
// 			std::cout << a << " / " << b << std::endl;
// 		}
// };

// int main()
// {
// 	Test test1;
// 	Test test2(5);


// 	test1.print();
// 	test2.print();
// }

// struct Foo {
//     int n;
//     Foo() {
//        std::cout << "Enter n: "; // no flush needed
//        std::cin >> n;
//     }
// };
// int main()
// {
// 	Foo f; // static object
//     std::cout << "f.n is " << f.n << '\n';
// }

// class OKOK
// {
//     public:
//         OKOK()
//         {
//             std::cout << "OKOK constractor called\n";
//         }
// };

// class Test
// {
//     private:
//         int a;
//         int b;
//         OKOK    reegl;
//     public:
//         Test(int aa, int bb);
//         int get_a()
//         {
//             return (a);
//         }
//         int get_b()
//         {
//             return (b);
//         }
// };

// Test::Test(int aa, int bb)
// {
//     std::cout << "Test constractor called\n";
//     a = aa;
//     b = bb;
// }

// int main()
// {
//     Test ok(5, 6);

//     std::cout << "a == " << ok.get_a() << " b == " << ok.get_b();
// }

// class Test
// {
//     private:
//         char o;
//         char *ok;
//         char *u;
//     // public:
//     //     void    print()
//     //     {
//     //         std::cout << "hello\n";
//     //     }
// };

// int main()
// {
//     printf("%zu\n",sizeof(Test));
// }

// class Test
// {
//     public:
//         int ok;
//         Test();
//         ~Test();
//         int foo();
// };

// Test::Test()
// {
//     std::cout << "constractir called\n";
//     ok = 5;
//     foo();
//     std:: cout << ok << std::endl;
// }

// Test::~Test()
// {
//     std::cout << "distractor called\n";
// }

// int Test::foo()
// {
//     std::cout << "foo called\n";
//     this->ok = 20;
//     return (0);
// }

// int main()
// {
//     Test ok;
//     return (0);
// }

// class Test
// {
//     private:
//         int _foo;
//     public:
//         Test();
//         ~Test();
//         void    set_foo();
//         int     get_foo();
// };

// Test::Test()
// {
//     std::cout << "default constarctor called\n";
//     set_foo();
//     std::cout << "this->getFoo() = " << get_foo() << std::endl;
// }
// void Test::set_foo()
// {
//     int ok;
//     std::cout << "set a value for foo: ";
//     std::cin >> ok;
//     if (ok >= 0)
//         _foo = ok;
// }

// int Test::get_foo()
// {
//     return (_foo);
// }
// Test::~Test()
// {
//     std::cout << "destractor called\n";
// }

// int main()
// {
//     Test ok;

//     ok.set_foo();
//     std::cout << "instance.getFoo() = " << ok.get_foo() << std::endl;
//     ok.set_foo();
// 	std::cout << "instance.getFoo() = " << ok.get_foo() << std::endl;
// }

// #include <iomanip>      // std::setw

// int main () {
//   std::cout << std::setw(10) << 77;
//   std::cout << std::setw(10) << 77;
//   return 0;
// }

// # include <ctime>

// std::string append_z(int i)
// {
//   if (i < 10)
//     return ("0");
//   return ("");
// }
// int main()
// {
//   time_t now = time(NULL);
//   std::tm *ok = std::localtime(&now);

//   std::cout << "[" << ok->tm_year + 1900;
//   std::cout << append_z(ok->tm_mon) << ok->tm_mon;
//   std::cout << append_z(ok->tm_mday) << ok->tm_mday;
//   std::cout << "_" << append_z(ok->tm_hour) << ok->tm_hour;
//   std::cout << append_z(ok->tm_min) << ok->tm_min;
//   std::cout << append_z(ok->tm_sec) << ok->tm_sec << "]" << std::endl;
// }

// class Test
// {
//   private:
//     std::string name;
//   public:
//     Test() : name("walid")
//     {
//         std::cout << "constr of " << name << " called" << std::endl;
//     }

//     ~Test()
//     {
//         std::cout << "destr of " << name << " called" << std::endl;
//     }
// };

// int main()
// {
//   Test *ok = new Test[3];
//   delete [] ok;
// }

// class Test
// {
//   int x,y,z;
// };

// int main()
// {
//     int *hvalue = new int;

//     std::cout << sizeof(hvalue) << std::endl;
// }


// class Test
// {
// 	private:
// 		std::string _name;
// 	public:
// 		Test(std::string const & name);
// 		~Test();
// };

// Test::Test(std::string const & name)
// {
// 	_name = name;
// 	std::cout << "const called" << std::endl;
// }

// Test::~Test(){}

// int main()
// {
// 	Test ok("walid");
// }


// void	fun(int &a)
// {
// 	int *b = NULL;

// 	*b = a;

// 	(*b)++;
// 	std::cout << a << std::endl;
// }

// int main()
// {
// 	int a = 5;

// 	fun(a);
// 	std::cout << a << std::endl;
// }

// class Test
// {
// 	public:
// 		int add(int a, int b)
// 		{
// 			return a + b;
// 		}
// };
// int main()
// {
// 	int (Test::*func_ptr)(int, int);

// 	func_ptr = &Test::add;
// 	Test a;
// 	std::cout << (a.*func_ptr)(3, 5) << std::endl;
// }


// class tr  
// {
// 	public:
// 		static int a;
// 		int b;
// };

// int tr::a = 0;

// int main()
// {
// 	tr r;
// 	tr rr;
// 	r.b = 10;
// 	r.a = 20;
// 	rr.a=65;
// 	std::cout << "value of r.a = " << r.a << std::endl;
// 	std::cout << "value of rr.a = " << rr.a << std::endl;
// 	std::cout << "value of r.b = " << r.b << std::endl;
// }


// class Base
// {
//    public:
//       const int b_id;
//       Base(int id = 0):b_id(id){}
//       int getId() const {return (b_id);}
// };

// class Derived : public Base
// {
//    public:
//       double m_cost;
//       Derived(double cost, const int id): m_cost(cost), Base(id){}
//       double getMcost() const {return (m_cost);}
// };

// int main()
// {
//    Derived a(1.5, 1);

//    std::cout << a.m_cost << " " << a.b_id << std::endl;
// }


// class Fruit
// {
//    private:
//       std::string name;
//       std::string color;
//    public:
//       Fruit(std::string n, std::string c): name(n),color(c){}
//       std::string getName() const {return (name);}
//       std::string getColor() const {return (color);}
// };

// class Apple : public Fruit
// {
//    private:
//       double fiber;
//    public:
//       Apple(std::string n, std::string c, double f):Fruit(n, c), fiber(f){}
//       double getFiber() const {return (fiber);}
// };

// class Banana : public Fruit
// {
//    public:
//       Banana(std::string n, std::string c): Fruit(n, c){}
// };

// std::ostream & operator<<(std::ostream & i, const Apple & obj)
// {
//    i << "Apple(" << obj.getName() << ", " << obj.getColor() << ", " << obj.getFiber() << ")";
//    return (i);
// }

// std::ostream & operator<<(std::ostream & i, const Banana & obj)
// {
//    i << "Apple(" << obj.getName() << ", " << obj.getColor() << ")";
//    return (i);
// }

// int main()
// {
// 	const Apple a("Red delicious", "red", 4.2);
// 	std::cout << a << '\n';

// 	const Banana b("Cavendish", "yellow");
// 	std::cout << b << '\n';

// 	return 0;
// }

// class E
// {
// 	public:
// 		int a;
// 		int b;
// 		E(){}
// 		E(int a,int b):a(a), b(b)
// 		{
// 			std::cout << "E" << std::endl;
// 		}
// 		void show()
// 		{
// 			std::cout << "ooo" << std::endl;
// 		}
// };

// class A : virtual public E
// {
// 	public:
// 		A(){}
// 		A(int a): E(a, 1)
// 		{
// 			std::cout << "A" << std::endl;
// 		}
// };

// class B : virtual public E
// {
// 	public:
// 		B(){}
// 		B(int a): E(a, 2)
// 		{
// 			std::cout << "B" << std::endl;
// 		}
// };

// class C : public A, public B
// {
// 	public:
// 		int a;
// 		C(int a): A(a), E(a * 10, 3), a(a)
// 		{
// 			std::cout << "C" << std::endl;
// 		}
// };


// int main()
// {
// 	C c(5);
// 	A a(2);
// 	std::cout << c.b << std::endl;
// 	std::cout << a.b << std::endl;
// }

// class E
// {
// public:
//     int a;
//     int b;
//     E()
// 	{
// 		std::cout << "base default " << std::endl;
// 	}
//     E(int a, int b): a(a), b(b)
//     {
// 		std::cout << "base " << std::endl;
//     }
//     void show()
//     {
//         std::cout << "ooo" << std::endl;
//     }
// };

// class B : virtual public E
// {
// public:
//     B()
// 	{
// 		std::cout << "B default " << this << std::endl;
// 	}
//     B(int a): E(a, 2)
//     {
// 		std::cout << "B " << this << std::endl;
//         // std::cout << "B " << a << " " << b << std::endl;
//     }
// };

// class A : virtual public E
// {
// public:
//     A()
// 	{
// 		std::cout << "A default " << std::endl;
// 	}
//     A(int a): E(a, 3)
//     {
// 		std::cout << "A " << std::endl;
//         // std::cout << "A " << a << " " << b<< std::endl;
//     }
// };

// class C : public A, public B
// {
// public:
//     // int a;
//     C(int a): A(a), B(a)
//     {
//         std::cout << "C" << std::endl;
//     }
// };

// int main()
// {
//     C c(5);
//     std::cout << c.a << std::endl;
//     std::cout << c.b << std::endl;
// }


// class A
// {
//     public:
//         std::string a;
//         A():a("Animal"){}
//         A(std::string a):a(a){}

//         std::string show()
//         {
//             return ("base");
//         }
//         std::string getName()
//         {
//             return (a);
//         }
//         virtual void me()
//         {
//             std::cout << "A" << std::endl;
//         }
// };

// class B : public A
// {
//     public:
//         B():A("B"){}
//         B(std::string name):A(name){}
//         virtual void me()
//         {
//             std::cout << "B" << std::endl;
//         }
// };

// class C : public A
// {
//     public:
//         C():A("C"){}
//         C(std::string name):A(name){}
//         virtual void me()
//         {
//             std::cout << "C" << std::endl;
//         }
// };

// int main()
// {
//     A *a = new A;
//     // std::cout << a->show() << " " << a->getName() << std::endl;
//     a->me();

//     A *q = new B;
//     // A *q(&a);
//     // std::cout << q->show() << " " << q->getName() << std::endl;
//     q->me();
    
//     // A &r(a);
//     A *w = new C;
//     w->me();
//     // std::cout << w->show() << " " << w->getName() << std::endl;


// }

// class Animal
// {
//     public:
// 		int a;
//         Animal(){}
//         Animal(int a){a = a;}
//         virtual void sound()
//         {
//             std::cout << "mooo" << std::endl;
//         }
// 		Animal & operator=(const Animal & obj)
// 		{
// 			this->a = obj.a;
// 			return (*this);
// 		}
// };

// class Dog : public Animal
// {
//     public:
//         Dog(){}
//         void sound()
//         {
//             std::cout << "hawhaw" << std::endl;
//         }
// };

// int main()
// {
//     Animal *a = new Dog;
//     a->sound();
// }


// class Base
// {
// 	protected:
// 		int m_value;

// 	public:
// 		Base(int value): m_value(value){}

// 		std::string_view getName() const { return "Base"; }
// 		int getValue() const { return m_value; }
// };

// class Derived: public Base
// {
// 	public:
// 		Derived(int value): Base(value){}

// 		std::string_view getName() const { return "Derived"; }
// 		int getValueDoubled() const { return m_value * 2; }
// };


// int main()
// {
//     Derived derived( 5 );
//     std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';

//     Derived& rDerived( derived );
//     std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';

//     Derived* pDerived( &derived );
//     std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

//     return 0;
// }

// int main()
// {
//     Derived derived( 5 );

//     // These are both legal!
//     Base& rBase(derived);
//     Base* pBase(&derived);

//     std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';
//     std::cout << "rBase is a " << rBase.getName() << " and has value " << rBase.getValue() << '\n';
//     std::cout << "pBase is a " << pBase->getName() << " and has value " << pBase->getValue() << '\n';

//     return 0;
// }

// int main()
// {
// 	Derived derived(5);
// 	Base* base(&derived);
	
// 	std::cout << "base is a " << base->getName() << " and has value " << base->getValue() << std::endl;
// }
// #include <array>

// int main()
// {
// 	Animal a(0);
// 	Animal aa(1);
// 	Animal aaa(2);
// 	Animal aaaa(3);

// 	Animal *animals[] = {&a,&aa,&aaa,&aaaa};
// 	for (const auto animal:animals)
// 	{
// 		std::cout << animal->a << std::endl;
// 	}
// }

// class A
// {
// public:
// 	virtual std::string_view getName() { return "A"; }
// };

// class B : public A
// {
// public:
// 	// note use of final specifier on following line -- that makes this function no longer overridable
// 	std::string_view getName() override final { return "B"; } // okay, overrides A::getName()
// };

// class C : public B
// {
// public:
// 	std::string_view getName() override { return "C"; } // compile error: overrides B::getName(), which is final
// };

// int main()
// {
// 	B c;

// 	A *a = &c;

// 	std::cout << a->getName() << std::endl;
// }

// class A
// {
// 	public:
// 		virtual A *getThis() { std::cout << "called this A" << std::endl; return this; }
// 		void show() { std::cout << "A" << std::endl; }
// };

// class B : public A
// {
// 	public:
// 		B *getThis() { std::cout << "called this B" << std::endl; return this; }
// 		void show() { std::cout << "B" << std::endl; }
// };

// int main()
// {
// 	B b;

// 	A *a(&b);
// 	b.getThis()->show();
// 	a->getThis()->show();
	
// }

// class Base
// {
// 	public:
// 	    virtual ~Base() // note: not virtual
// 	    {
// 	        std::cout << "Calling ~Base()\n";
// 	    }
// };

// class Derived: public Base
// {
// 	private:
// 	    int* m_array;

// 	public:
// 	    Derived(int length) : m_array(new int[length])
// 	    {
// 	    }

// 	    virtual ~Derived() // note: not virtual (your compiler may warn you about this)
// 	    {
// 	        std::cout << "Calling ~Derived()\n";
// 	        delete[] m_array;
// 	    }
// };

// int main()
// {
//     Derived* derived = new Derived(5);
//     Base* base ( derived );

//     delete base;

//     return 0;
// }

// class A
// {
// 	public:
// 		virtual void ok1()
// 		{
// 			std::cout << "A::ok1()" << std::endl;
// 		}
// 		virtual void ok2()
// 		{
// 			std::cout << "A::ok2()" << std::endl;
// 		}
// };

// class B : public A
// {
// 	public:
// 		void ok1()
// 		{
// 			std::cout << "B::ok1()" << std::endl;
// 		}
// };

// class C : public B
// {
// 	public:
// 		void ok2()
// 		{
// 			std::cout << "C::ok2()" << std::endl;
// 		}
// };
// int main()
// {
// 	C a;

// 	a.ok1();
// }

class A
{
	public:
		virtual int getValue() = 0;
};

class B : public A
{
	public:
		int getValue(){return 7;}
};

int main()
{
	A b;

	std::cout << b.getValue() << std::endl;

}