#include "Warlock.hpp"

int main()
{

    /*SUB0.txt
    Warlock const richard("Richard", "Master of Magma!");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock *jack = new Warlock("Jack", "the Long!");
    jack->introduce();
    jack->setTitle("the Mighty!");
    jack->introduce();

    delete jack;
    */

    /*SUB1.txt
     Warlock richard("Richard", "the Titled!");

     Dummy bob;
     Fwoosh *fwoosh = new Fwoosh();

     richard.learnSpell(fwoosh);

     richard.introduce();
     richard.launchSpell("Fwoosh", bob);

     richard.forgetSpell("Fwoosh");
     richard.launchSpell("Fwoosh", bob);
     */

    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    Brickwall model1;

    Polymorph *polymorph = new Polymorph();
    TargetGenerator tarGen;

    tarGen.learnTargetType(&model1);
    richard.learnSpell(polymorph);

    Fireball *fireball = new Fireball();

    richard.learnSpell(fireball);

    ATarget *wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

    richard.introduce();
    richard.launchSpell("Polymorph", *wall);
    richard.launchSpell("Fireball", *wall);

    return (0);
};