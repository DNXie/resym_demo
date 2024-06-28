#include "/share/binary_recovery/clang-parser/defs.hh"
char *__fastcall sub_40B0EB(__int64 a1)
{
  char *result; // rax

  switch ( *(_DWORD *)(a1 + 24) & 0xF000 )
  {
    case 32768:
      if ( *(_QWORD *)(a1 + 48) )
        result = gettext("regular file");
      else
        result = gettext("regular empty file");
      break;
    case 16384:
      result = gettext("directory");
      break;
    case 24576:
      result = gettext("block special file");
      break;
    case 8192:
      result = gettext("character special file");
      break;
    case 4096:
      result = gettext("fifo");
      break;
    case 40960:
      result = gettext("symbolic link");
      break;
    case 49152:
      result = gettext("socket");
      break;
    default:
      result = gettext("weird file");
      break;
  }
  return result;
}
