#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_402D91(char *a1)
{
  char *v1; // r13
  __int64 v2; // r12
  char *v3; // rbx
  int *v4; // rax
  char *s1; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE *i; // [rsp+18h] [rbp-C8h]
  char *src; // [rsp+20h] [rbp-C0h]
  char *dest; // [rsp+28h] [rbp-B8h]
  struct stat stat_buf; // [rsp+30h] [rbp-B0h] BYREF

  s1 = 0LL;
  if ( dword_620480 == 1 && !(unsigned int)sub_419BE0(a1, &stat_buf) )
  {
    if ( byte_6203B8 )
    {
      if ( *a1 == 47 )
      {
        for ( i = a1 + 1; *i == 47; ++i )
          ;
        src = i - 1;
        if ( *i )
        {
          do
            ++i;
          while ( *i && *i != 47 );
          dest = (char *)malloc(i - src + 2);
          if ( dest )
          {
            *(_WORD *)stpncpy(dest, src, i - src) = 47;
            free(dest);
          }
        }
      }
    }
    byte_6203B8 = 0;
    if ( (unsigned int)sub_402715(a1, stat_buf.st_mode, &s1) || !strcmp(s1, "<<none>>") )
    {
      if ( !s1 )
        return;
    }
    else if ( (int)sub_40275C(a1, s1) < 0 && *__errno_location() != 95 )
    {
      v1 = s1;
      v2 = sub_40F9AB(a1);
      v3 = gettext("warning: %s: failed to change context to %s");
      v4 = __errno_location();
      error(0, *v4, v3, v2, v1);
    }
    sub_4026ED();
  }
}
