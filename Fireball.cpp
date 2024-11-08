#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{
}

const ASpell *Fireball::CloneASpell()
{
    return new Fireball();
}

const std::unique_ptr<ASpell> Fireball::CloneASpell2()
{
    return std::make_unique<Fireball>();
}
