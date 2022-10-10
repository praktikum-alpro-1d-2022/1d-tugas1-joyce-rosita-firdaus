#include <iostream>
using namespace std;
int main (){
        int p = 27, q = 9, temp;
        cout << "Nilai sebelum ditukar" << endl;
        cout << "Nilai p : " << p << endl;
        cout << "Nilai q : " << q << endl;

        temp = p;
        p = q;
        q = temp;

        cout << "Nilai sesudah ditukar" << endl;
        cout << "Nilai p : " << p << endl;
        cout << "Nilai q : " << q << endl;

        return 0;
}
