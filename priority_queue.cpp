#include <iostream>
#include <queue>
using namespace std;
void showPriorityQueue(priority_queue<int> pq)
{
  priority_queue<int> q = pq;
  while (!q.empty())
  {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;
}

int main()
{
  priority_queue<int> q;
  q.push(10);
  q.push(8);
  q.push(9);
  q.push(-2);
  showPriorityQueue(q);
}