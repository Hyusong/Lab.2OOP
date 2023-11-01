#include <iostream>
#include <vector>
using namespace std;

class Prescription {
private:
    vector<string> medications;

public:
    Prescription() {}

    //���� ��� ��� �� �������
    void addMedication(const string& medication) {
        medications.push_back(medication);
    }

    //�� ������ �� ������� ��� � ������, �������� ��������� ���� ����.
    const vector<string>& getMedications() const {
        return medications;
    }
};