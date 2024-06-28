#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_401891(char a1, char **a2)
{
  char **v3; // [rsp+0h] [rbp-60h]
  int i; // [rsp+18h] [rbp-48h]
  int j; // [rsp+18h] [rbp-48h]
  signed int v6; // [rsp+18h] [rbp-48h]
  signed int k; // [rsp+18h] [rbp-48h]
  int v8; // [rsp+18h] [rbp-48h]
  int l; // [rsp+18h] [rbp-48h]
  unsigned int v10; // [rsp+1Ch] [rbp-44h]
  unsigned int v11; // [rsp+20h] [rbp-40h]
  int v12; // [rsp+24h] [rbp-3Ch]
  size_t v13; // [rsp+28h] [rbp-38h]
  char s[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-18h]

  v3 = a2;
  v15 = __readfsqword(0x28u);
  v10 = 0;
  if ( a1 )
  {
    v11 = 0;
    v12 = 1;
    for ( i = 1; i <= 6; i *= 10 )
      ++v12;
    for ( j = 1; j <= 64; ++j )
    {
      if ( !(unsigned int)sub_4048C5((unsigned int)j, s) )
      {
        v13 = strlen(s);
        if ( v11 < v13 )
          v11 = v13;
      }
    }
    if ( a2 )
    {
      while ( *v3 )
      {
        v6 = sub_401F93(*v3, s);
        if ( v6 >= 0 )
          sub_401838(v12, v6, v11, s);
        else
          v10 = 1;
        ++v3;
      }
    }
    else
    {
      for ( k = 1; k <= 64; ++k )
      {
        if ( !(unsigned int)sub_4048C5((unsigned int)k, s) )
          sub_401838(v12, k, v11, s);
      }
    }
  }
  else if ( a2 )
  {
    while ( *v3 )
    {
      v8 = sub_401F93(*v3, s);
      if ( v8 >= 0 )
      {
        if ( (unsigned int)(**v3 - 48) > 9 )
          printf("%d\n", (unsigned int)v8);
        else
          puts(s);
      }
      else
      {
        v10 = 1;
      }
      ++v3;
    }
  }
  else
  {
    for ( l = 1; l <= 64; ++l )
    {
      if ( !(unsigned int)sub_4048C5((unsigned int)l, s) )
        puts(s);
    }
  }
  return v10;
}
