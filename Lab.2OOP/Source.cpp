#include <iostream>
#include <string>
#include "Pharmacy.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    //��������� ���
    Pharmacy pharmacy;
    pharmacy.addMedication(Medication("MedicineA", "Take with water", 10.5));
    pharmacy.addMedication(Medication("MedicineB", "Take after meals", 20.0));
    pharmacy.addMedication(Medication("MedicineC", "Take before bedtime", 15.75));

    //���. ��� �� �������
    Prescription prescription;
    prescription.addMedication("MedicineB");
    prescription.addMedication("MedicineA");

    //���� � ��
    if (pharmacy.hasMedication("MedicineA")) {
        cout << "MedicineA is available in the pharmacy." << endl;
    }
    else {
        cout << "MedicineA is not available in the pharmacy." << endl;
    }

    //��. �������� ������� ��� � ������
    double totalCost = pharmacy.getCostOfMedications(prescription.getMedications());
    cout << "Total cost of medications in the prescription: " << totalCost << endl;

    return 0;
}
