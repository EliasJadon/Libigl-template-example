#pragma once
#include "ObjectiveFunctions/Basic.h"

class SDenergy : public ObjectiveFunctions::Basic {
public:
	Cuda::Array<double_3> D1d, D2d;
	Eigen::VectorXd restShapeArea;

	SDenergy(const Eigen::MatrixXd& V, const Eigen::MatrixX3i& F);
	~SDenergy();
	
	virtual double value(Cuda::Array<double>& curr_x, const bool update);
	virtual void gradient(Cuda::Array<double>& X, const bool update);
};