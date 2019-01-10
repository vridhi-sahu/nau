// C program for Left Rotation and Right
// Rotation of a String
#include<bits/stdc++.h>
using namespace std;
 
// In-place rotates s towards left by d
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
 
// In-place rotates s towards right by d
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}
 
// Driver code
int main()
{
    string str1, str2, choice;
    int rotate, b;
    printf("Enter the string");
    scanf("%s",str1);
    printf("Enter the size of 2nd string");
    scanf("%d",&b);
    printf("Enter l or r for left or right rotation and by how much to rotate");
    scanf("%c %d",&choice, &rotate);
    if(choice == 'l')
    {
    	leftrotate(str1, rotate);
  		cout << str1 << endl;
 
	}
    else
    {
    	rightrotate(str2, rotate);
  		cout << str2 << endl;
	}
    return 0;
}
