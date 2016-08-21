#pragma once
#include "Builder.h"
class Builder_Two :
	public Builder
{
public:
	Builder_Two();
	~Builder_Two();
	virtual void build_head(Product* product);
	virtual void build_body(Product* product);
	virtual void build_foot(Product* product);
};

