#include "/share/binary_recovery/clang-parser/defs.hh"
int sub_4023CB()
{
  int result; // eax
  bool v1; // dl
  int c; // [rsp+Ch] [rbp-4h]
  int ca; // [rsp+Ch] [rbp-4h]

  if ( byte_610388 )
  {
    for ( c = 0; c <= 255; ++c )
      byte_610680[c] = toupper(c);
  }
  if ( qword_6103C0 )
  {
    if ( !*(_BYTE *)qword_6103C0 )
      qword_6103C0 = 0LL;
  }
  else if ( byte_6102B0 && byte_610381 != 1 )
  {
    qword_6103C0 = (__int64)"[.?!][]\"')}]*\\($\\|\t\\|  \\)[ \t\n]*";
  }
  else
  {
    qword_6103C0 = (__int64)"\n";
  }
  if ( qword_6103C0 )
    sub_4022E7((__int64)&qword_6103C0);
  if ( qword_610520 )
    return sub_4022E7((__int64)&qword_610520);
  result = qword_610390;
  if ( !qword_610390 )
  {
    result = (unsigned __int8)byte_6102B0;
    if ( byte_6102B0 )
    {
      for ( ca = 0; ca <= 255; ++ca )
      {
        v1 = ((*__ctype_b_loc())[ca] & 0x400) != 0;
        result = ca;
        byte_6107C0[ca] = v1;
      }
    }
    else
    {
      result = (unsigned int)memset(byte_6107C0, 1, 0x100uLL);
      byte_6107E0 = 0;
      byte_6107C9 = 0;
      byte_6107CA = 0;
    }
  }
  return result;
}
