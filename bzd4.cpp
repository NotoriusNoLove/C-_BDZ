#include <iostream>
#include <cmath>

class Triangle
{
private:
    double side1, side2, side3;
    double angle1, angle2, angle3;

public:
    // Конструктор
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3)
    {
        // Рассчитываем углы по формуле косинусов
        angle1 = std::acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
        angle2 = std::acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
        angle3 = std::acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
    }

    // Методы получения и изменения полей данных
    double getSide1() const
    {
        return side1;
    }

    double getSide2() const
    {
        return side2;
    }

    double getSide3() const
    {
        return side3;
    }

    void setSide1(double s)
    {
        side1 = s;
    }

    void setSide2(double s)
    {
        side2 = s;
    }

    void setSide3(double s)
    {
        side3 = s;
    }

    // Методы вычисления площади, периметра и высот
    double calculateArea() const
    {
        double p = (side1 + side2 + side3) / 2;                        // Полупериметр
        return std::sqrt(p * (p - side1) * (p - side2) * (p - side3)); // Формула Герона
    }

    double calculatePerimeter() const
    {
        return side1 + side2 + side3;
    }

    double calculateHeight() const
    {
        double p = (side1 + side2 + side3) / 2;                                    // Полупериметр
        return 2 * std::sqrt(p * (p - side1) * (p - side2) * (p - side3)) / side1; // Формула высоты
    }

    // Метод определения вида треугольника
    std::string determineType() const
    {
        if (side1 == side2 && side2 == side3)
        {
            return "Равносторонний";
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            return "Равнобедренный";
        }
        else if (angle1 == M_PI / 2 || angle2 == M_PI / 2 || angle3 == M_PI / 2)
        {
            return "Прямоугольный";
        }
        else
        {
            return "Обычный";
        }
    }
};

int main()
{
    Triangle triangle(3, 4, 5);
    std::cout << "Площадь треугольника: " << triangle.calculateArea() << std::endl;
    std::cout << "Периметр треугольника: " << triangle.calculatePerimeter() << std::endl;
    std::cout << "Высота треугольника: " << triangle.calculateHeight() << std::endl;
    std::cout << "Вид треугольника: " << triangle.determineType() << std::endl;

    return 0;
}
