#include "Product.h"
#ifndef _BUILDER_H_
#define _BUILDER_H_

class Builder
{
public:
	Builder(){};
	virtual ~Builder(){};
	virtual void build_head(Product* product)=0;
	virtual void build_body(Product* product) = 0;
	virtual void build_foot(Product* product) = 0;
};
#endif