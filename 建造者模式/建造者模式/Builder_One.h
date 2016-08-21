#pragma once
#include "Builder.h"
class Builder_One :
	public Builder
{
public:
	Builder_One();
	~Builder_One();
	virtual void build_head(Product* product);
	virtual void build_body(Product* product);
	virtual void build_foot(Product* product);
};

