#define AMITCP_NEW_NAMES
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include "multitcp.h"
#include <libraries/amissl.h>

int
listen(
       int s,
       int backlog)
{
  int r;

  r = MTCP_Listen((struct Socket *)s, backlog);
  if (r == -1) {
    SetAmiSSLerrno(MTCP_SockErrNo((struct Socket *)s));
  }
  return r;
}

