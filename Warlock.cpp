#include "Warlock.hpp"
using namespace std;
Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    cout << getName() << " : This looks like another boring day." << endl;
    mySpellBook = new Spellbook();
}

const std::string& Warlock::getName() const
{
    return this->name;
}

const std::string& Warlock::getTitle() const
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
    if (mySpellBook && learnThisSpell)
    {
        mySpellBook->learnSpell(learnThisSpell);
    }
}

void Warlock::forgetSpell(std::string spellToForget)
{
    if(mySpellBook)
    {
       mySpellBook->forgetSpell(spellToForget);
    }
}

void Warlock::launchSpell(std::string spellName, ATarget &currTarget)
{
 
     if (mySpellBook)
    {
        Aspell* spell = mySpellBook->createSpell(spellName);
        //std::cout << spell->getSpellName();
        if (spell)
        {
            //std::cout << "my spell exists !!" << std::endl;
            spell->launch(currTarget);
        }
    }
    //for(const auto &i : knownSpells)
        //currTarget.getHitBySpell(*i);
}

Warlock::~Warlock()
{
    cout << getName() << " : My job here is done!" << endl;
    delete mySpellBook;
}
