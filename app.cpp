#include "imgui.h"
#include "app.h"

App::App(Db &db):
db(db)
{
  entities = db.getEntities();
}

void App::render() {
    ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

    ImGui::BeginChild("scroll", ImVec2(0, ImGui::GetFontSize() * 10));
    for (auto entity : entities)
        ImGui::Text("%s %d", entity.name.c_str(), entity.age);
    ImGui::EndChild();
    static char name[128] = "";
    ImGui::InputText("Input name", name, IM_ARRAYSIZE(name));
    static int age;
    ImGui::InputInt("Input age", &age);
    if (ImGui::Button("Save")) {
        // TODO make this async
        Entity entity { 0, name, age };
        db.addEntity(entity);
        entities = db.getEntities();
    }
    ImGui::End();
}
