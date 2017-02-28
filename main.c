#include <msp430xG46x.h>

#define row_1 0x01
#define row_2 0x02
#define row_3 0x04
#define row_4 0x08
#define row_5 0x10
#define row_6 0x20
#define row_7 0x40
#define row_8 0x80

#define c1 0xFE
#define c2 0xFD
#define c3 0xFB
#define c4 0XF7
#define c5 0xEF
#define c6 0xDF
#define c7 0xBF
#define c8 0x7F

void main(void) {
  volatile unsigned int i;
  int flag = 0;
  int ok_dir = 4;
  WDTCTL = WDTPW + WDTHOLD; // Stop WDT
  P3DIR |= 0xFF; // P3.1 output  ROWS
  P6DIR |= 0xFF; // P6.1 output	BLUE
  P7DIR |= 0xFF; //green
  P2DIR |= 0xFF; //red

  P2OUT = 0xFF;
  P7OUT = 0xFF;

  while (1) {
    //UP
    if (ok_dir == 1) {
      P3OUT = row_3 | row_4 | row_5 | row_6 | row_7; //| row_2 | row_3 | row_4 | row_5| row_6|row_7|row_8

      if (flag == 0) {
        P2OUT = 0xFF;
        P7OUT = 0xFF;
        P6OUT = c4;
      }
      for (i = 0; i < 500; i++);

      P3OUT = row_4;

      P6OUT = c3;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 500; i++);

      P3OUT = row_4;

      P6OUT = c5;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 500; i++);

    }

    // DOWN
    if (ok_dir == 2) {
      P3OUT = row_3 | row_4 | row_5 | row_6 | row_7; //| row_2 | row_3 | row_4 | row_5| row_6|row_7|row_8

      if (flag == 0) {
        P2OUT = 0xFF;
        P7OUT = 0xFF;
        P6OUT = c4;
      }
      for (i = 0; i < 500; i++);

      P3OUT = row_6;

      P6OUT = c3;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 500; i++);

      P3OUT = row_6;

      P6OUT = c5;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 500; i++);

    }
    //RIGHT

    if (ok_dir == 3) {
      P3OUT = row_4; //| row_2 | row_3 | row_4 | row_5| row_6|row_7|row_8

      P2OUT = 0xFF;
      P7OUT = 0xFF;
      P6OUT = c3;

      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c3;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c4;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c5;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c6;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c7;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);
      P3OUT = row_3;

      P6OUT = c6;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);
      P3OUT = row_5;

      P6OUT = c6;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

    }
    //LEFT

    if (ok_dir == 4) {
      P3OUT = row_4; //| row_2 | row_3 | row_4 | row_5| row_6|row_7|row_8

      P2OUT = 0xFF;
      P7OUT = 0xFF;
      P6OUT = c3;

      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c3;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c4;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c5;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c6;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

      P3OUT = row_4;

      P6OUT = c7;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);
      P3OUT = row_3;

      P6OUT = c4;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);
      P3OUT = row_5;

      P6OUT = c4;
      P7OUT = 0xFF;

      P2OUT = 0xFF;
      for (i = 0; i < 300; i++);

    }

    /*
        for(i=0;i<50000;i++);



        P6OUT = 0xFF;
        P2OUT = 0xFF;
        P7OUT = c1;

        for(i=0;i<50000;i++);

    */
  }
}
