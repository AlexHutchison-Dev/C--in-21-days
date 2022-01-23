// Chapter 15 exercises

// Define a macro that adds two numbers
#define ADD(x, y) (x + y)

// Write a template version of the macro in exercise 1:

template <typename T1 = int, typename T2 = int>

class Add {
public:
  Add(T1 x, T2 y) { return x + y; }
};

// Implement a template function for swap that exchanges two variables

template <typename T1>

T1 swap(T1 x, T1 y) {
  T1 store = y;

  y = x;
  x = store;

  return x, y;
}

// Bug Busters: How would you improve the following macro that computes the
// quarter of an input?

#define QUARTER(x)                                                             \
  x / 4; // This should be improved by surrounding the
         // argument in parentheses eg. (x)and surround the whole expression in
         // prenetheses eg . ((x) / 4)

// Write a simple template class that holds two arrays of types that are defined
// by the class's template parameter list.  THes size of the array is 10, and
// tha template class should have accessor functons that allow for the
// manipulation of array elements.

template <typename T1, typename T2>

class StoreOf2Arrays {

public:
  StoreOf2Arrays(T1 a[10], T2 b[10]) {
    m_arrayA = a;
    m_arrayB = b;
  }

  const T1 &GetArrayA() { return m_arrayA; }
  const T1 &GetArrayB() { return m_arrayB; }
  const T1 &SetArrayA(T1 newArray[10]) { m_arrayA = newArray; }
  const T1 &SetArrayB(T1 newArray[10]) { m_arrayA = newArray; }

private:
  T1 m_arrayA;
  T2 m_arrayB;
};
