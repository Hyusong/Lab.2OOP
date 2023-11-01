#include <iostream>
#include <vector>
#include "Medication.h"
#include "Prescription.h"
using namespace std;

class Pharmacy {
private:
    vector<Medication> medications;

public:
    Pharmacy() {}

    //Додає новий медикамент 
    void addMedication(const Medication& medication) {
        medications.push_back(medication);
    }

    //Перевіряє, чи є медикамент у списку 
    bool hasMedication(const string& medicationName) {
        for (const auto& medication : medications) {
            if (medication.getName() == medicationName) {
                return true;
            }
        }
        return false;
    }

    //Об. загальну вартість медикаментів
    double getCostOfMedications(const vector<string>& prescription) {
        double totalCost = 0.0;
        for (const auto& medicationName : prescription) {
            for (const auto& medication : medications) {
                if (medication.getName() == medicationName) {
                    totalCost += medication.getCost();
                    break;
                }
            }
        }
        return totalCost;
    }

    //Очищення об'єктів класу
    ~Pharmacy() {
    }
};