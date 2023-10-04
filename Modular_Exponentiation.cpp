//Link to the problem: https://bit.ly/3peOT9i   (Coding Ninjas)


// Used a Modular property: -

//  1    (a * b) % m = ((a % m) * (b % m)) % m
//  2    (a + b) % m = ((a % m) + (b % m)) % m  
//  3    (a - b) % m = ((a % m) - (b % m)) % m  

#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int a, int b, int m) {

		int res = 1;            //if you used "long long res" and "long long a" then 
                                // no need to type cast by (1LL *)
		while(b != 1)
		{
			if(b&1 == 1) 		// is pow odd?
			{
				// if the pow is odd
				// we are just keep the extra 'a' aside safely
				// and
				// keep moving the pattern i.e sqr the a and half the pow
				
				//those 'a' which were extra and kept aside
				// in the end we will multiply them with computed 'a' (now 'a' has totally computed and has pow 1 )  
				res = (1LL * (res % m) *(a % m))%m;
				b--;
			}

			//pow is even
			a = (1LL * (a % m)*(a % m)) % m;	// sqr the 'a' 
			b = b >> 1;	//half the pow
		}

		res = (1LL * (res % m) * (a % m))%m;;	// multiply the extra 'a'(res) with computed 'a'

		return res;		
} 


int main()
{
    cout << modularExponentiation(3, 1, 2);   // Ans is 1
    return 0;
}