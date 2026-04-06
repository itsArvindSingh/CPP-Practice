#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class UnitConverter
{
private:
    double input,output;
    double convert(int type,double val)
    {
        switch(type){
            case 1: return val*3.28084;
            case 2: return val/3.28084;
            case 3: return val*0.621371;
            case 4: return val/0.621371;
            case 5: return val/2.54;
            case 6: return val*2.54;
            case 7: return val*2.20462;
            case 8: return val/2.20462;
            case 9: return val*0.035274;
            case 10: return val/0.035274;
            case 11: return (val*9/5)+32;
            case 12: return (val-32)*5/9;
            case 13: return val+273.15;
            case 14: return val-273.15;
            case 15: return val*0.264172;
            case 16: return val/0.264172;
            case 17: return val*0.033814;
            case 18: return val/0.033814;
            case 19: return val*10.7639;
            case 20: return val/10.7639;
            default: return 0;
        }
    }

    string getUnitName(int type)
    {
        string names[]={"Meter","Feet","Kilometer","Mile","Centimeter","Inch","Kilogram","Pound","Gram","Ounce","Celsius","Fahrenheit","Celsius","Kelvin","Liter","Gallon","Milliliter","Fluid Ounce","Square Meter","Square Feet"};
        return names[type-1];
    }

public:
    void run()
    {
        int choice,sub;
        cout<<fixed<<setprecision(4);
        do{
            cout<<"\n======== UNIT CONVERTER ========\n";
            cout<<"1. Length\n";
            cout<<"2. Weight\n";
            cout<<"3. Temperature\n";
            cout<<"4. Volume\n";
            cout<<"5. Area\n";
            cout<<"6. History\n";
            cout<<"7. Exit\n";
            cout<<"Choice: ";
            cin>>choice;

            if(choice>=1 && choice<=5){
                showMenu(choice);
                cout<<"Choice: ";
                cin>>sub;
                if(sub<1 || sub>getSubCount(choice)){
                    cout<<"Invalid choice!\n";
                    continue;
                }
                int type=getTypeCode(choice,sub);
                cout<<"Enter value: ";
                cin>>input;
                output=convert(type,input);
                cout<<input<<" "<<getUnitName(type)<<" = "<<output<<" "<<getUnitName(type+1)<<endl;
                saveHistory(getUnitName(type),getUnitName(type+1),input,output);
            }
            else if(choice==6){
                showHistory();
            }
            else if(choice==7){
                cout<<"Thank you for using Unit Converter!\n";
            }
            else{
                cout<<"Invalid choice!\n";
            }
        }while(choice!=7);
    }

    void showMenu(int cat)
    {
        cout<<"\n";
        if(cat==1){
            cout<<"--- LENGTH CONVERSIONS ---\n";
            cout<<"1. Meter to Feet\n";
            cout<<"2. Feet to Meter\n";
            cout<<"3. Kilometer to Mile\n";
            cout<<"4. Mile to Kilometer\n";
            cout<<"5. Centimeter to Inch\n";
            cout<<"6. Inch to Centimeter\n";
        }
        else if(cat==2){
            cout<<"--- WEIGHT CONVERSIONS ---\n";
            cout<<"1. Kilogram to Pound\n";
            cout<<"2. Pound to Kilogram\n";
            cout<<"3. Gram to Ounce\n";
            cout<<"4. Ounce to Gram\n";
        }
        else if(cat==3){
            cout<<"--- TEMPERATURE CONVERSIONS ---\n";
            cout<<"1. Celsius to Fahrenheit\n";
            cout<<"2. Fahrenheit to Celsius\n";
            cout<<"3. Celsius to Kelvin\n";
            cout<<"4. Kelvin to Celsius\n";
        }
        else if(cat==4){
            cout<<"--- VOLUME CONVERSIONS ---\n";
            cout<<"1. Liter to Gallon\n";
            cout<<"2. Gallon to Liter\n";
            cout<<"3. Milliliter to Fluid Ounce\n";
            cout<<"4. Fluid Ounce to Milliliter\n";
        }
        else if(cat==5){
            cout<<"--- AREA CONVERSIONS ---\n";
            cout<<"1. Square Meter to Square Feet\n";
            cout<<"2. Square Feet to Square Meter\n";
        }
    }

    int getSubCount(int cat)
    {
        int counts[]={6,4,4,4,2};
        return counts[cat-1];
    }

    int getTypeCode(int cat,int sub)
    {
        int codes[5][6]={{1,2,3,4,5,6},{7,8,9,10},{11,12,13,14},{15,16,17,18},{19,20}};
        return codes[cat-1][sub-1];
    }

    void saveHistory(string from,string to,double val,double res)
    {
        ofstream f("history.txt",ios::app);
        if(f.is_open()){
            f<<from<<" -> "<<to<<" : "<<val<<" = "<<res<<endl;
            f.close();
        }
    }

    void showHistory()
    {
        ifstream f("history.txt");
        string line;
        cout<<"\n--- CONVERSION HISTORY ---\n";
        if(f.is_open()){
            while(getline(f,line)){
                cout<<line<<endl;
            }
            f.close();
        }
        else{
            cout<<"No conversion history found!\n";
        }
    }
};

int main(){
    UnitConverter uc;
    uc.run();
    return 0;
}