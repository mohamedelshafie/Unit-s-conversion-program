#include <iostream>
using namespace std;
int main(){
	while (1){
		cout << "                                             welcome to conversions program" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "for length conversions click 1" << endl;
		cout << "for weight conversions click 2" << endl;
		cout << "for temperature conversions click 3" << endl;
		cout << "for speed conversions click 4" << endl;
		int x;
		cin >> x;
		if (x == 1){
			cout << "from inch to centimeter click 1" << endl;
			cout << "from centimeter to inch click 2" << endl;
			cout << "from feet to meter click 3" << endl;
			cout << "from meter to feet click 4" << endl;
			cout << "from yard to meter click 5" << endl;
			cout << "from meter to yard click 6" << endl;
			cout << "from mile to kilometer click 7" << endl;
			cout << "from kilometer to mile click 8" << endl;
			cout << "to return to main menu click 9" << endl;
			int len;
			cin >> len;
			if (len == 1){
				cout << "enter your number" << endl;
				double len1;
				cin >> len1;
				double result1 = len1 * 2.54;
				cout << "answer is " << result1 << endl;
			}
			else if (len == 2){
				cout << "enter your number" << endl;
				double len2;
				cin >> len2;
				double result2 = len2 * (50/127);
				cout << "answer is " << result2 << endl;
			}
			else if (len == 3){
				cout << "enter your number" << endl;
				double len3;
				cin >> len3;
				double result3 = len3 * 0.3048;
				cout << "answer is " << result3 << endl;
			}
			else if (len == 4){
				cout << "enter your number" << endl;
				double len4;
				cin >> len4;
				double result4 = len4 * (1250 / 381);
				cout << "answer is " << result4 << endl;
			}
			else if (len == 5){
				cout << "enter your number" << endl;
				double len5;
				cin >> len5;
				double result5 = len5 * 0.9144;
				cout << "answer is " << result5 << endl;
			}
			else if (len == 6){
				cout << "enter your number" << endl;
				double len6;
				cin >> len6;
				double result6 = len6 * (1250 / 1143);
				cout << "answer is " << result6 << endl;
			}
			else if (len == 7){
				cout << "enter your number" << endl;
				double len7;
				cin >> len7;
				double result7 = len7 * 1.609344;
				cout << "answer is " << result7 << endl;
			}
			else if (len == 8){
				cout << "enter your number" << endl;
				double len8;
				cin >> len8;
				double result8 = len8 * 0.62137;
				cout << "answer is " << result8 << endl;
			}
			else if (len == 9){
			}
			else cout << "wrong input...try again" << endl;
		}
		else if (x == 2){
			double w1, w2, w3, w4, result11, result12, result13, result14;
			cout << "from ounce to gram click 1" << endl;
			cout << "from gram to ounce click 2" << endl;
			cout << "from kilogram to pounds click 3" << endl;
			cout << "from pounds to kilogram click 4" << endl;
			cout << "to return to main menu click 5" << endl;
			int w;
			cin >> w;
			switch (w){
			case 1:
				cout << "enter your number" << endl;
				
				cin >> w1;
			 result11 = w1 * 28.34952;
				cout << "answer is " << result11 << endl;
				break;
			case 2:
				cout << "enter your number" << endl;
				cin >> w2;
				result12 = w2 * 0.03527;
				cout << "answer is " << result12 << endl;
				break;
			case 3:
				cout << "enter your number" << endl;
				cin >> w3;
				result13 = w3 * 2.2046;
				cout << "answer is " << result13 << endl;
				break;
			case 4:
				cout << "enter your number" << endl;
				cin >> w4;
				result14 = w4 * 0.4535924;
				cout << "answer is " << result14 << endl;
				break;
			case 5:
				break;
			default:
				cout << "wrong input...try again" << endl;
				break;
			}
		}
		else if (x == 3){
			double temp1, temp2, temp3, temp4, result21, result22, result23, result24;
			cout << "from fahrenheit to celcius click 1" << endl;
			cout << "from celcius to fahrenheit click 2" << endl;
			cout << "from kelvin to celcius click 3" << endl;
			cout << "from celcius to kelvin click 4" << endl;
			cout << "to return to main menu click 5" << endl;
			int temp;
			cin >> temp;
			switch (temp){
			case 1:
				cout << "enter your number" << endl;
				cin >> temp1;
				result21 = (temp1 - 32) * 5 / 9;
				cout << "answer is " << result21 << endl;
				break;
			case 2:
				cout << "enter your number" << endl;
				cin >> temp2;
				result22 = temp1 * 9 / 5 + 32;
				cout << "answer is " << result22 << endl;
				break;
			case 3:
				cout << "enter your number" << endl;
				cin >> temp3;
				result23 = temp3 - 273;
				cout << "answer is " << result23 << endl;
				break;
			case 4:
				cout << "enter your number" << endl;
				cin >> temp4;
				result24 = temp4 + 273;
				cout << "answer is " << result24 << endl;
				break;
			case 5:
				break;
			default:
				cout << "wrong input...try again" << endl;
				break;
			}
		}
		else if (x == 4){
			double sp1, sp2, sp3, sp4, result31, result32, result33, result34;
			cout << "from km/hr to m/s click 1" << endl;
			cout << "from m/s to km/hr click 2" << endl;
			cout << "from mile/hr to km/hr click 3" << endl;
			cout << "from km/hr to mile/hr click 4" << endl;
			cout << "to return to main menu click 5" << endl;
			int sp;
			cin >> sp;
			switch (sp){
			case 1:
				cout << "enter your number" << endl;
				cin >> sp1;
				result31 = sp1 * (5 / 18);
				cout << "answer is " << result31 << endl;
				break;
			case 2:
				cout << "enter your number" << endl;
				cin >> sp2;
				result32 = sp2 * (18 / 5);
				cout << "answer is " << result32 << endl;
				break;
			case 3:
				cout << "enter your number" << endl;
				cin >> sp3;
				result33 = sp3 * 1.609344;
				cout << "answer is " << result33 << endl;
				break;
			case 4:
				cout << "enter your number" << endl;
				cin >> sp4;
				result34 = sp4 * 0.62137;
				cout << "answer is " << result34 << endl;
				break;
			case 5:
				break;
			default:
				cout << "wrong input...try again" << endl;
				break;
			}
		}
		else cout << "wrong input...try again" << endl;
	}
}