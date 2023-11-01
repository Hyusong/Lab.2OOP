#include <iostream>
#include <vector>
using namespace std;

class Prescription {
private:
    vector<string> medications;

public:
    Prescription() {}

    //Додає нові ліки до рецепту
    void addMedication(const string& medication) {
        medications.push_back(medication);
    }

    //Дає доступ до вектора ліків у рецепті, дозволяє зчитувати його вміст.
    const vector<string>& getMedications() const {
        return medications;
    }
};