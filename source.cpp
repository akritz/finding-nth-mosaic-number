// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the nth mosaic number 
int mosaic(int n) 
{ 
	int i, ans = 1; 

	// Iterate from 2 to the number 
	for (i = 2; i <= n; i++) { 

		// If i is the factor of n 
		if (n % i == 0 && n > 0) { 
			int count = 0; 

			// Find the count where i^count 
			// is a factor of n 
			while (n % i == 0) { 

				// Divide the number by i 
				n /= i; 

				// Increase the count 
				count++; 
			} 

			// Multiply the answer with 
			// count and i 
			ans *= count * i; 
		} 
	} 

	// Return the answer 
	return ans; 
} 

// Driver code 
int main() 
{ 
	int n = 36; 
	cout << mosaic(n); 

	return 0; 
} 
