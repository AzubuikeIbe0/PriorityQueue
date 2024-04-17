#include "Compare.h"
#include "Star.h"

template<typename T>
inline bool Compare::operator()(const T& a, const T& b) const
{
    // Compare the length of 'a' and 'b'
    bool compared = a.size() > b.size();

    return compared;
}
