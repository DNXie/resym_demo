#include "/share/binary_recovery/clang-parser/defs.hh"
char __fastcall sub_40A343(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char *a4)
{
  char result; // al
  char v5; // al
  char v8; // [rsp+25h] [rbp-13Bh]
  char v9; // [rsp+26h] [rbp-13Ah]
  bool v10; // [rsp+27h] [rbp-139h]
  FILE *v11; // [rsp+28h] [rbp-138h] BYREF
  unsigned __int64 i; // [rsp+30h] [rbp-130h]
  char *v13; // [rsp+38h] [rbp-128h]
  struct stat stat_buf; // [rsp+40h] [rbp-120h] BYREF
  struct stat v15; // [rsp+D0h] [rbp-90h] BYREF

  v8 = 0;
  v13 = 0LL;
  for ( i = a2; ; ++i )
  {
    result = i;
    if ( i >= a3 )
      break;
    v10 = strcmp(*(const char **)(16 * i + a1), "-") == 0;
    if ( a4 && !strcmp(a4, *(const char **)(16 * i + a1)) && !v10 )
    {
      v9 = 1;
      goto LABEL_21;
    }
    if ( v8 != 1 )
    {
      if ( a4 )
        result = (unsigned int)sub_417160(a4, &stat_buf) != 0;
      else
        result = (unsigned int)sub_417170(1, &stat_buf) != 0;
      if ( result )
        return result;
      v8 = 1;
    }
    if ( v10 )
    {
      if ( (unsigned int)sub_417170(0, &v15) )
        goto LABEL_19;
    }
    else if ( (unsigned int)sub_417160(*(char **)(16 * i + a1), &v15) )
    {
      goto LABEL_19;
    }
    if ( v15.st_ino != stat_buf.st_ino || v15.st_dev != stat_buf.st_dev )
    {
LABEL_19:
      v5 = 0;
      goto LABEL_20;
    }
    v5 = 1;
LABEL_20:
    v9 = v5 & 1;
LABEL_21:
    if ( v9 )
    {
      if ( !v13 )
      {
        v13 = sub_403A5F(&v11);
        sub_408F10(16 * i + a1, 0LL, 1uLL, v11, v13 + 13);
      }
      *(_QWORD *)(16 * i + a1) = v13 + 13;
      *(_QWORD *)(a1 + 16 * i + 8) = v13;
    }
  }
  return result;
}
