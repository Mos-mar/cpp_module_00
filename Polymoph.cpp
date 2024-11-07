#include "Polymoph.hpp"

Polymorph::Polymorph() : Aspell("Polymorph", "turned into a critter")
{
}

const Aspell *Polymorph::CloneAspell()
{
    return new Polymorph();
}

const std::unique_ptr<Aspell> Polymorph::CloneAspell2()
{
    return std::make_unique<Polymorph>();
}
