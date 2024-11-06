#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

const ATarget* Dummy::CloneATarget()
{
    return new Dummy();
}

const std::unique_ptr<ATarget> Dummy::CloneATarget2()
{
    return  std::make_unique<Dummy>();
}
