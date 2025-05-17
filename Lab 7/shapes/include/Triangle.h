#pragma once
namespace shapes {
    class Triangle {
    private:
        float base;
        float height;
    public:
        Triangle();
        Triangle(float b, float h);
        ~Triangle();
        void setBase(float newBase);
        void setHeight(float newHeight);
        float getBase() const;
        float getHeight() const;
    };
}
