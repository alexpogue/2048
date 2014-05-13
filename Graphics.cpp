#include <SFML/Graphics.hpp>
#include "Graphics.h"
#include "Color.h"

Graphics::Graphics() {}

void Graphics::init(int w, int h, const std::string& title) {
    window.create(sf::VideoMode(w, h), title);
    open = true;
}

bool Graphics::isOpen() {
    return open;
}

void Graphics::close() {
    window.close();
    open = false;
}

void Graphics::drawRect(int x, int y, int w, int h, const Color& c) {
    sf::RectangleShape rect(sf::Vector2f(w, h));
    rect.setPosition(x, y);
    rect.setFillColor(sf::Color(c.r, c.g, c.b));
    window.draw(rect);
}

void Graphics::clear(const Color& c = Color(0, 0, 0)) {
    window.clear(sf::Color(c.r, c.g, c.b));
}

void Graphics::display() {
    window.display();
}

bool Graphics::pollEvent(sf::Event& event) {
    return window.pollEvent(event);
}
