#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405FCD(__int64 a1, __int64 a2)
{
  char *v3; // rax
  int result; // eax
  __int64 v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  while ( a1-- )
    putchar_unlocked(32);
  if ( a2 )
  {
    do
    {
      putchar_unlocked(95);
      --v5;
    }
    while ( v5 );
    result = putchar_unlocked(10);
  }
  else
  {
    v3 = gettext("^ no match for key\n");
    result = printf(v3);
  }
  return result;
}
