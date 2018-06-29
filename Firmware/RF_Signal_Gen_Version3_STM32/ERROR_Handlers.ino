/*
   This subroutine is called when an error is detected. It compares the emode-variable with the possible errors and sends a RED STRING to the Message-Subroutine
*/

const byte DATA_ERROR_SIGPATH = 0xA0;

void ErrorMode(int emode, bool critical) {
  switch (emode) {
    case 0x10:
      Message(F("Touch not found"), RED);
      break;
    case 0xA0:
      Message(F("Unknown Signal-Path selected!"), RED);
      break;
    default:
      Message(F("Unknown Error"), RED);
      break;
  }
  switch (critical) {
    case true:
    //   Serial.println(F("Critical Error encountered! Halting system!"));
    //    halt();
    default:
      break;
  }
}