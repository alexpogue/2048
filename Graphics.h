#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>

class Color;

class Graphics {
    private:
        sf::RenderWindow window;
        bool open;
    public:
        Graphics();
        Graphics(Color& c);
        void init(int w, int h, const std::string& title);
        void close();
        void drawRect(int x, int y, int w, int h, const Color& c);
        void clear(const Color& c);
        void display();
        bool isOpen();
        // replace with own event object
        bool pollEvent(sf::Event& event);
};

#endif
