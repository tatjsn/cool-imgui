#ifndef APP
#define APP
#include <iostream>
#include "db.h"

class App {
  private:
    Db &db;
    std::list<Entity> entities;

  public:
    App(Db &db);
    void render();
};
#endif