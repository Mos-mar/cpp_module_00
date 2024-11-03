#include "Warlock.hpp"
using namespace std;
Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    cout << getName() << " : This looks like another boring day." << endl;
}

const std::string &Warlock::getName() const
{
    return this->name;
}

const std::string &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &EnterName)
{
    this->title = EnterName;
}

void Warlock::introduce() const
{
    cout << getName() << ": " << "I am " << getName() << ", " << getTitle() << endl;
}

void Warlock::learnSpell(Aspell *learnThisSpell)
{
    knownSpells.push_back(learnThisSpell);
}

void Warlock::forgetSpell(std::string spellToForget)
{
    knownSpells.erase(
        std::remove_if(knownSpells.begin(), knownSpells.end(),
                       [spellToForget](Aspell *spell){ return spell->getSpellName() == spellToForget; }), // lambda
        knownSpells.end());
}

void Warlock::launchSpell(std::string spellName, ATarget &currTarget)
{
    for (const auto &i : knownSpells)
        currTarget.getHitBySpell(*i);
}

Warlock::~Warlock()
{
    cout << getName() << " : My job here is done!" << endl;
}
