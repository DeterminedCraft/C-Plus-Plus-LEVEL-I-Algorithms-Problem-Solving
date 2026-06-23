
#include <iostream>
using namespace std;

/* So far, The do..while statement has been utilized for reading user input. */

// Example- The implementation is:

double ReadNumberInRange(const string& message, double min, double max)   // pas by const. ref.   // Ranges ALWAYS passed by value.
{
	double number;   // what's returned.

	do
	{
		number = ReadDoubleNumber(message); // 'number' is IMMEDIATELY validated against the range, in the while condition.

	} while (!ValidateNumberInRange(number, min, max));

	return number;
    /* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadDoubleNumber()  & ValidateNumberInRange()     */
}





 
// However - A While statement can be used instead of the Do..While statement:
// However - A While statement can be used instead of the Do..While statement:


double ReadNumberInRange(const string& message, double min, double max)  // pas by const. ref.   // Ranges ALWAYS passed by value.
{
	double number;   // what's returned.

	number = ReadDoubleNumber(message);   // 'number' is to be IMMEDIATELY validated against the range, in the while condition.

	while (!ValidateNumberInRange(number, min, max))   // The condition is written so that, it evaluates to TRUE when the condition is INVALID.
	{
		number = ReadDoubleNumber(message);
	}

	return number;
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadDoubleNumber()  & ValidateNumberInRange()     */
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////











//// So far, as demonstrated above, 
//// the user could be re-prompted to enter the value that passed the range validation.

// NEVERTHELESS, An error message should be displayed prompting the user to re-enter the value.

// Therefore, the above implementation SHOULD BE, from now and on, as follows:

double ReadNumberInRange(const string& message, double min, double max)  // pas by const. ref.   // Ranges ALWAYS passed by value.
{
	int counter = 0;      // written at the end.
	double number; // what's returned.

	do
	{
		counter++;          // written at the end.    // first time the program enters the do statement, counter becomes 1.
		if (counter > 1)   // written at the end.     // if the program enters the do statement for the 2nd time and up, it means that the value is failing validation.
		{
			cout << "Error." << "Number entered must be between " << min<< " & " << max << ". \n";
		}

		number = ReadDoubleNumber(message);   // 'number' is to be IMMEDIATELY validated against the range, in the while condition.

	} while (ValidateNumberInRange(number, min, max));   // the condition is written so that, it valuates to TRUE when the condition is INVALID.


	return number;
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadDoubleNumber()  & ValidateNumberInRange()     */
}




// Or the following implementation is possible:

double ReadNumberInRange(string message, double min, double max)  // pas by const. ref.   // Ranges ALWAYS passed by value.
{
	bool validation;     // written at the end.
	double number;   // what's returned.

	do
	{
		number = ReadDoubleNumber(message);   // 'number' is to be IMMEDIATELY validated against the range, in the while condition.

		validation = ValidateNumberInRange(number, min, max);   // written at the end.
		if (!validation)            // written at the end.                 
		{
			cout << "Error. The number entered should be between " << min << " & " << max << ". \n";
		}

	} while (!validation);   // the condition is written so that, it valuates to TRUE when the condition is INVALID.

	return number; 
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadDoubleNumber()  & ValidateNumberInRange()     */
}



// Or that, the implementation using the While statement for the error message is: (considered the cleanest approach):

double ReadNumberInRange(string message, double min, double max)  // pas by const. ref.   // Ranges ALWAYS passed by value.
{
	double number;   // what's returned.

	number = ReadDoubleNumber(message);   // 'number' is IMMEDIATELY validated against the range, in the while condition.

	while (!validateNumberInRange(number, min, max))   // the condition is written so that, it evaluates to TRUE when the condition is INVALID.
	{
		cout << "Error. Number entered must be between " << min << " & " << max << " .\n";
		number = ReadDoubleNumber(message);   // 'number' is IMMEDIATELY validated against the range, in the while condition.
	}

	return number; 
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadDoubleNumber()  & ValidateNumberInRange()     */
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Now, some reading functions are login functions that are the argument of an if statement that 

		// returns true when the user is authenticated, so the program can hob onto the next lines of code for, for example, showing the balance.
		// Otherwise, the user is stuck in the do while loop UNTILL the correct password is entered.
		// 
		// Implementation example is as follows:


/* Inside main():    */

string password = "1234";

if (login("Enter you password: ", password))   // The range 'password' is included as it's value is INTRINSIC.
{
	cout << "Your balance is 7500";
}



 // the implementation of the login() function is as follows:

bool login(const string& message, string password)    // pass by constant reference.   // Range ALWAYS passed by value.
{
	int count = 0;      // written @ the end
	string EnteredPassword; // what's NOT returned. (it's simply compared to the range 'password' & if they match, then true is returned.)

	do
	{
		count++;     // written @ the end
		if (count > 1)  // written @ the end
		{
			cout << "Error - Wrong password. ";
		}

		EnteredPassword = ReadStringValue(message);  // 'EnteredValue' is IMMEDIATELY validated against the range, in the while condition.

	} while (!ValidateEnteredPassword(EnteredPassword, password));     // the condition is written so that, it evaluates to TRUE when the condition is INVALID.

	return true;
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadStringValue  & ValidateEnteredPassword()     */
}


// Or:

bool login(const string& message, string password)   // pass by const. ref.    // Range ALWAYS passed by value
{
	string EnteredPassword;  // what's NOT returned (simply to be compared against the range 'password')

	EnteredPassword = ReadStringValue(message);   // 'EnteredPassword' is to be IMMEDIATELY validated against the range, in the while condition.

	while (!ValidateEnteredPassword(EnteredPassword, password))    // the argument is written so that, it evaluates to TRUE when the condition is INVALID.
	{
		cout << "Wrong password. ";
		EnteredPassword = ReadStringValue(message);
	}

	return true;
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadStringValue  & ValidateEnteredPassword()     */
}






// Or, using the while loop:

bool login(const string& message, string password)   // pass by const. ref.   // Range ALWAYS passed by value.
{
	string EnteredPassword;    // what's NOT returned, (Simply to be compared against the 'password' range).

	EnteredPassword = ReadStringValue(message); // 'EnteredPassword' is to be IMMEDIATELY compared against the range, in the while condition

	while (!ValidateNumberInRange(EnteredPassword, password))
	{
		cout << "Wrong password. ";
		EnteredPassword = ReadStringValue(message); // 'EnteredPassword' is to be IMMEDIATELY compared against the range, in the while condition
	}

	return true; 
	/* The above code block is to be sequentially composed line by line. &at the end, implement the functions of:   ReadStringValue  & ValidateEnteredPassword()     */
}








// HOWEVER - All the previous login() implementations either return "true" or keeps on prompting the user to enter the correct password.
// The correct approach is to implement the function so that it returns false after, for example, 3 failed authentication attempts:
// 
	// The implementation is  somehow different from before:


bool login(const string& message, const string& password)
{
	int counter = 3;
	string EnteredPassword;

	do
	{

		EnteredPassword = ReadStringValue(message);

		if (ValidateEnteredPassword(EnteredPassword, password)) // pay attention, no ! is added to the argument.
		{
			return true;  // this exists the login function and returns true.
		}

		counter--;   // decrement on the failed password attempt.
		if (counter > 0)     // without wrapping the cout with this if statement, then on the last failed message we'll have:  "Wrong Password. You have 0 tries left."
		{
			cout << "Wrong Password. You have " << counter << " tries left.\n";
		}

	} while (counter > 0);

	return false;  // if the program reaches here, then login failed.
}


// with the implemenation:   // NEVER include the counter aspect in the implementation as doing so, deems this function unre-usable)
bool ValidateEnteredPassword(const string& EnteredPassword, string password) // pass by const. ref. since 'EnteredPassword' is ONLY validated against the range that's 'password'.
{
	return (EnteredPassword == password);       
}