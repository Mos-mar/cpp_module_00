#include "Brickwall.hpp"

Brickwall::Brickwall() : ATarget("Inconspicuous Red-brick Wall")
{
}

const ATarget *Brickwall::CloneATarget()
{
    return new Brickwall();
}

const std::unique_ptr<ATarget> Brickwall::CloneATarget2()
{
    return std::make_unique<Brickwall>();
}
