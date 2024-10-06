#include "factors.h"
/**
 * find_factors - function computes factors of a number
 * @buf: pointer to the buffer
 * Return: returns '0' if successfull
 */
int find_factors(char *buf)
{
	mpz_t num, i, quotient, remainder, sqrt_num;

	mpz_init(num);
	mpz_init(i);
	mpz_init(quotient);
	mpz_init(remainder);

	mpz_set_str(num, buf, 10);

	mpz_set_ui(i, 2);

	mpz_init(sqrt_num);
	mpz_sqrt(sqrt_num, num);

	while (mpz_cmp(i, sqrt_num) <= 0)
	{
		mpz_tdiv_qr(quotient, remainder, num, i);

		if (mpz_cmp_ui(remainder, 0) == 0)
		{
			gmp_printf("%Zd=%Zd*%Zd\n", num, quotient, i);

			mpz_clear(num);
			mpz_clear(i);
			mpz_clear(quotient);
			mpz_clear(remainder);
			mpz_clear(sqrt_num);
			return (0);
		}
		mpz_add_ui(i, i, 1);
	}
	gmp_printf("%Zd is prime\n", num);

	mpz_clear(num);
	mpz_clear(i);
	mpz_clear(quotient);
	mpz_clear(remainder);
	mpz_clear(sqrt_num);

	return (0);
}
