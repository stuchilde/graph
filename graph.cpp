#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
map<string, map<int, int> >vis;
int main()
{
  FILE *fp1, *fp2;
  fp1 = fopen("expression.txt", "r");
  char s1[10], s2[10], s[10]; 
  while(fscanf(fp1, "%s", s) != EOF)
  {
    string str = "";
    double num[20];
    for(int i=0; i<strlen(s); i++){
      str += s[i]; 
    }
    for(int i=0; i<13; i++){
      fscanf(fp1, "%lf", &num[i]);
    } 
    for(int i=0; i<12; i++){
      if(num[i] > num[12])
        vis[str][i] = 1;
    }
  }
  //cout<<vis["YLR331C"][0]<<""<<vis["YLR331C"][1]<<""<<vis["YLR331C"][2]<<vis["YLR331C"][3]<<endl;
  for(int i=0; i<12; i++)
  {
    char filename[30];
    fp2 = fopen("DIP20101010.txt", "r");
    sprintf(filename, "data%d.txt", i+1);
    freopen(filename, "w", stdout);
    while(fscanf(fp2, "%s%s", s1, s2) != EOF){
      string str1 = "";
      string str2 = "";
      for(int j=0; j<strlen(s1); j++)
        str1 += s1[j];
      for(int j=0; j<strlen(s2); j++)
        str2 += s2[j];
      if(vis[str1][i] && vis[str2][i])
        cout<<str1<<" "<<str2<<endl;
    }
  }
  return 0;
}
