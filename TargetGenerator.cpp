#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

void TargetGenerator::learnTargetType(ATarget *learnTar)
{
    knownTargets.push_back(learnTar);
}

void TargetGenerator::forgetTargetType(std::string const &forgetTar)
{
    knownTargets.erase(std::remove_if(knownTargets.begin(), knownTargets.end(),
                                      [forgetTar](ATarget *theTarget) { return theTarget->getTargetName() == forgetTar; }), //lambda
                       knownTargets.end());
}

ATarget* TargetGenerator::createTarget(std::string const &createTar)
{
     for(const auto& modelX : knownTargets)
     {
        if(modelX->getTargetType() == createTar)
        {
           return modelX;
        }
     }
    return nullptr; 
}
