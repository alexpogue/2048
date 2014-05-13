#include "Color.h"
#include "Event.h"
#include "Graphics.h"

int main() {
    Color clearColor(255, 255, 255);
    Graphics g;
    g.init(800, 600, "2048!");
    Color drawColor(0, 0, 0);

    while(g.isOpen()) {
        Event event;
        while(g.pollEvent(event)) {
            if(event.type == Event::Closed) {
                g.close();
            }
        } 
        g.clear(clearColor);
        g.drawRect(100, 100, 100, 100, drawColor);
        g.display();
    }
    return 0;
}
