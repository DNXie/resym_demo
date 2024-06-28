#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_404831(char *a1, __int64 a2, const char *a3, const char *a4)
{
  char *v4; // rbx
  int *v5; // rax
  bool v7; // al
  __int64 v8; // r12
  char *v9; // rbx
  int *v10; // rax
  struct stat stat_buf; // [rsp+30h] [rbp-A0h] BYREF

  if ( !strcmp(a1, "-") )
  {
    if ( (unsigned int)sub_411EA0(0, &stat_buf) )
    {
      v4 = gettext("cannot stat standard input");
      v5 = __errno_location();
      error(0, *v5, v4);
      return 0LL;
    }
  }
  else
  {
    if ( byte_6163A0 )
      v7 = (unsigned int)sub_411E90(a1, &stat_buf) != 0;
    else
      v7 = (unsigned int)sub_411EB0(a1, &stat_buf) != 0;
    if ( v7 )
    {
      v8 = sub_405DD3(a1);
      v9 = gettext("cannot stat %s");
      v10 = __errno_location();
      error(0, *v10, v9, v8);
      return 0LL;
    }
  }
  if ( (stat_buf.st_mode & 0xF000) == 24576 || (stat_buf.st_mode & 0xF000) == 0x2000 )
    a3 = a4;
  return !sub_404277(
            a3,
            (__int64)a1,
            (unsigned __int8 (__fastcall *)(void *, signed __int64, _QWORD, __int64, __int64))sub_4039D3,
            (__int64)&stat_buf);
}
