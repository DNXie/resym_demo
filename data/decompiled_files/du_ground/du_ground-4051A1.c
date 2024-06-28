#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_4051A1(const char *a1, const char *a2, char a3)
{
  int result; // eax
  char *v4; // rax
  int v5; // [rsp+20h] [rbp-20h]
  int v6; // [rsp+24h] [rbp-1Ch]
  char *s; // [rsp+28h] [rbp-18h]
  char *sa; // [rsp+28h] [rbp-18h]
  size_t n; // [rsp+30h] [rbp-10h]
  char *ptr; // [rsp+38h] [rbp-8h]

  if ( (a3 & 8) != 0 )
  {
    if ( (a3 & 0x10) != 0 )
    {
      ptr = (char *)sub_40ECA1(a2);
      s = ptr;
      while ( 1 )
      {
        sa = strchr(s, 47);
        if ( sa )
          *sa = 0;
        v6 = sub_40B517(a1, ptr);
        if ( !sa || v6 <= 0 )
          break;
        v4 = sa;
        s = sa + 1;
        *v4 = 47;
      }
      free(ptr);
      result = v6;
    }
    else
    {
      n = strlen(a1);
      v5 = strncmp(a1, a2, n);
      if ( !v5 )
      {
        v5 = a2[n];
        if ( v5 == 47 )
          v5 = 0;
      }
      result = v5;
    }
  }
  else if ( (a3 & 0x10) != 0 )
  {
    result = sub_40B517(a1, a2);
  }
  else
  {
    result = strcmp(a1, a2);
  }
  return result;
}
