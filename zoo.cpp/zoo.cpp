#include <iostream>
#include <vector>
#include <string>

// Base class Animal
class Animal {
protected:
    std::string name;
    int age;
    std::string species;

public:
    // Constructor
    Animal(std::string _name, int _age, std::string _species)
        : name(_name), age(_age), species(_species) {}

    // Virtual destructor
    virtual ~Animal() {}

    // Getters
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getSpecies() const { return species; }

    // Virtual method for displaying information
    virtual void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
    }
};

// Subclass Hyena
class Hyena : public Animal {
private:
    std::string birthSeason;
    std::string color;
    int weight;
    std::string origin;

public:
    // Constructor
    Hyena(std::string _name, int _age, std::string _birthSeason, std::string _color, int _weight, std::string _origin)
        : Animal(_name, _age, "Hyena"), birthSeason(_birthSeason), color(_color), weight(_weight), origin(_origin) {}

    // Method to display information
    void display() const override {
        std::cout << "Hyena - ";
        Animal::display();
        std::cout << "Birth Season: " << birthSeason << ", Color: " << color << ", Weight: " << weight << " pounds, Origin: " << origin << std::endl;
    }
};

// Subclass Lion
class Lion : public Animal {
private:
    std::string birthSeason;
    std::string color;
    int weight;
    std::string origin;

public:
    // Constructor
    Lion(std::string _name, int _age, std::string _birthSeason, std::string _color, int _weight, std::string _origin)
        : Animal(_name, _age, "Lion"), birthSeason(_birthSeason), color(_color), weight(_weight), origin(_origin) {}

    // Method to display information
    void display() const override {
        std::cout << "Lion - ";
        Animal::display();
        std::cout << "Birth Season: " << birthSeason << ", Color: " << color << ", Weight: " << weight << " pounds, Origin: " << origin << std::endl;
    }
};

// Subclass Tiger
class Tiger : public Animal {
private:
    std::string birthSeason;
    std::string color;
    int weight;
    std::string origin;

public:
    // Constructor
    Tiger(std::string _name, int _age, std::string _birthSeason, std::string _color, int _weight, std::string _origin)
        : Animal(_name, _age, "Tiger"), birthSeason(_birthSeason), color(_color), weight(_weight), origin(_origin) {}

    // Method to display information
    void display() const override {
        std::cout << "Tiger - ";
        Animal::display();
        std::cout << "Birth Season: " << birthSeason << ", Color: " << color << ", Weight: " << weight << " pounds, Origin: " << origin << std::endl;
    }
};

// Subclass Bear
class Bear : public Animal {
private:
    std::string birthSeason;
    std::string color;
    int weight;
    std::string origin;

public:
    // Constructor
    Bear(std::string _name, int _age, std::string _birthSeason, std::string _color, int _weight, std::string _origin)
        : Animal(_name, _age, "Bear"), birthSeason(_birthSeason), color(_color), weight(_weight), origin(_origin) {}

    // Method to display information
    void display() const override {
        std::cout << "Bear - ";
        Animal::display();
        std::cout << "Birth Season: " << birthSeason << ", Color: " << color << ", Weight: " << weight << " pounds, Origin: " << origin << std::endl;
    }
};

// Function to display all animals
void displayAnimals(const std::vector<Animal*>& animals) {
    for (const auto& animal : animals) {
        animal->display();
    }
}

// Function to free memory
void deleteAnimals(std::vector<Animal*>& animals) {
    for (const auto& animal : animals) {
        delete animal;
    }
}

int main() {
    // Vector to store animal instances
    std::vector<Animal*> animals;

    // Populate the vector with instances of different animal subclasses
    // Hyenas
    std::vector<std::string> hyenaNames = {"Shenzi", "Banzai", "Ed", "Zig", "Bud", "Lou", "Kamari", "Wema", "Nne", "Madoa", "Prince Nevarah"};
    for (const auto& name : hyenaNames) {
        animals.push_back(new Hyena(name, 4, "Spring", "Tan", 70, "Friguia Park, Tunisia"));
    }

    // Lions
    std::vector<std::string> lionNames = {"Scar", "Mufasa", "Simba", "Kiara", "King", "Drooper", "Kimba", "Nala", "Leo", "Samson", "Elsa", "Cecil"};
    for (const auto& name : lionNames) {
        animals.push_back(new Lion(name, 6, "Spring", "Tan", 300, "Zanzibar, Tanzania"));
    }

    // Bears
    std::vector<std::string> bearNames = {"Yogi", "Smokey", "Paddington", "Lippy", "Bungle", "Baloo", "Rupert", "Winnie the Pooh", "Snuggles", "Bert"};
    for (const auto& name : bearNames) {
        animals.push_back(new Bear(name, 7, "Spring", "Brown", 320, "Alaska Zoo, Alaska"));
    }

    // Tigers
    std::vector<std::string> tigerNames = {"Tony", "Tigger", "Amber", "Cosimia", "Cuddles", "Dave", "Jiba", "Rajah", "Rayas", "Ryker"};
    for (const auto& name : tigerNames) {
        animals.push_back(new Tiger(name, 3, "Spring", "Gold", 270, "Dhaka, Bangladesh"));
    }

    // Display all animals
    displayAnimals(animals);

    // Free memory
    deleteAnimals(animals);

    return 0;
}
