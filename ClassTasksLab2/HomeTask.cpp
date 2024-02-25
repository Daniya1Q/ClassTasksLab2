#include<iostream>
using namespace std;
class Plant
{
public:
    virtual void grow() = 0;
    virtual void displayHeight() const = 0;
};

class Flower :
    public Plant
{
private:
    double height;
    double growthRate;
public:
    Flower(double initialHeight) : height(initialHeight), growthRate(0.5) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Flower height: " << height << " cm" << endl;
    }
};


class Tree :
    public Plant
{
private:
    double height;
    double growthRate;
public:
    Tree(double initialHeight) : height(initialHeight), growthRate(0.2) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Tree height: " << height << " cm" << endl;
    }
};


class Bush :
    public Plant
{
private:
    double height;
    double growthRate;
public:
    Bush(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Bush height: " << height << " cm" << endl;
    }
};


int main() {

    Flower flower(10.0);
    Tree tree(20.0);
    Bush bush(15.0);

    for (int day = 1; day <= 30; ++day) {
        flower.grow();
        tree.grow();
        bush.grow();
    }

    flower.displayHeight();
    tree.displayHeight();
    bush.displayHeight();

    return 0;
}
