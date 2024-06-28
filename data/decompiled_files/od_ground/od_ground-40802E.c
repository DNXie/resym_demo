#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_40802E(unsigned int a1, int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  char *v6; // rax
  char v9[8]; // [rsp+20h] [rbp-20h] BYREF
  const char *v10; // [rsp+28h] [rbp-18h]
  char *msgid; // [rsp+30h] [rbp-10h]
  char *v12; // [rsp+38h] [rbp-8h]

  v10 = "--";
  if ( a1 > 3 )
  {
    if ( a1 != 4 )
      goto LABEL_6;
    msgid = "invalid %s%s argument `%s'";
  }
  else if ( a1 >= 2 )
  {
    msgid = "invalid suffix in %s%s argument `%s'";
  }
  else
  {
    if ( a1 != 1 )
LABEL_6:
      abort();
    msgid = "%s%s argument `%s' too large";
  }
  if ( a2 >= 0 )
  {
    v12 = *(char **)(32LL * a2 + a4);
  }
  else
  {
    v10 -= a2;
    v9[0] = a3;
    v9[1] = 0;
    v12 = v9;
  }
  v6 = gettext(msgid);
  error(a6, 0, v6, v10, v12, a5);
}
