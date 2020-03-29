//
//  Tobias_Saul_HW3.cpp
//  Tobias_Saul_HW3
//
//  Created by Saul Tobias on 3/5/19.
//  Copyright © 2019 Saul Tobias. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//class General declaration

class General
{
protected:
    string manufacturer;
    int pcModel;
    int yearManufactured;
public:
    General(string mnfctr = "Apple", int computerModel = 1, int yrManufactured = 2019); //constructor
    void setGeneral(string mnfctr, int computerModel, int yrManufactured);
    void showGeneral();
    ~General(); //destructor
};

//class Spec declaration

class Spec
{
protected:
    int registrationNo;
    string pcOwner;
public:
    Spec(int reg = 1, string computerOwner = "Saul"); //constructor
    void setSpec(int reg, string computerOwnder);
    void showSpec();
    ~Spec(); //destructor
};

//class PC declaration

class PC : public General, public Spec
{
private:
    
public:
    PC(string m = "Apple", int c = 1, int y = 2018,
       int r = 1, string cO = "Saul");
    
    void setPC(string mnfctr, int computerModel, int yrManufactured,
               int reg, string computerOwner);
    void showPC();
    ~PC();
    
};

//General class implementation

General::General(string mnfctr, int computerModel, int yrManufactured)
{
    manufacturer = mnfctr;
    pcModel = computerModel;
    yearManufactured = yrManufactured;
}

void General::setGeneral(string mnfctr, int computerModel, int yrManufactured)
{
    manufacturer = mnfctr;
    pcModel = computerModel;
    yearManufactured = yrManufactured;

}

void General::showGeneral()
{
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "pcModel: " << pcModel << endl;
    cout << "yearManufactured: " << yearManufactured << endl;
    
}

General::~General()
{
    cout << "General object has been destroyed " << endl;
}

//Spec class implementation

Spec::Spec(int reg, string computerOwner)
{
    registrationNo = reg;
    pcOwner = computerOwner;
}

void Spec::setSpec(int reg, string computerOwner)
{
    registrationNo = reg;
    pcOwner = computerOwner;
}

void Spec::showSpec()
{
    cout << "registrationNo: " << registrationNo << endl;
    cout << "pcOwner: " << pcOwner << endl;
}

Spec::~Spec()
{
    cout << "Spec opbject has been destroyed " << endl;
}

//PC class implementation

PC::PC(string mnfctr, int computerModel, int yrManufactured, int reg, string computerOwner)
{
    manufacturer = mnfctr;
    pcModel = computerModel;
    yearManufactured = yrManufactured;
    registrationNo = reg;
    pcOwner = computerOwner;
}

/*
void PC::setPC(string mnfctr, int computerModel, int yrManufactured,
               int reg, string computerOwner)
{
    manufacturer = mnfctr;
    pcModel = computerModel;
    yearManufactured = yrManufactured;
    registrationNo = reg;
    pcOwner = computerOwner;
    
    return;
}
*/

/*
void PC::showPC()
{
    //cout << "\tPC 1\\t\tPC2" << endl;
    cout << "Manufacturer:          \t\t\t" << manufacturer << endl;
    cout << "Computer Model:        \t\t\t" << pcModel << endl;
    cout << "Registration Number:   \t\t\t" << registrationNo << endl;
    cout << "Computer Owner:        \t\t\t" << pcOwner << endl;
    cout << "Year Manufactured:     \t\t\t" << yearManufactured << endl;
    cout << endl << endl;
    return;
}
*/


PC::~PC()
{
    cout << "The PC object has been destroyed" << endl;
}

int main() {
    
    PC pcOne, pcTwo;
    //string cpuOwner, theManufacturer;
    //int pcModel, regNumber, manufacturedYear;
    
    cout << "PC1 has been initialized " << endl << endl;
    
    /*
    cout << "Please enter manufacturer for pc2: ";
    getline(cin, theManufacturer);
    
    cout << "Please enter computer model for pc2: ";
    cin >> pcModel;
    cin.ignore();
    
    cout << "Please enter registration number for pc2: ";
    cin >> regNumber;
    cin.ignore();
    
    cout << "Please enter computer owner for pc2: ";
    getline(cin, cpuOwner);
    
    cout << "Please enter year manufactured for pc2: ";
    cin >> manufacturedYear;
    cin.ignore();
    */
    
    cout << endl << endl;
    
    //pcTwo.setPC(theManufacturer, pcModel, manufacturedYear, regNumber, cpuOwner);
    
    /*
    cout << "\t\t\tPC1\t\t\t\tPC2" << endl << endl;
    cout << "Manufacturer\t\t\tm1\t\t\tm2"<< endl;
    cout << "Manufacturer\t\t\tpcm1\t\t\tpcmm2"<< endl;
    cout << "Manufacturer\t\t\tmy1\t\t\tpcmy2"<< endl;
    cout << "Manufacturer\t\t\trn1\t\t\trn2"<< endl;
    cout << "Manufacturer\t\t\tcpu1\t\t\tcpu2"<< endl;
    */
    cout << "\t\t\t\t\t\t\t\tPC1\t\t\t\tPC2" << endl << endl;
    pcOne.showGeneral();
    pcOne.showSpec();
    
    cout << endl << endl;
    
    pcTwo.showGeneral();
    pcTwo.showSpec();
    
    cout << endl << endl;
    
    return 0;
}

