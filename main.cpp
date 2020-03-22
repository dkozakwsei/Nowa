#include <iostream>

using namespace std;
float funty_na_pln(float funty){
    return funty*4.83;
}
float pln_na_funty(float pln){
    return pln/4.83;
}
int main(){

    int wybor;
    int kwotaf,kwotapln;
    cout<<"Program przelicza kwote w DOLARACH na PLN lub odwrotnie.\t"<<endl<<"\t1 - kwota w FUNTACH na PLN"<<endl<<"\t2 - kwota w PLN na FUNTY"<<endl;
    cout<<"Twoj wybor: "; cin>>wybor;

    if(wybor==1){
        cout<<endl<<"\tPodaj kwote w PLN:"; cin>>kwotapln;
        cout<<kwotapln<<" PLN wymienisz na "<<pln_na_funty(kwotapln)<<" FUNTY";
    }
    if(wybor==2){
        cout<<endl<<"\tPodaj kwote w FUNTACH:"; cin>>kwotaf;
        cout<<kwotaf<<" FUNTY wymienisz na "<<funty_na_pln(kwotaf)<<" PLN";
    }

    return 0;
}
