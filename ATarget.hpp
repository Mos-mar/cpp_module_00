#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include <memory>
#include "ASpell.hpp"

class ASpell; // Forward declaration
class ATarget
{
private:
    std::string name;
    std::string type;

public:
    ATarget(std::string type);
    const std::string &getTargetName() const;
    const std::string &getTargetType() const;
    virtual const ATarget *CloneATarget() = 0;
    virtual const std::unique_ptr<ATarget> CloneATarget2() = 0;
    const void getHitBySpell(const ASpell &spell) const;
};

#endif // ATarget_HPP