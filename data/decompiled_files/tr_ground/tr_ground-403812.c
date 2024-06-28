#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_403812(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax

  sub_403515((_QWORD *)a1);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v2 = gettext("the [c*] repeat construct may not appear in string1");
    error(1, 0, v2);
  }
  if ( a2 )
  {
    sub_403551((_QWORD *)a2, *(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(a2 + 32) > 1uLL )
    {
      v3 = gettext("only one [c*] repeat construct may appear in string2");
      error(1, 0, v3);
    }
    if ( byte_60B264 )
    {
      if ( *(_BYTE *)(a2 + 48) )
      {
        v4 = gettext("[=c=] expressions may not appear in string2 when translating");
        error(1, 0, v4);
      }
      if ( *(_BYTE *)(a2 + 50) )
      {
        v5 = gettext("when translating, the only character classes that may appear in\nstring2 are `upper' and `lower'");
        error(1, 0, v5);
      }
      sub_40306D((_QWORD *)a1, a2);
      if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a2 + 24) && byte_60B263 != 1 )
      {
        if ( !*(_QWORD *)(a2 + 24) )
        {
          v6 = gettext("when not truncating set1, string2 must be non-empty");
          error(1, 0, v6);
        }
        sub_40365E(a1, a2);
      }
      if ( byte_60B262
        && *(_BYTE *)(a1 + 49)
        && (*(_QWORD *)(a2 + 24) != *(_QWORD *)(a1 + 24) || (unsigned __int8)sub_4037A7((_QWORD *)a2) != 1) )
      {
        v7 = gettext(
               "when translating with complemented character classes,\n"
               "string2 must map all characters in the domain to one");
        error(1, 0, v7);
      }
    }
    else if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = gettext("the [c*] construct may appear in string2 only when translating");
      error(1, 0, v8);
    }
  }
}
