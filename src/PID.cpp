#include <iostream>
#include <sstream>
#include <string>

#include "PID.h"


using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

// void PID::Init(double Kp, double Ki, double Kd) {
void PID::Init(double kp, double ki, double kd) {

	this->Kp = kp;
	this->Ki = ki;
	this->Kd = kd;

	std::cout << "PID controller initialized with Gains Kp = "<< Kp << " Ki = " << Ki << " Kd = " << Kd << std::endl;
}

void PID::UpdateError(double cte) {

	this->d_error = cte - this->p_error;
	this->i_error += cte;
	this->p_error = cte;
	std::cout<< "Errors are updated e_Kp = "<< this->p_error << " e_Ki = " << this->i_error << " e_Kd = " << this->d_error << std::endl;
}

double PID::TotalError() {

	return (-(this->Kp * this->p_error) - (this->Ki * this->i_error) - (this->Kd * this->d_error));
}



