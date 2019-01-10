#include<stdio.h>
#include<stdlib.h>
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
	char str1[30], str2[30],side[10];
	int rote, times;
	printf("enter the string");
	scanf("%s", str1);
	printf("Enter how many times rotation has to be performed");
	scanf("%d",&times);
	printf("enter which side l or r");
	scanf("%s",side);
	printf("how much to rotate");
	scanf("%d",&rote);
	if(side == 'l')
    {
    	leftrotate(str1, rote);
  		cout << str1 << endl;
 
	}
    else
    {
    	rightrotate(str1, rote);
  		cout << str1 << endl;
	}
    return 0;
}

