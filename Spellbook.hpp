#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "Aspell.hpp"
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
class Spellbook
{
private:
    std::unordered_map<std::string, Aspell *> bookOfSpells;

public:
    Spellbook();
    Spellbook(Spellbook &) = delete;
    Spellbook &operator=(const Spellbook &) = delete;
    void learnSpell(Aspell *spell);
    void forgetSpell(const std::string &spellToForget);
    Aspell *createSpell(const std::string &spelltoCreate);
};

#endif // Spellbook_HPP