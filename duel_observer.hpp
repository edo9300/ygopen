#ifndef __DUEL_OBSERVER_HPP__
#define __DUEL_OBSERVER_HPP__
#include "util/buffer_manipulator.hpp"

class DuelObserver
{
public:
	virtual void OnNotify(void* buffer, size_t length) = 0;
};
#endif // __DUEL_OBSERVER_HPP__
