#include<bits/stdc++.h>
using namespace std;
char tree[10];
int root(char key)
{
if (tree[0] != '\0')
cout << "Tree already had root";
else
tree[0] = key;
return 0;
}
int left_set(char key, int parent)
{
if (tree[parent] == '\0')
cout << "\nCan't set child at "<< (parent * 2) + 1 << " , no parent found";
else
tree[(parent * 2) + 1] = key;
return 0;
}
int right_set(char key, int parent)
{
if (tree[parent] == '\0')
cout << "\nCan't set child at " << (parent * 2) + 2 << " , no parent found";
else
tree[(parent * 2) + 2] = key;
return 0;
}
int print_tree()
{
cout << "\n";
for (int i = 0; i < 10; i++)
{
if (tree[i] != '\0')
cout << tree[i];
else
cout << "-";
}
return 0;
}
// Driver Code
int main()
{
root('A');
left_set('B',0);
right_set('C', 0);
left_set('D', 1);
right_set('E', 1);
right_set('F', 2);
left_set('G', 3);
right_set('H', 3);
print_tree();
return 0;
}