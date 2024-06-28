#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_4044F5(__int64 a1, unsigned int a2, char *a3)
{
  char *v3; // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = a2--;
    if ( !(_DWORD)result )
      break;
    v3 = a3++;
    (*(void (__fastcall **)(_QWORD))(a1 + 32))((unsigned int)*v3);
  }
  return result;
}
