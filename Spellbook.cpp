#include "Spellbook.hpp"

Spellbook::Spellbook()
{
}

void Spellbook::learnSpell(ASpell *spell)
{
    if (spell) bookOfSpells[spell->getSpellName()] = spell;
}

void Spellbook::forgetSpell(const std::string &spellToForget)
{
    auto itBook = bookOfSpells.find(spellToForget);
    if (itBook != bookOfSpells.end())
    {
        delete itBook->second;
        bookOfSpells.erase(spellToForget);
    }
}

ASpell *Spellbook::createSpell(const std::string &spelltoCreate)
{

    if (bookOfSpells[spelltoCreate])
    {
        bookOfSpells[spelltoCreate]->CloneASpell();
    }
}