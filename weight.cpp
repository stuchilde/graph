#include <iosteram>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
map<string, map<string, int> >calc;
int main()
{
  char GO[10], pro[10], tmp;
  FILE *fp1 = fopen("GO.txt", "r");
  while(fscanf(fp1, "%s%s%s", GO, tmp, pro) != EOF)
  {
    string str_go = "";
    string str_pro = "";
    for(int i=0; i<strlen(GO); i++)       
      str_go += GO[i];
    for(int i=0; i<strlen(pro); i++)
      str_pro += pro[i];
  }
  return 0;
}
