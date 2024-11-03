#include "Warlock.hpp"

int main()
{
    /*
    Warlock const richard("Richard", "Master of Magma!");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock *jack = new Warlock("Jack", "the Long!");
    jack->introduce();
    jack->setTitle("the Mighty!");
    jack->introduce();

    delete jack;
    */
    Warlock richard("Richard", "the Titled!");

    Dummy bob;
    Fwoosh *fwoosh = new Fwoosh();

    richard.learnSpell(fwoosh);

    richard.introduce();
    richard.launchSpell("Fwoosh", bob);

    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);

    return (0);
};