#include <iostream>
using namespace std;

class Vector {
private:
    int n;
    float *v;

public:
    // 1. Constructor không tham số
    Vector() {
        n = 0;
        v = NULL;
    }

    // 2. Constructor 1 tham số
    Vector(int n) {
        this->n = n;
        v = new float[n];
        for (int i = 0; i < n; i++)
            v[i] = 0;
    }

    // 3. Constructor 2 tham số
    Vector(int n, float value) {
        this->n = n;
        v = new float[n];
        for (int i = 0; i < n; i++)
            v[i] = value;
    }

    // 4. Copy constructor
    Vector(const Vector &other) {
        n = other.n;
        v = new float[n];
        for (int i = 0; i < n; i++)
            v[i] = other.v[i];
    }

    // 5. Toán tử gán =
    Vector& operator=(const Vector &other) {
        if (this != &other) {
            delete[] v;
            n = other.n;
            v = new float[n];
            for (int i = 0; i < n; i++)
                v[i] = other.v[i];
        }
        return *this;
    }

    // 6. Hàm add (nhập dữ liệu)
    void add() {
        cout << "Nhap " << n << " phan tu:\n";
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    // 7. Hàm in
    void print() {
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    // 8. Destructor
    ~Vector() {
        delete[] v;
    }
};

int main() {
    // Cách 1: constructor rỗng + nhập
    Vector v1(3);
    v1.add();

    // Cách 2: constructor 2 tham số
    Vector v2(3, 5); // [5 5 5]

    // Cách 3: copy constructor
    Vector v3 = v1;

    cout << "\nVector 1: "; v1.print();
    cout << "Vector 2: "; v2.print();
    cout << "Vector 3 (copy v1): "; v3.print();

    return 0;
}
