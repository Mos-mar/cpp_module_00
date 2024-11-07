#include "Fireball.hpp"

Fireball::Fireball() : Aspell("Fireball", "burnt to a crisp")
{
}

const Aspell *Fireball::CloneAspell()
{
    return new Fireball();
}

const std::unique_ptr<Aspell> Fireball::CloneAspell2()
{
    return std::make_unique<Fireball>();
}
