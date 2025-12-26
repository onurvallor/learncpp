#include <iostream>
namespace MonsterType {

enum MonsterType {
  orc,
  goblin,
  troll,
  ogre,
  skeleton,
};

}

int main() {
  MonsterType::MonsterType monster{MonsterType::troll};

  if (monster == MonsterType::troll) {
    std::cout << "Monster is troll" << "\n";
  } else {
    std::cout << "Monster is something else \n";
  }

  return 0;
}
