#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
class Spellbook
{
private:
    std::unordered_map<std::string, ASpell *> bookOfSpells;

public:
    Spellbook();
    Spellbook(Spellbook &) = delete;
    Spellbook &operator=(const Spellbook &) = delete;
    void learnSpell(ASpell *spell);
    void forgetSpell(const std::string &spellToForget);
    ASpell *createSpell(const std::string &spelltoCreate);
};

#endif // Spellbook_HPP