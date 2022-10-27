class Animal{

	public: 
		Animal(string _name, int age);
		Animal(); 	
		virtual void printInfo(){};
	protected:
                string name;
                int age;
};

class Zebra: public Animal{
	int numStripes;
	public:
	Zebra(string _name, int _age, int _numStripes);
	void printInfo(); };
class Cat: public Animal{
	string favoriteToy;
	public:
	Cat(string _name, int _age, string _favoriteToy);
	void printInfo(); }; 
