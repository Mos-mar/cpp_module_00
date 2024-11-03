#include "ATarget.hpp"
using namespace std;

ATarget::ATarget(std::string type) : type(type)
{
}

const std::string &ATarget::getTargetName() const
{
    return this->name;
}

const std::string &ATarget::getTargetType() const
{
    return this->type;
}

const void ATarget::getHitBySpell(const Aspell &spell) const
{
    cout << this->getTargetType() << " has been " << spell.getEffect() << endl;
    cout << this->getTargetType() << " is the ATarget's type, and " << spell.getEffect() << " is the return of the ASpell's getEffects function. " << endl;
}
