#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
    public:
        Component(double, double);
        virtual ~Component();
        double getX() const;
        double getY() const;
        void printComponent() const;

    protected:

    private:
        double X;
        double Y;
};

#endif // COMPONENT_H
