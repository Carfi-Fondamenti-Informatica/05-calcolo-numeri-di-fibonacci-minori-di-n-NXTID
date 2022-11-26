#include <iostream>
using namespace std;

void serie(int a){
    int risultato=1;
    int precedente=1;
    int x=0;

    cout<<risultato<<endl;
    cout<<risultato<<endl;

    for(int i=0; i>=0; i++){
        x=risultato;
        risultato= risultato+precedente;

        if (risultato<=a){
            cout<<risultato<<endl;
            precedente=x;
        }else
            break;
    }
}
int main() {
    int n=0;
    
    cin>>n;
    serie(n);
 
    return 0;
}
