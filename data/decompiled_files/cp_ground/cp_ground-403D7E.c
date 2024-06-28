#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403D7E(__int64 a1, _BYTE *a2, char a3)
{
  char *v3; // rax
  unsigned int v4; // eax
  char *s; // [rsp+28h] [rbp-18h]
  char *v7; // [rsp+30h] [rbp-10h]
  char *ptr; // [rsp+38h] [rbp-8h]

  ptr = (char *)sub_41281A(a1);
  s = ptr;
  do
  {
    v7 = strchr(s, 44);
    if ( v7 )
    {
      v3 = v7++;
      *v3 = 0;
    }
    v4 = dword_417E40[sub_40AB4A("--preserve", s, off_417E00, dword_417E40, 4LL, off_61D398)];
    if ( v4 == 3 )
    {
      a2[31] = a3;
    }
    else if ( v4 > 3 )
    {
      if ( v4 == 5 )
      {
        a2[36] = a3;
        a2[37] = a3;
      }
      else if ( v4 < 5 )
      {
        a2[34] = a3;
        a2[35] = a3;
      }
      else
      {
        if ( v4 != 6 )
          abort();
        a2[29] = a3;
        a2[30] = a3;
        a2[28] = a3;
        a2[31] = a3;
        if ( byte_61D440 )
          a2[34] = a3;
        a2[36] = a3;
      }
    }
    else if ( v4 == 1 )
    {
      a2[30] = a3;
    }
    else if ( v4 > 1 )
    {
      a2[28] = a3;
    }
    else
    {
      a2[29] = a3;
    }
    s = v7;
  }
  while ( v7 );
  free(ptr);
}
