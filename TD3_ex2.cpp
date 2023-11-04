#include<iostream>
#include<list>
#include<iterator>

using namespace std;
void affiche(list<int>liste){
    list<int>::iterator i;
    for(i=liste.begin();i !=liste.end();++i)
    cout<<'\t'<<*i<<endl;
}
void Bulles(list<int>&liste){
    bool changer;
    list<int>::iterator i;
    do{
        changer=false;
        for(i=liste.begin();i !=prev(liste.end());i++){
           list<int>::iterator is=next(i);
            if(*i<*is){
                swap(*i,*is);
                changer=true;
            }
        }
    }while(changer);
}
void selection(list<int>&liste){
    list<int>::iterator i;
    list<int>::iterator j;
    for(i=liste.begin();i !=prev(liste.end());i++){
        list<int>::iterator min=i;
        for(j=liste.begin();j !=prev(liste.end());j++){
            if(*j<*min){
                min=j;
            }
        }
        swap(*i,*min);
    }
}
int main(){
    list<int> lis;
    list<int> lis1;
    list<int> lis2;
    int n,i;
    cout<<"le nombre des elements de la liste(tri par bulles):";
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cout<<"entrer l'element "<<i+1<<":";
        cin>>x;
        lis.push_back(x);
    }
    cout<<"liste non triee:"<<endl;
    affiche(lis);
    cout<<"***********************************"<<endl;
    Bulles(lis);
    cout<<"liste triee par bulles:"<<endl;
    affiche(lis);
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
     cout<<"le nombre des elements de la liste(tri par selection):";
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cout<<"entrer l'element "<<i+1<<":";
        cin>>x;
        lis1.push_back(x);
    }
    cout<<"liste non triee:"<<endl;
    affiche(lis1);
    cout<<"***********************************"<<endl;
    Bulles(lis1);
    cout<<"liste triee par bulles:"<<endl;
    affiche(lis1);
    return 0;
}