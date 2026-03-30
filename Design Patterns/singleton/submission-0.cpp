class Singleton {
private:

    static Singleton* _singleton;
    string _value = "";

    Singleton() {}

public:

    static Singleton *getInstance() {
        if (Singleton::_singleton == nullptr){
            Singleton::_singleton = new Singleton();
            return Singleton::_singleton;
        }
        return Singleton::_singleton;
    }

    string getValue() {
        return _value;
    }

    void setValue(string &value) {
        _value = value;
    }
};

Singleton* Singleton::_singleton = nullptr;
