#pragma once
#include "ObjectiveFunctions/Basic.h"

class FixAllVertices : public ObjectiveFunctions::Basic
{
public:
	FixAllVertices(const Eigen::MatrixXd& V, const Eigen::MatrixX3i& F);
	~FixAllVertices();
	
	virtual double value(Cuda::Array<double>& curr_x, const bool update) override;
	virtual void gradient(Cuda::Array<double>& X, const bool update) override;
};