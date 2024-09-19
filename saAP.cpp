
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double Htra, Shr, Sbr, Ir, Inss, FGTS, Td, Sl;
    cout<< "Salario hora: ";
    cin>>Shr;
    cout<< "Horas trabalhadas no mes: ";
    cin>>Htra;
    Sbr=Shr*Htra;
    Ir=Sbr*0.05;
    Inss=Sbr*0.10;
    FGTS=Sbr*0.11;
    cout<< "Salario bruto: "<<Sbr<<endl;
    if(Sbr>=1500.00){
        Td=Inss+Ir;
        cout<<"IR: "<<Ir<<endl;
    }else{
        Ir=0;
        Td=Inss+Ir;
    }
    Sl=Sbr-Td;
    cout<<"INSS: "<<Inss<<endl;
    cout<<"FGTS: "<<FGTS<<endl;
    cout<<"Total de descontos: "<<Td<<endl;
    cout<<"Salario liquido: "<<Sl;

    }