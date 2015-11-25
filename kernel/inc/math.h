#ifndef MATH_H
#define MATH_H

// We;; obviously fifty digits of PI isn't accurate enough..
#ifndef PI
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989
#endif

#ifndef E
#define E 2.71828182845904523536028747135266249775724709369995
#endif

//Square root function
double sqrt(double a);

//power of ten
double powerOfTen(int num);

//convert number to a different base
int convertBase(int num, int base);

//power of n
//double pow(double num, double);

//return result of rounding 5 -> +1;;4 -> trunc
long round(double);

long ceil(double);

long floor(double);

double abs(double);

#endif
