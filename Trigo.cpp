#include <iostream>

//function prototype declaration
double factorial(int n);
double cosine_x(double x, int limit );
double sine_x(double x, int limit);
double tangent_x(double x, int limit);
int power(int num, int to_pow);
double radians(double x);

int main( int argc, char**argv){
	double x;
	std::cout << "Enter the angle in degrees: "<<std::endl;
	std::cin >> x;
	double a = radians(x);//calling the function that converts my angle to radians

	std::cout << " The value of sin(x) is: " << sine_x(a, 10) <<std::endl;
	std::cout << " The value of cos(x) is: " << cosine_x(a, 10) <<std::endl;
	std::cout << " The value of tan(x) is: " << tangent_x(a, 10) <<std::endl;

    return 0;
}

//factorial function
double factorial(int n){
    double result=1.0;
	for(int i=2;i<=n;i++){
		result= result*i;
	}
		 return result;
}

//Power function
int power(int num, int to_pow){
     int res = 1;
	 	int i;
	for(i=0;i<to_pow;i++)
	{
		res = res*num;
	}
	return res;
}

//Radians function
double radians(double x){
	const float pi = 3.141592654;
	double rad = x * pi / 180;

return rad;
}

//cosine function
double cosine_x(double x, int limit = 10){
		 double cos_x = 0.0;
		 for(int n = 0; n < limit ; n++){
			double calcul = (power(-1,n) * power(x,2*n)) / factorial(2*n);
			cos_x = cos_x + calcul;
		}
		return cos_x;
}

//sine function
double sine_x(double x, int limit = 10){
		 double sin_x = 0.0;
		 for(int n = 0; n < limit ; n++){
		  double calcul = (power(-1,n) * power(x,2*n + 1)) / factorial(2*n + 1);
			sin_x = sin_x + calcul;
		}
		return sin_x;
}

//tangent function
double tangent_x(double x, int limit = 10){
		double tan_x = sine_x(x, limit) / cosine_x(x, limit); 
		return tan_x;
}

