#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

const ASpell *Fwoosh::CloneASpell()
{
    return new Fwoosh();
}

const std::unique_ptr<ASpell> Fwoosh::CloneASpell2()
{
    return std::make_unique<Fwoosh>();
}
