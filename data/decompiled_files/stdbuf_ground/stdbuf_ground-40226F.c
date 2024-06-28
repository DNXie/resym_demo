#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40226F()
{
  int v0; // eax
  int v1; // er8
  int v2; // er9
  __int64 v3; // rbx
  int v4; // eax
  int v5; // er9
  __int64 v6; // r12
  char *v7; // rbx
  int *v8; // rax
  unsigned int i; // [rsp+0h] [rbp-20h]
  int v10; // [rsp+4h] [rbp-1Ch]
  char *string[3]; // [rsp+8h] [rbp-18h] BYREF

  for ( i = 0; i <= 2; ++i )
  {
    if ( qword_612340[3 * i + 2] )
    {
      if ( *(_BYTE *)qword_612340[3 * i + 2] == 76 )
      {
        v0 = toupper(qword_612340[3 * i + 1]);
        v10 = sub_4068F5((unsigned int)string, (unsigned int)"%s%c=L", (unsigned int)"_STDBUF_", v0, v1, v2, i);
      }
      else
      {
        v3 = qword_612340[3 * i];
        v4 = toupper(qword_612340[3 * i + 1]);
        v10 = sub_4068F5((unsigned int)string, (unsigned int)"%s%c=%lu", (unsigned int)"_STDBUF_", v4, v3, v5, i);
      }
      if ( v10 < 0 )
        sub_40628E();
      if ( putenv(string[0]) )
      {
        v6 = sub_403A19(string[0]);
        v7 = gettext("failed to update the environment with %s");
        v8 = __errno_location();
        error(125, *v8, v7, v6);
      }
    }
  }
}
