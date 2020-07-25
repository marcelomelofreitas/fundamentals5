{$INCLUDE ../../flcInclude.inc}
{$INCLUDE ../flcTCP.inc}

{$IFDEF DEBUG}
{$IFDEF TEST}
  {$DEFINE TCP_TEST}
  {$DEFINE TCP_TEST_LOG_TO_CONSOLE}
{$ENDIF}
{$ENDIF}

{$IFDEF TCP_TEST}
  {$DEFINE TCPCLIENT_TEST}
  {$DEFINE TCPSERVER_TEST}
  {$DEFINE TCPCLIENTSERVER_TEST}

  {$IFDEF TCPCLIENT_TLS}
    {$DEFINE TCPCLIENT_TEST_TLS}
  {$ENDIF}

  {$IFDEF TCPSERVER_TLS}
    {$DEFINE TCPSERVER_TEST_TLS}
  {$ENDIF}

  {$IFDEF TCPCLIENT_TLS}
  {$IFDEF TCPSERVER_TLS}
    {$DEFINE TCPCLIENTSERVER_TEST_TLS}
  {$ENDIF}
  {$ENDIF}
{$ENDIF}
