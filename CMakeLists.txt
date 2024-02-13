cmake_minimum_required(VERSION 3.21)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(DesignPatterns main.cpp Singleton TemplateMethod Prototype Strategy State Proxy Observer Memento Mediator Iterator Flyweight FactoryMethod Facade Decorator Composite Command ChainOfResponsability Builder Bridge Adapter AbstractFactory)
