#ifndef __GLOGEN_CONTEXT
#define __GLOGEN_CONTEXT

#include <functional> // std::function
#include <limits> // std::numeric_limits
#include <vector>

namespace glogen {
    
template<class float_t, class reward_t>
class GlogenContext {
protected:
    // Variables domain ranges
    std::vector<float_t> _var_ubs;
    std::vector<float_t> _var_lbs;

    //

public:
    GlogenContext(size_t nvar):
        _var_lbs(nbvar, std::numeric_limits<float_t>::lowest()),
        _var_ubs(nbvar, std::numeric_limits<float_t>::max()) 
        {
            
        }

};

}
#endif