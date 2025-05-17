class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle();
    Rectangle(float newLength, float newWidth);  // Overloaded constructor
    ~Rectangle(); 
    void setLength(float newLength);
    void setWidth(float newWidth);
    float getLength() const;
    float getWidth() const;
    float getArea() const;
};