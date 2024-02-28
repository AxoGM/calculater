/*
Calculater
v6
made by AxoGM
*/

#include <iostream>
using namespace std;

int main()
{
	int a;

	// title
	cout << "\t||||||||||||||||||||||" << endl;
	cout << "\t|||||[Calculater]|||||" << endl;
	cout << "\t||||||||||||||||||||||" << endl;
	cout << endl;

	// choose
	cout << "[0]+ [1]- [2]× [3]÷" << endl;
	cout << endl;
	cout << "enter number: ";
	cin >> a;

	// +
	if (a == 0)
	{
		cout << "+" << endl;

		// choose number
		int b;
		cout << "[0] 2 number [1] 3 number [2] 4 number [3] 5 number" << endl;
		cout << "choose number: " << endl;
		cin >> b;
		cout << endl;

		// 2 number +
		if (b == 0)
		{
			// header
			cout << "2 number +" << endl;

			// input +
			double add1, add2;
			double total_add;

			// process +
			cout << "Enter first number: ";
			cin >> add1;

			cout << "Enter second number: ";
			cin >> add2;

			total_add = add1 + add2;

			// output +
			cout << endl;
			cout << add1 << " + " << add2 << endl;
			cout << "answer: " << total_add;
			cout << endl;

			return 0;
		}

		// 3 number +
		else if (b == 1)
		{
			// header
			cout << "3 number +" << endl;

			// input +
			double add1, add2, add3;
			double total_add;

			// process +
			cout << "Enter first number: ";
			cin >> add1;

			cout << "Enter second number: ";
			cin >> add2;

			cout << "Enter third number: ";
			cin >> add3;

			total_add = add1 + add2 + add3;

			// output +
			cout << endl;
			cout << add1 << " + " << add2 << " + " << add3 << endl;
			cout << "answer: " << total_add;
			cout << endl;

			return 0;
		}

		// 4 number +
		else if (b == 2)
		{
			// header
			cout << "4 number +" << endl;

			// input +
			double add1, add2, add3, add4;
			double total_add;

			// process +
			cout << "Enter first number: ";
			cin >> add1;

			cout << "Enter second number: ";
			cin >> add2;

			cout << "Enter third number: ";
			cin >> add3;

			cout << "Enter fourth number: ";
			cin >> add4;

			total_add = add1 + add2 + add3 + add4;

			// output +
			cout << endl;
			cout << add1 << " + " << add2 << " + " << add3 << " + " << add4 << endl;
			cout << "answer: " << total_add;
			cout << endl;

			return 0;
		}

		// 5 number +
		else if (b == 3)
		{
			// header
			cout << "5 number +" << endl;

			// input +
			double add1, add2, add3, add4, add5;
			double total_add;

			// process +
			cout << "Enter first number: ";
			cin >> add1;

			cout << "Enter second number: ";
			cin >> add2;

			cout << "Enter third number: ";
			cin >> add3;

			cout << "Enter fourth number: ";
			cin >> add4;

			cout << "Enter fifth number: ";
			cin >> add5;

			total_add = add1 + add2 + add3 + add4 + add5;

			// output +
			cout << endl;
			cout << add1 << " + " << add2 << " + " << add3 << " + " << add4 << " + " << add5 << endl;
			cout << "answer: " << total_add;
			cout << endl;

			return 0;
		}

		else
		{
			cout << "Error please choose the number again.";
		}
	}

	// -
	else if (a == 1)
	{
		cout << "-" << endl;

		// choose number
		int b;
		cout << "[0] 2 number [1] 3 number [2] 4 number [3] 5 number" << endl;
		cout << "choose number: " << endl;
		cin >> b;
		cout << endl;

		// 2 number -
		if (b == 0)
		{
			// header
			cout << "2 number" << endl;

			// input -
			double minus1, minus2;
			double total_minus;

			// process -
			cout << "Enter first number: ";
			cin >> minus1;

			cout << "Enter second number: ";
			cin >> minus2;

			total_minus = minus1 - minus2;

			// output -
			cout << endl;
			cout << minus1 << " - " << minus2 << endl;
			cout << "answer: " << total_minus;
			cout << endl;
			
			return 0;
		}
		
		// 3 number -
		else if (b == 1)
		{
			// header
			cout << "3 number" << endl;

			// input -
			double minus1, minus2, minus3;
			double total_minus;

			// process -
			cout << "Enter first number: ";
			cin >> minus1;

			cout << "Enter second number: ";
			cin >> minus2;
			
			cout << "Enter third number: ";
			cin >> minus3;

			total_minus = minus1 - minus2 - minus3;

			// output -
			cout << endl;
			cout << minus1 << " - " << minus2 << " - " << minus3 << endl;
			cout << "answer: " << total_minus;
			cout << endl;
			
			return 0;
		}
		
		// 4 number -
		else if (b == 2)
		{
			// header
			cout << "4 number" << endl;

			// input -
			double minus1, minus2, minus3, minus4;
			double total_minus;

			// process -
			cout << "Enter first number: ";
			cin >> minus1;

			cout << "Enter second number: ";
			cin >> minus2;
						
			cout << "Enter third number: ";
			cin >> minus3;
			
			cout << "Enter fourth number: ";
			cin >> minus4;

			total_minus = minus1 - minus2 - minus3 - minus4;

			// output -
			cout << endl;
			cout << minus1 << " - " << minus2 << " - " << minus3 << " - " << minus4 << endl;
			cout << "answer: " << total_minus;
			cout << endl;
			
			return 0;
		}
		
		// 5 number -
		else if (b == 3)
		{
			// header
			cout << "5 number" << endl;

			// input -
			double minus1, minus2, minus3, minus4, minus5;
			double total_minus;

			// process -
			cout << "Enter first number: ";
			cin >> minus1;

			cout << "Enter second number: ";
			cin >> minus2;
						
			cout << "Enter third number: ";
			cin >> minus3;
			
			cout << "Enter fourth number: ";
			cin >> minus4;
						
			cout << "Enter fifth number: ";
			cin >> minus5;

			total_minus = minus1 - minus2 - minus3 - minus4 - minus5;

			// output -
			cout << endl;
			cout << minus1 << " - " << minus2 << " - " << minus3 << " - " << minus4 << " - " << minus5 << endl;
			cout << "answer: " << total_minus;
			cout << endl;
			
			return 0;
		}
		
		else
		{
			cout << "Error please choose the number again.";
			cout << endl;
		}
	}

	// ×
	else if (a == 2)
	{
		cout << "×" << endl;

		// input ×
		double mult1, mult2;
		double total_mult;

		// process ×
		cout << "Enter first number: ";
		cin >> mult1;

		cout << "Enter second number: ";
		cin >> mult2;

		total_mult = mult1 * mult2;

		// output ×
		cout << endl;
		cout << mult1 << " × " << mult2 << endl;
		cout << "answer: " << total_mult;
		cout << endl;
		
		return 0;
	}

	// ÷
	else if (a == 3)
	{
		cout << "÷" << endl;

		// input ÷
		double divi1, divi2;
		double total_divi;

		// process ÷
		cout << "Enter first number: ";
		cin >> divi1;

		cout << "Enter second number: ";
		cin >> divi2;

		total_divi = divi1 / divi2;

		// output ÷
		cout << endl;
		cout << divi1 << " ÷ " << divi2 << endl;
		cout << "answer: " << total_divi;
		cout << endl;
		
		return 0;
	}

	else
	{
		cout << "Error try again.";
		cout << endl;
	}

	return 0;
}