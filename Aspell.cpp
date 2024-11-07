#include "Aspell.hpp"

Aspell::Aspell(std::string spellName, std::string effectName) : spellName(spellName), effects(effectName)
{
}

const std::string Aspell::getSpellName() const
{
    return this->spellName;
}

const std::string Aspell::getEffect() const
{
    return this->effects;
}

const void Aspell::launch(const ATarget &target)
{
    // std::cout << "const void Aspell::launch : spell name : " << this->getSpellName() << std::endl;
    target.getHitBySpell(*this);
}
