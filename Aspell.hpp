#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include <memory>
#include "ATarget.hpp"

class ATarget; // forward declaration

class Aspell
{
protected:
    std::string spellName;
    std::string effects;

public:
    Aspell(std::string spellName, std::string effectName);
    const std::string getSpellName() const;
    const std::string getEffect() const;
    virtual const Aspell* CloneAspell() = 0;
    virtual const std::unique_ptr<Aspell> CloneAspell2() = 0;
    const void launch(const ATarget &target);
};

#endif // Aspell_HPP