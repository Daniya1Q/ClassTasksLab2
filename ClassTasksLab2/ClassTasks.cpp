
#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void makeSound() const = 0;
};


class Lion :
    public Animal
{
public:
    void makeSound() const override {
        cout << "Roaring...." << endl;
    }
};


class Elephant : public Animal
{
public:
    void makeSound() const override {
        cout << "Hathi Mera Sathi " << endl;
    }
};

class Monkey : public Animal
{
public:
    void makeSound() const override {
        cout << "Ohh Ohh Ahh Ahh..." << endl;
    }
};


class Bird :
    public Animal
{
public:
    void makeSound() const override {
        cout << "Chirping..." << endl;
    }
};


void hearSound(Animal& Animal) {
    Animal.makeSound();
}

int main() {
    Lion Simba;
    Monkey Boots;
    Elephant Ele;
    Bird Eagl;

    cout << "Lion raors: ";
    Simba.makeSound();

    cout << "Boots screaming: ";
    Boots.makeSound();

    cout << "Elephant trumpeting: ";
    Ele.makeSound();

    cout << "Bird chirp: ";
    Eagl.makeSound();

    cout << endl << endl;

    hearSound(Simba);
    hearSound(Boots);
    hearSound(Eagl);
    hearSound(Ele);
    return 0;
}
