#include<iostream>
#include<list>
#include<string>
#include<iterator>

using namespace std;
struct personne{
    string nom;
    string prenom;
    int age;
};
bool comparaison(personne &P1,personne &P2){
    return P1.nom<P2.nom;
}
int main(){
    list<personne> lis;
    int n;
    cout<<"nombre de personne a ajouter:";
    cin>>n;
    for(int i=0;i<n;i++){
        personne P;
        cout<<"personne "<<i+1<<":"<<endl;
        cout<<"nom:";
        cin>>P.nom;
        cout<<"prenom:";
        cin>>P.prenom;
        cout<<"age:";
        cin>>P.age;
        lis.push_back(P);
    }
    lis.sort(comparaison);
        cout << "Liste des personnes triées par nom:" << endl;
    for(auto &p : lis){
        cout << p.nom << " " << p.prenom << " " << p.age << endl;
    }

    return 0;
}