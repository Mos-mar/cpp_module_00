#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"
#include <memory>

class Brickwall : public ATarget
{
private:
public:
    Brickwall();
    virtual const ATarget* CloneATarget() override;
    virtual const std::unique_ptr<ATarget> CloneATarget2() override;
};

#endif // Dummy_HPP