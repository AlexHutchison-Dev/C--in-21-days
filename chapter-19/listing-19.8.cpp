// Listing 19.8 Alist of struct Objects: Creating a contact list

#include <iostream>
#include <list>
#include <string>

using namespace std;

enum MenuOptions
{
  InsertContactListEntry = 1,
  SortOnName = 2,
  SortOnNumber = 3,
  DisplayEntries = 4,
  EraseEntry = 5,
  QuitContactList = 6,
};

struct ContactListItem
{
  string strContactName;
  string strPhoneNumber;

  // Constructor and Destructor
  ContactListItem(const string &strName, const string &strNumber)
  {
    strContactName = strName;
    strPhoneNumber = strNumber;
  }

  bool operator==(const ContactListItem &itemToCompare) const
  {
    return (itemToCompare.strContactName == this->strContactName);
  }

  bool operator<(const ContactListItem &itemToCompare) const
  {
    return (this->strContactName < itemToCompare.strContactName);
  }
};

void ShowMenu(int *selection);
ContactListItem GetContactInfo();
void DisplayContactList(const list<ContactListItem> &listContacts);
void EraseEntryFromList(list<ContactListItem> &listContacts);
bool Predicate_CheckItemsOnNumber(const ContactListItem &item1,
                                  const ContactListItem &item2);

int main()
{
  list<ContactListItem> listContacts;
  int nUserSelection = 7;

  while ((nUserSelection != (int)QuitContactList))
  {
    ShowMenu(&nUserSelection);
    switch (nUserSelection)
    {
    case InsertContactListEntry:
      listContacts.push_back(GetContactInfo());
      cout << "Contacts list updated!" << endl
           << endl;
      nUserSelection = 7;
      break;

    case SortOnName:
      listContacts.sort();
      DisplayContactList(listContacts);
      nUserSelection = 7;
      break;

    case SortOnNumber:
      listContacts.sort(Predicate_CheckItemsOnNumber);
      DisplayContactList(listContacts);
      nUserSelection = 7;
      break;

    case DisplayEntries:
      DisplayContactList(listContacts);
      nUserSelection = 7;
      break;

    case EraseEntry:
      EraseEntryFromList(listContacts);
      DisplayContactList(listContacts);
      nUserSelection = 7;
      break;

    case QuitContactList:
      cout << "Ending application, bye!" << endl;
      break;

    default:
      cout << "Invalid Input " << nUserSelection << ".";
      cout << "Choose an Otion between 1 and 5." << endl;
      nUserSelection = 7;
      break;

      cout << "Quiting, Bye!" << endl;

      return 0;
    }
  }
}

void ShowMenu(int *selection)
{
  cout << "What would you like to do next? ***" << endl
       << endl;
  cout << "Enter 1 to add a contact name and number" << endl;
  cout << "Enter 2 to sort the list by name" << endl;
  cout << "Enter 3 to sorth the list by number" << endl;
  cout << "Enter 4 to Display all entries" << endl;
  cout << "Enter 5 to erae an entry" << endl;
  cout << "Enter 6 to wuit this application" << endl;
  cout << "> ";

  // Accept user input
  cin >> *selection;

  cout << endl;
}

bool Predicate_CheckItemsOnNumber(const ContactListItem &item1,
                                  const ContactListItem &item2)
{
  return (item1.strPhoneNumber < item2.strPhoneNumber);
}

ContactListItem GetContactInfo()
{
  cout << "*** Enter contact information ***" << endl
       << endl;

  string strName;
  cout << "Please enter the contact name" << endl;
  cout << "> ";
  cin >> strName;

  string strPhoneNumber;
  cout << "Please enter the contact phone number" << endl;
  cout << "> ";
  cin >> strPhoneNumber;

  cout << endl;
  return ContactListItem(strName, strPhoneNumber);
}

void DisplayContactList(const list<ContactListItem> &listContacts)
{
  cout << "*** Displaying Contact List ***" << endl
       << endl;
  cout << "There are " << listContacts.size();
  cout << " entries in the contact list." << endl
       << endl;

  list<ContactListItem>::const_iterator iContact;
  for (iContact = listContacts.begin(); iContact != listContacts.end();
       ++iContact)
  {
    cout << "Name: " << iContact->strContactName << "\t";
    cout << "Phone Number: " << iContact->strPhoneNumber;
    cout << endl;
  }

  cout << endl
       << endl;
}

void EraseEntryFromList(list<ContactListItem> &listContacts)
{
  cout << "*** Erase an entry ***" << endl
       << endl;
  cout << "Enter the name of the contact you wish to delete" << endl;
  cout << "> ";

  string strNameToErase;
  cin >> strNameToErase;

  listContacts.remove(ContactListItem(strNameToErase, ""));
}
