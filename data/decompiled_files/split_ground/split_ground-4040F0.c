#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4040F0(_QWORD *a1, _QWORD *a2, char *a3)
{
  char *v3; // rax
  char *v4; // rbx
  char *v5; // rax

  *a3 = 0;
  if ( (unsigned int)sub_409117(a3 + 1, 0LL, 10LL, a2, &locale) || !*a2 )
  {
    v3 = gettext("%s: invalid number of chunks");
    error(1, 0, v3, a3 + 1);
  }
  if ( a3 != optarg && ((unsigned int)sub_409117(optarg, 0LL, 10LL, a1, &locale) || !*a1 || *a2 < *a1) )
  {
    v4 = optarg;
    v5 = gettext("%s: invalid chunk number");
    error(1, 0, v5, v4);
  }
}
