typedef int ElementType;
class node
{
    ElementType data;
    node *next;
    node *prev;
};

class List
{
private:
    node *first;
    node *last;
    int count;

public:
    List();       // Create an empty list
    bool Empty(); // return true if the list is empty, otherwise return false

    void InsertAtEnd(ElementType x); // insert a value x on the end of the list

    void Delete(ElementType x); // if value x is in the list, remove x

    void Display(); // Display the data values in the list in the order inserted​

    int Sum(); // Compute and return the sum of the values in the list

    int Average(); // Compute and return the average of the values in the list

    int getCount();
    void listMenu();
};

person charge
number poeple
time and date

rest
    list of 