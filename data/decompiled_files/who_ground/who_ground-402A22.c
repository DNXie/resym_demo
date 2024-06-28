#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_402A22(char *a1, __int64 a2)
{
  char *result; // rax
  char *s1; // [rsp+10h] [rbp-10h]
  time_t v6; // [rsp+18h] [rbp-8h]

  v6 = 0x8000000000000000LL;
  if ( byte_60F2C4 )
    sub_402978();
  if ( byte_60F2CE )
  {
    result = ttyname(0);
    s1 = result;
    if ( !result )
      return result;
    if ( !strncmp(result, "/dev/", 5uLL) )
      s1 += 5;
  }
  while ( 1 )
  {
    result = a1--;
    if ( !result )
      break;
    if ( byte_60F2CE != 1 || !strncmp(s1, (const char *)(a2 + 8), 0x20uLL) )
    {
      if ( byte_60F2CD && *(_BYTE *)(a2 + 44) && *(_WORD *)a2 == 7 )
      {
        sub_401E57(a2, v6);
      }
      else if ( byte_60F2CC && *(_WORD *)a2 == 1 )
      {
        sub_40274A(a2);
      }
      else if ( byte_60F2C7 && *(_WORD *)a2 == 2 )
      {
        sub_4022F0(a2);
      }
      else if ( byte_60F2CB && *(_WORD *)a2 == 3 )
      {
        sub_4026DB(a2);
      }
      else if ( byte_60F2CA && *(_WORD *)a2 == 5 )
      {
        sub_402618(a2);
      }
      else if ( byte_60F2C9 && *(_WORD *)a2 == 6 )
      {
        sub_402540(a2);
      }
      else if ( byte_60F2C8 && *(_WORD *)a2 == 8 )
      {
        sub_4023CB(a2);
      }
    }
    if ( *(_WORD *)a2 == 2 )
      v6 = *(int *)(a2 + 340);
    a2 += 384LL;
  }
  return result;
}
