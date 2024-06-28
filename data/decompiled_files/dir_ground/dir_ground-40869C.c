#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40869C(unsigned int a1, int a2, char a3)
{
  const char *v3; // rax

  if ( a3 != 1 )
  {
    v3 = "?";
  }
  else if ( byte_61D6AA )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = (const char *)sub_40EC1C(a1);
  }
  return sub_408579(v3, a1, a2);
}
