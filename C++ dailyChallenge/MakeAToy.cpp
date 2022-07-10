#include<iostream>
using namespace std;

//Your work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 Wheels, 1 Carbody and 2 Figures
//of people to be place inside. Given the total number of wheels. car bodies and figures available,How many complete toy cars can you make ? 
class MakeToy{

    public:

        int CarBuild(int& NW,int& NB,int& NF){
            
            if(NW < 4 || NB < 1 || NF < 2){
                return 0;
            }
            int MakeToWheel  = NW / 4;
            int MakeToCarBody = NB / 1;
            int MakeTOFigure = NF / 2;
            
            // find lowest Number
            int PossibleCar = (MakeToWheel < MakeToCarBody) ? (MakeToWheel > MakeTOFigure) ? MakeTOFigure : MakeToWheel : (MakeToCarBody > MakeTOFigure) ? MakeTOFigure : MakeToCarBody;
            
            return PossibleCar;
        }

};
int main(){

    int NoOfWheel;
    int NoOfCarBody;
    int NoOfFigures;

    cout<< "Enter No . of Wheel for Make Toys "<< endl;
    cin >> NoOfWheel;

    cout<< "Enter No . of CarBody :" << endl;
    cin >> NoOfCarBody;

    cout << "Enter No. of Figures :"<< endl;
    cin >> NoOfFigures;

    MakeToy obj;

    int NoOfReadyCar  = obj.CarBuild(NoOfWheel,NoOfCarBody,NoOfFigures);

    cout << "you make the complete toy cars is " << NoOfReadyCar << endl;

    

    return 0;

}