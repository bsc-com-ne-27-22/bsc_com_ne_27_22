#pragma once

class Rectangle{
    private:
       float length;
       float width;

    public:
       Rectangle();
       Rectangle(float l, float w); //constructor for overloading
       ~Rectangle();


       void setLength(float l);
       void setWidth(float w);

       float getLength() const;
       float getWidth() const;

       float calculateArea() const;
};