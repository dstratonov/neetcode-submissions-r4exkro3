class Coffee {
public:
    virtual double getCost() = 0; // Pure virtual function makes this class abstract
};

class SimpleCoffee : public Coffee {
public:
    double getCost() override {
        return 1.1;
    }
};

class CoffeeDecorator : public Coffee {
protected:
    Coffee* decoratedCoffee;

public:
    CoffeeDecorator(Coffee* coffee) : decoratedCoffee(coffee) {}

    double getCost() override {
        return decoratedCoffee->getCost();
    }
};

class MilkDecorator : public CoffeeDecorator {
private:
    Coffee* coffee;
public:
    MilkDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {
        this->coffee = coffee;
    }

    double getCost() override {
        return coffee->getCost() + 0.5;
    }
};

class SugarDecorator : public CoffeeDecorator {
private:
    Coffee* coffee;
public:
    SugarDecorator(Coffee* coffee) : CoffeeDecorator(coffee){
        this->coffee = coffee;
    }

    double getCost() override {
        return coffee->getCost() + 0.2;
    }
};

class CreamDecorator : public CoffeeDecorator {
private:
    Coffee* coffee;
public:
    CreamDecorator(Coffee* coffee) : CoffeeDecorator(coffee){
        this->coffee = coffee;
    }

    double getCost() override {
        return coffee->getCost() + 0.7;
    }
};
