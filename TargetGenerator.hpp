#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ATarget.hpp"
#include "Brickwall.hpp"
#include "Dummy.hpp"
#include <vector>
#include <algorithm>

class TargetGenerator 
{
    private:
    std::vector<ATarget*> knownTargets; //ou un set pour avoir des uniques

    public:
    TargetGenerator();
    TargetGenerator(TargetGenerator&) = delete;
    TargetGenerator& operator=(const TargetGenerator&) = delete;

    void learnTargetType(ATarget* learnTar);
    void forgetTargetType(std::string const & forgetTar);
    ATarget* createTarget(std::string const & createTar);

};

#endif // TargetGenerator_HPP