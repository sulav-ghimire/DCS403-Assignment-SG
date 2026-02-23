// Program to implement queue using array
#include <iostream>
#include <stdexcept>

using namespace std;

// Maximum size of queue
static const int maxSize = 5;

// Queue class definition
class Queue
{
private:
    int queueArray[maxSize]; // Array to store queue elements
    int front;               // Points to front element
    int rear;                // Points to last element

public:
    Queue();            // Constructor
    bool isEmpty();     // Check if queue is empty
    bool isFull();      // Check if queue is full
    void enqueue(int);  // Insert element
    int dequeue();      // Remove element
    int peek();         // View front element
    void display();     // Display queue
    int size();         // Number of elements
};

// Constructor: initialize empty queue
Queue::Queue()
{
    front = -1;
    rear = -1;
}

// Check if queue is empty
bool Queue::isEmpty()
{
    return (front == -1 || front > rear);
}

// Check if queue is full
bool Queue::isFull()
{
    return (rear == maxSize - 1);
}

// Enqueue: insert element at rear
void Queue::enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if (front == -1) front = 0; // First insertion
        rear++;
        queueArray[rear] = data;
    }
}

// Dequeue: remove element from front
int Queue::dequeue()
{
    if (isEmpty())
        throw runtime_error("Queue is empty");

    int retValue = queueArray[front];
    front++;
    return retValue;
}

// Peek front element
int Queue::peek()
{
    if (isEmpty())
        throw runtime_error("Queue is empty");

    return queueArray[front];
}

// Size of queue
int Queue::size()
{
    if (isEmpty()) return 0;
    return (rear - front + 1);
}

// Display queue elements
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        for (int i = front; i <= rear; i++)
            cout << queueArray[i] << "\n";
    }
}

// Main function
int main()
{
    Queue q;

    try
    {
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);

        cout << "Queue Items:\n";
        q.display();

        cout << "Front Item: " << q.peek() << "\n";
        cout << "Total items: " << q.size() << "\n";
        cout << "Dequeued Item: " << q.dequeue() << "\n";

        cout << "Queue Items:\n";
        q.display();

        q.enqueue(5);
        q.enqueue(6);

        cout << "Queue Items:\n";
        q.display();

        // Remove all elements
        cout << "Dequeued Item: " << q.dequeue() << "\n";
        cout << "Dequeued Item: " << q.dequeue() << "\n";
        cout << "Dequeued Item: " << q.dequeue() << "\n";
        cout << "Dequeued Item: " << q.dequeue() << "\n";
        cout << "Dequeued Item: " << q.dequeue() << "\n";

        cout << "Queue Items:\n";
        q.display();
    }
    catch (const exception& e)
    {
        cout << e.what() << "\n";
    }

    return 0;
}

