#include <iostream>
#include <queue>
using namespace std;
void show(queue<int> QUEUE)
{
  queue<int> q = QUEUE;
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}
int main()
{
  queue<int> q;
  q.push(10);
  q.push(8);
  q.push(6);
  q.push(-4);
  show(q);
  return 0;
}