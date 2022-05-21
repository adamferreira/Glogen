#ifndef __BOUNDED_ENGINE
#define __BOUNDED_ENGINE

#include <functional> // std::function
#include <limits> // std::numeric_limits
#include <vector>

#include "GlogenEngine.h"

namespace glogen {
    
template<class float_t, class reward_t>
// BoundedGlogen
class BoundedEngine : public GlogenEngine<float_t, reward_t> {
protected:

    // Variables domain ranges
    std::vector<float_t> _var_ubs;
    std::vector<float_t> _var_lbs;

    //

public:
    BoundedEngine(size_t nvar):
        _var_lbs(nvar, std::numeric_limits<float_t>::lowest()),
        _var_ubs(nvar, std::numeric_limits<float_t>::max()) 
        {

        }

};

}
#endif