#include <iostream>
using namespace std;

class Medication {
private:
    string name;
    string instructions;
    double cost;

public:
    //��������� ������� ����
    Medication(const string& name, const string& instructions, double cost)
        : name(name), instructions(instructions), cost(cost) {}

    //���������� �����, ���������� �� ������� ���������� ������
    string getName() const { return name; }
    string getInstructions() const { return instructions; }
    double getCost() const { return cost; }
};