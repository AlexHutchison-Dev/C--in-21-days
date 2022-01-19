// Listing 14.1 Dynamic astinf that helps to tell if an Animal Object is a Cat
// or a Dog

#include <iostream>

using namespace std;

class CAnimal {
public:
  virtual void Speak() = 0;
};

class CDog : public CAnimal {
public:
  void WagTail() { cout << "Dog: I wagged my tail!" << endl << endl; }
  void Speak() { cout << "Dog: Bow Wow!" << endl << endl; }
};

class CCat : public CAnimal {
public:
  void CatchMice() { cout << "Cat: I caught a mouse!" << endl << endl; }
  void Speak() { cout << "Cat: Meaow!" << endl << endl; }
};

void DetermineType(CAnimal *pAnimal);

int main() {
  // pAnimal points to a Dog Object
  CAnimal *pAnimal1 = new CDog();

  // pAnimal2 points to a Cat Object
  CAnimal *pAnimal2 = new CCat();

  cout << "Using synamic _cast to determine the type of Animal1" << endl
       << endl;
  DetermineType(pAnimal1);

  cout << "Using synamic _cast to determine the type of Animal2" << endl
       << endl;
  DetermineType(pAnimal2);

  // Use virtual function overridden by sub class to prove type
  cout << "verifying type: asking animal 1 to speak!" << endl << endl;
  pAnimal1->Speak();

  cout << "verifying type: asking animal 2 to speak!" << endl << endl;
  pAnimal2->Speak();

  return 0;
}

void DetermineType(CAnimal *pAnimal) {
  CDog *pDog = dynamic_cast<CDog *>(pAnimal);

  if (pDog) {
    cout << "The animal is a dog!" << endl << endl;

    // Call the derived class function
    pDog->WagTail();
  }

  CCat *pCat = dynamic_cast<CCat *>(pAnimal);
  if (pCat) {
    cout << "The animal is a cat!" << endl << endl;

    // Call the derived class function
    pCat->CatchMice();
  }
}
