#include "Polymoph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{
}

const ASpell *Polymorph::CloneASpell()
{
    return new Polymorph();
}

const std::unique_ptr<ASpell> Polymorph::CloneASpell2()
{
    return std::make_unique<Polymorph>();
}
