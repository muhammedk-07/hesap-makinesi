#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

int main() {
    char islem, islem_2;
    double s1, s2, s3, pi = std::numbers::pi;

    cout << "Yapacaginiz islemi giriniz(+,-,*,/)(Eger 4 temel islem yapmayacaksaniz x giriniz.)\n";
    cin >> islem;

    if (islem == 'x') {
        cout << "İslem yapacaginiz sayiyi giriniz: " << endl;
        cin >> s3;


        double girilen_sayi = s3;


        s3 = (s3 / 360.0) * 2 * pi;

        cout << "Yapacaginiz islemi giriniz(Log=L,sin=s,cos=c,tan=t,cot=ct)" << endl;
        cin >> islem_2;

        switch (islem_2) {
        case 'L':

            cout << "Isleminizin sonucu: " << log10(girilen_sayi) << " dir" << endl;
            break;
        case 's':
            cout << "Isleminizin sonucu: " << sin(s3) << " dir" << endl;
            break;
        case 'c':

            cout << "Isleminizin sonucu: " << cos(s3) << " dir" << endl;
            break;
        case 't':
            cout << "Isleminizin sonucu: " << tan(s3) << " dir" << endl;
            break;
        case 'ct':

            cout << "Isleminizin sonucu: " << 1.0 / tan(s3) << " dir" << endl;
            break;
        default:
            cout << "Lutfen gecerli bir islem giriniz.";
        }
    }
    else {
        cout << "Islem yapacaginiz sayilari giriniz:\n";
        cin >> s1 >> s2;

        switch (islem) {
        case '+':
            cout << "Isleminizin sonucu: " << s1 + s2 << " dir" << endl;
            break;
        case '-':
            cout << "Isleminizin sonucu: " << s1 - s2 << " dir" << endl;
            break;
        case '*':
            cout << "Isleminizin sonucu: " << s1 * s2 << " dir" << endl;
            break;
        case '/':
            if (s2 != 0)
                cout << "Isleminizin sonucu: " << s1 / s2 << " dir" << endl;
            else
                cout << "Hata: Bir sayi 0'a bolunemez!" << endl;
            break;
        default:
            cout << "Lutfen gecerli bir islem giriniz.";
        }
    }

    return 0;
}