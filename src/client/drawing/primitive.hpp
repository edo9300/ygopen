#ifndef DRAWING_PRIMITIVE_HPP
#define DRAWING_PRIMITIVE_HPP
#include "types.hpp"

namespace Drawing
{

namespace Detail
{

class IPrimitive
{
public:
	virtual void SetVertices(const Vertices& vertices) = 0;
	virtual void SetColors(const Colors& colors) = 0;
// 	virtual void SetTransform() = 0;
	
	virtual void Draw() = 0;
};

} // Detail

} // Drawing
#endif // DRAWING_PRIMITIVE_HPP