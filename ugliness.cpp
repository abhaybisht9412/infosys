#include<bits/stdc++.h>
using namespace std;
string s;
int n, cash, a, b;

void swapf ()
{
  int i;

  for (int a = 0; a < s.length (); a++) 
  if (s[a] == '1') 
  { 
      i = a; 
      break; 
      
  } 
  int j = s.length () - 1; 
  while (j > i)
    {
      if (cash < a)
	break;

      if (s[j] == '0')
	{
	  if (s[i] == '0')
	    i++;

	  else
	    {
	      swap (s[i], s[j]);
	      cash -= a;
	      j--;
	    }
	}
      else
	j--;
    }
}
void flipf ()
{
  
  for (int i = 0; i < s.length (); i++) {
  if( b > cash) break;
  if (s[i] == '1') 
  { 
    s[i]='0'; 
    cash-=b;
      
  } 
}
}

int main ()
{
  cin >> n >> s >> cash >> a >> b;

  if (a < b)
    {
      swapf ();
      flipf ();
    }

  else
    {
      flipf ();
      swapf ();
    }

  cout << stoull (s, 0, 2);

}