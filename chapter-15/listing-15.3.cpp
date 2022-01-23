// Listing 15.3 - Demonstrates usage of template class defined in listing 15.3

template <typename T1 = int, typename T2 = double>

class CHoldsPair {
private:
  T1 m_value1;
  T2 m_value2;

public:
  // Constructor that initialises member variables
  CHoldsPair(const T1 &value1, const T2 &value2) {
    m_value1 = value1;
    m_value2 = value2;
  };

  // Acessor functions
  const T1 &GetFirstValue() { return m_value1; };

  const T2 &GetSeccondValue() { return m_value2; };
};
