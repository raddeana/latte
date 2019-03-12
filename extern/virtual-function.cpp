/**
 * 虚函数
 */
class Shape {
protected:
    int width, 
        height;
public:
    Shape (int a = 0, int b = 0) {
        width = a;
        height = b;
    }
    
    virtual int area () {
        cout << "parent class area:" <<endl;
        return 0;
    }
};

/**
 * 纯虚函数
 */
class Shape {
protected:
    int width, 
        height;

public:
    Shape (int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    // pure virtual function
    virtual int area() = 0;
};
