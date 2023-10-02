#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


// cal. the prime_num from 1 till n
vector<int> SeivePrime(int upper_limit)
{
    int n = sqrt(upper_limit);

    vector<bool> primes(n + 1, true);
    vector<int> prime_num;

    for (int i = 2; i <= n; i++)
    {
        if (primes[i] == true)
        {
            prime_num.push_back(i);

            for (int j = i + i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }

    return prime_num;
}


// cal. prime from lower_limit till upper_limit
vector<int> PrimeInSeries(int lower_limit, int upper_limit)
{

    // size of dummy_arr
    int size = upper_limit - lower_limit + 1;

    // creating dummy_arr and initialized its all elem with true
    vector<bool> dummy_array(size, true);

    // cal. prime_num those can remove all non_prime from lower_limit till upper_limit
    vector<int> prime_num = SeivePrime(upper_limit);

    // removing non_prime number from lower_limit till upper_limit
    for (int i = 0; i < prime_num.size(); i++)
    {

        // calcul. first muultiple in the range
        int first_multiple = (lower_limit - (lower_limit % prime_num[i]));
        if(first_multiple < lower_limit)
        {
            first_multiple += prime_num[i]; 
        }

        // removing non_prime by placing false in their value

/* Why we are prefering the max, 
because if prime square is greater than first_mul, then it means
first_mul its already get false by any smaller prime num which came earlier.
So, its better to start with bigger one.
And do not think that there is also mul of curr prim_num before its square,
because its also get false by some other smaller prime_num*/
        for (int j = max(first_multiple, prime_num[i]*prime_num[i]); j <= upper_limit; j += prime_num[i])
        {
            int ind = j - lower_limit;
            dummy_array[ind] = false;
        }
    }

    // for storing prime numbers in the range
    vector<int> ans;

    for (int i = 0; i < size; i++)
    {
        // storing the prime_numbers 
        if (dummy_array[i] == true)
        {
            ans.push_back(i + lower_limit);
        }
    }

    return ans;
}

int main()
{
    vector<int> prime_num = PrimeInSeries(110, 130);

    for(int i = 0; i < prime_num.size(); i++)
    {
        cout << prime_num[i] << " ";
    }
    return 0;
}
