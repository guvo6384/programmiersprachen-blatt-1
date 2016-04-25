#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b)
{
	int c;
 	while ( a != 0 ) 
 		{
    	c = a; a = b%a;  b = c;
  		}
  	return b;
}

int checksum(int a)
	{
	int b = 0;
	while (a > 0) 
	{ 
		b += a % 10; 
		a /= 10; 
	}
	return b;
}

int sumMultiples()
    {
	int sum = 0;
	for( int a = 1; a <= 1000; a++ )
	{
	    if( ( a % 3 == 0) || ( a % 5 == 0) ) sum += a;
	}
	    return sum; 

}

double fract(double x)
{
	double i = x - floor(x);
	return i;
}

double vol(int l,int r)
{
	int vo = 0;
	vo = M_PI * r * r * l;
	return vo;
}

double of(double l, double r)
{
	int obfl = 0;
	obfl = 2*M_PI*r*r+2*M_PI*r*l;
	return obfl;

}

double convert_to_kilometers(double miles)
{
     double kilometers;
     kilometers = 1.609 * miles;
     return kilometers;
}

TEST_CASE("describe_convert_to_kilometers", "[convert_to_kilometers]")
{
	REQUIRE(convert_to_kilometers(5) == Approx(8.045));
}

TEST_CASE("describe_of", "[of]")
{
	REQUIRE(of(3,3) == Approx(113));
}

TEST_CASE("describe_vol", "[vol]")
{
	REQUIRE(vol(3,3) == Approx(84));
}

TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(fract(3.14159265) == Approx(0.141593));
}

TEST_CASE("describe_sumMultiples", "[sumMultiples]")
{
	REQUIRE(sumMultiples() == 234168);
}

TEST_CASE("describe_checksum", "[checksum]")
{
	REQUIRE(checksum(115852) == 22);
	REQUIRE(checksum(123) == 6);
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(3,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}