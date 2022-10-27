using namespace std; 
class Animal {
  public:
    Animal();
    Animal(string name, int age);
  protected:
    string name;
    int age;

};

class Zebra : public Animal {
  public:
    Zebra();
    Zebra(string name, int age, int numStripes);
    void printZebra();
  private:
    int numStripes;
};
