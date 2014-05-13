#include <SFML/Graphics.hpp>
#include "Color.h"
#include "Graphics.h"

int main() {
    Color clearColor(255, 255, 255);
    Graphics g;
    g.init(800, 600, "2048!");
    Color drawColor(0, 0, 0);

    while(g.isOpen()) {
        sf::Event event;
        while(g.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                g.close();
            }
        } 
        g.clear(clearColor);
        g.drawRect(100, 100, 100, 100, drawColor);
        g.display();
    }
    return 0;
}
