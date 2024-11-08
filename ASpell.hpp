#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include <memory>
#include "ATarget.hpp"

class ATarget; // forward declaration

class ASpell
{
protected:
    std::string spellName;
    std::string effects;

public:
    ASpell(std::string spellName, std::string effectName);
    const std::string getSpellName() const;
    const std::string getEffect() const;
    virtual const ASpell *CloneASpell() = 0;
    virtual const std::unique_ptr<ASpell> CloneASpell2() = 0;
    const void launch(const ATarget &target);
};

#endif // Aspell_HPP