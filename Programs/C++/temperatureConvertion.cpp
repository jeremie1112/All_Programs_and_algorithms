#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Temperature code : (C) Celcius, (R) Reaumur, (F) Fahrenheit, (K) Kelvin" << endl;
	cout << "# NOTE # Make sure you input an upper case character # NOTE #" << endl;
	
	char tempcode1, tempcode2;
	cout << "Input temperature code 1 : ";
	cin >> tempcode1;

	if(!(tempcode1 == 'C' or tempcode1 == 'R' or tempcode1 == 'F' or tempcode1 == 'K')){
		cout << "Invalid temperature code 1";
		return 0;
	}
	
	cout << "Input temperature code 2 : ";
	cin >> tempcode2;
	if(!(tempcode2 == 'C' or tempcode2 == 'R' or tempcode2 == 'F' or tempcode2 == 'K')){
		cout << "Invalid temperature code 2";
		return 0;
	}
	
	double temp, ans;
	cout << "Input temperature : ";
	cin >> temp;
	
	if(tempcode1 == 'C'){
		
		if(tempcode2 == 'C'){
			cout << "Imagine converting Celcius to Celcius" << endl;
		} else if(tempcode2 == 'R'){
			ans = 4.0 / 5.0 * temp;
		} else if(tempcode2 == 'F'){
			ans = 9.0 / 5.0 * temp + 32;
		} else if(tempcode2 == 'K'){
			ans = 273.15 + temp;
		}
			
	} else if(tempcode1 == 'R'){
		
		if(tempcode2 == 'C'){
			ans = 5.0 / 4.0 * temp;
		} else if(tempcode2 == 'R'){
			cout << "Imagine converting Reaumur to Reaumur" << endl;
		} else if(tempcode2 == 'F'){
			ans = 9.0 / 4.0 * temp + 32;
		} else if(tempcode2 == 'K'){
			ans = 5.0 / 4.0 * temp + 273.15;
		}
			
	} else if(tempcode1 == 'F'){
		
		if(tempcode2 == 'C'){
			ans = (5.0 / 9.0) * (temp - 32);
		} else if(tempcode2 == 'R'){
			ans = (4.0 / 9.0) * (temp - 32);
		} else if(tempcode2 == 'F'){
			cout << "Imagine converting Fahrenheit to Fahrenheit" << endl;
		} else if(tempcode2 == 'K'){
			ans = (5.0 / 9.0) * (temp - 32) + 273.15;
		}
			
	} else if(tempcode1 == 'K'){
		
		if(tempcode2 == 'C'){
			ans = temp - 273.15;
		} else if(tempcode2 == 'R'){
			ans = (4.0 / 5.0) * (temp - 273.15);
		} else if(tempcode2 == 'F'){
			ans = (9.0 / 5.0) * (temp - 273.15) + 32;
		} else if(tempcode2 == 'K'){
			cout << "Imagine converting Kelvin to Kelvin" << endl;
		}
			
	}
	
	cout << "The temperature answer is ";
	cout << ans;
	
}
