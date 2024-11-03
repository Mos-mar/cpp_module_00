#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"
#include <memory>

class Dummy : public ATarget
{
private:
public:
    Dummy();
    virtual const ATarget *CloneATarget() override;
    virtual const std::unique_ptr<ATarget> CloneATarget2() override;
};

#endif // Dummy_HPP