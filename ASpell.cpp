#include "ASpell.hpp"

ASpell::ASpell(std::string spellName, std::string effectName) : spellName(spellName), effects(effectName)
{
}

const std::string ASpell::getSpellName() const
{
    return this->spellName;
}

const std::string ASpell::getEffect() const
{
    return this->effects;
}

const void ASpell::launch(const ATarget &target)
{
    // std::cout << "const void Aspell::launch : spell name : " << this->getSpellName() << std::endl;
    target.getHitBySpell(*this);
}

