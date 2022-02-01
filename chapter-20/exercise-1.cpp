// Exercise 1
// Extend the telephone directory example in this lesso nto find a persons name
// from their phone number, without changing th e struct ContactItem.

#include <iostream>
#include <set>
#include <string>

using namespace std;

enum MenuOptionSelection {
  InsertContactsetEntry = 0,
  DisplayEntries = 1,
  FindNumber = 2,
  EraseEntry = 3,
  QuitApplication = 4,
};

struct ContactItem {
  string strContactsName;
  string strPhoneNumber;
  // Constructor
  ContactItem(const string &strName, const string &strNumber) {
    strContactsName = strName;
    strPhoneNumber = strNumber;
  }

  bool operator==(const ContactItem &itemToCompare) const {
    return (itemToCompare.strContactsName == this->strContactsName);
  }

  bool operator<(const ContactItem &itemToCompare) const {
    return (this->strContactsName < itemToCompare.strContactsName);
  }
};

struct FindContactGivenNumber {
  bool(const ContactItem &C1, const ContactItem &C2) const {
    return (C1.strPhoneNumber < C2.strPhoneNumber);
  }
};

int ShowMenu();
ContactItem GetContactInfo();
void DisplayContactset(const set<ContactItem> &setContacts);
void FindContact(const set<ContactItem> &setContacts);
void EraseContact(set<ContactItem> &setContacts);

int main() {
  set<ContactItem, FindContactGivenNumber> setContacts;
  int nUserSelection = InsertContactsetEntry;

  while ((nUserSelection = ShowMenu()) != (int)QuitApplication) {
    switch (nUserSelection) {
    case InsertContactsetEntry:
      setContacts.insert(GetContactInfo());
      cout << "Contact set updated!" << endl;
      break;

    case DisplayEntries:
      DisplayContactset(setContacts);
      break;

    case FindNumber:
      FindContact(setContacts);
      break;

    case EraseEntry:
      EraseContact(setContacts);
      break;
    default:
      cout << "Invalid Input " << nUserSelection
           << "Please choose an option between 0 and 4" << endl;
      break;
    }
  }

  cout << "Quiting Bye!" << endl;

  return 0;
}

void DisplayContactset(const set<ContactItem> &setContacts) {
  cout << "*** Displaying contact information ***" << endl;
  cout << "There are " << setContacts.size() << " entries" << endl;
  cout << endl;
  set<ContactItem>::const_iterator iContact;
  for (iContact = setContacts.begin(); iContact != setContacts.end();
       ++iContact) {
    cout << "Name: " << iContact->strContactsName
         << " Number:" << iContact->strPhoneNumber << endl;
    cout << endl;
  }

  cout << endl;
}

ContactItem GetContactInfo() {
  cout << "*** Insert Contact INformation *** " << endl << endl;
  string strName;
  cout << " Please enter the contacts name" << endl;
  cout << "> ";
  cin >> strName;

  string strPhoneNumber;
  cout << "Please enter the contacts phone number" << endl;
  cout << "> ";
  cin >> strPhoneNumber;

  return ContactItem(strName, strPhoneNumber);
}

int ShowMenu() {
  cout << "*** What would you like to do next? ***" << endl << endl;
  cout << "Enter 0 to add a new contact" << endl;
  cout << "Enter 1 to Display all contacts" << endl;
  cout << "Enter 2 to find a contact" << endl;
  cout << "Enter 3 to erase a contact" << endl;
  cout << "Enter 4 to Quit" << endl;
  cout << "> ";

  int selection;
  cin >> selection;
  cout << endl;

  return selection;
}

void FindContact(const set<ContactItem> &setContacts) {
  cout << "*** Find a Contact *** " << endl << endl;
  cout << "Whose number do you want to find?" << endl;
  cout << "> ";

  string strName;
  cin >> strName;

  set<ContactItem>::const_iterator iContactFound =
      setContacts.find(ContactItem(strName, ""));
  if (iContactFound != setContacts.end()) {
    cout << strName << "'s phone number is " << iContactFound->strPhoneNumber
         << endl;
  } else {
    cout << strName << "  was not found in the collection" << endl;
  }
  cout << endl;

  return;
}

void EraseContact(set<ContactItem> &setContacts) {
  cout << "*** Eraseing a Contact *** " << endl << endl;
  cout << "Please enter the name of the contact to erase" << endl;
  cout << "> ";

  string strName;
  cin >> strName;

  size_t nErased = setContacts.erase(ContactItem(strName, ""));

  if (nErased > 0) {
    cout << strName << "'s contact was erased" << endl;
  } else {
    cout << "No contact found with the name " << strName << endl;
  }
  cout << endl;
}
