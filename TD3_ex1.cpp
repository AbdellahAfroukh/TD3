#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
class complexe{
    public:
    float R;
    float I;
    complexe(float Reel,float Img){
        R=Reel;
        I=Img;
    }
    complexe Addition(complexe C1,complexe C2){
        complexe C3(0,0);
        C3.R=C1.R+C2.R;
        C3.I=C1.I+C2.I;
        return C3;
    }
    complexe Soustarction(complexe C1, complexe C2){
        complexe C3(0,0);
        C3.R=C1.R-C2.R;
        C3.I=C1.I-C2.I;
        return C3;
    }
    complexe Multiplication(complexe C1,complexe C2){
        complexe C3(0,0);
        C3.R=C1.R*C2.R-C1.I*C2.I;
        C3.I=C1.R*C2.I-C1.I*C2.R;
        return C3;
    }

};