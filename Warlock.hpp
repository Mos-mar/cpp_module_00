#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "Aspell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Polymoph.hpp"
#include "Fireball.hpp"
#include "TargetGenerator.hpp"
#include "Brickwall.hpp"
#include "Spellbook.hpp"

class Warlock
{

private:
    std::string name;
    std::string title;
    Spellbook *mySpellBook;

public:
    Warlock(std::string name, std::string title);
    Warlock(Warlock &) = delete;
    Warlock &operator=(const Warlock &) = delete;

    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &EnterName);
    void introduce() const;
    void learnSpell(Aspell *learnThisSpell);
    void forgetSpell(std::string spellToForget);
    void launchSpell(std::string spellName, ATarget &currTarget);
    ~Warlock();
};

#endif