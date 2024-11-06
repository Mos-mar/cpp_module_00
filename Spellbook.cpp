#include "Spellbook.hpp"

Spellbook::Spellbook()
{
}

void Spellbook::learnSpell(Aspell *spell)
{
    if(spell) bookOfSpells.push_back(spell);
}

void Spellbook::forgetSpell(const std::string &spellToForget)
{
    bookOfSpells.erase(
        std::remove_if(bookOfSpells.begin(), bookOfSpells.end(),
                       [spellToForget](Aspell *spell)
                       { return spell->getSpellName() == spellToForget; }), // lambda
        bookOfSpells.end());
}

Aspell* Spellbook::createSpell(const std::string &spelltoCreate)
{
    Aspell* createThisSpell;
    for (const auto &spell : bookOfSpells)
    {
        
        if (spell->getSpellName() == spelltoCreate)
        {
          //std::cout << "Aspell* Spellbook::createSpell returns : " << spell->getSpellName() << ' ' << std::endl;
          spell->CloneAspell();
          break;
        }
    }
}