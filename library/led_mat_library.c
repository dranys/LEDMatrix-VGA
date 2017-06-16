#include "led_mat_library.h"

#ifndef F_NAME_LEN
#define F_NAME_LEN 44
#endif /* F_NAME_LEN */

#ifndef DEV_FILENAME_0
#define DEV_FILENAME_0
char REG_0[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led0";
#endif /* DEV_FILENAME_0 */

#ifndef DEV_FILENAME_1
#define DEV_FILENAME_1
char REG_1[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led1";
#endif /* DEV_FILENAME_1 */

#ifndef DEV_FILENAME_2
#define DEV_FILENAME_2
char REG_2[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led2";
#endif /* DEV_FILENAME_2 */

#ifndef DEV_FILENAME_3
#define DEV_FILENAME_3
char REG_3[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led3";
#endif /* DEV_FILENAME_3 */

#ifndef DEV_FILENAME_4
#define DEV_FILENAME_4
char REG_4[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led4";
#endif /* DEV_FILENAME_4 */

#ifndef DEV_FILENAME_5
#define DEV_FILENAME_5
char REG_5[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led5";
#endif /* DEV_FILENAME_5 */

#ifndef DEV_FILENAME_6
#define DEV_FILENAME_6
char REG_6[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led6";
#endif /* DEV_FILENAME_6 */

#ifndef DEV_FILENAME_7
#define DEV_FILENAME_7
char REG_7[F_NAME_LEN] = "/sys/bus/i2c/devices/1-0070/mat_led7";
#endif /* DEV_FILENAME_7 */

#ifndef DEV_FILENAMES
#define DEV_FILENAMES
char * FILENAMES[44] =
{
  REG_0, REG_1, REG_2, REG_3, REG_4, REG_5, REG_6, REG_7
};
#endif /* DEV_FILENAMES */

#ifndef LED_ON_DELAY
#define LED_ON_DELAY 150
#endif /* LED_ON_DELAY */

#ifndef LED_MAT_ADDRESS
#define LED_MAT_ADDRESS 0x70
#endif /* LED_MAT_ADDRESS */

#ifndef LED_MAT_PRIME_REG
#define LED_MAT_PRIME_REG 0x00
#endif /* LED_MAT_PRIME_REG */

#ifndef LED_BLINK_REG
#define LED_BLINK_REG 0x81
#endif /* LED_BLINK_REG */

#ifndef SYMBOL_LENGTH
#define SYMBOL_LENGTH 8
#endif /* SYMBOL_LENGTH */

#ifndef WRITE_BUFFER_SIZE
#define WRITE_BUFFER_SIZE 2
#endif /* BYTE_WRITE_BUFFER_SIZE */

#ifndef CLEAR
#define CLEAR
uint8_t CLEAR_LEDS[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00000000,
  0B00000000,
  0B00000000,
  0B00000000,
  0B00000000,
  0B00000000,
  0B00000000
};
#endif /* CLEAR */

#ifndef A_CHAR
#define A_CHAR
uint8_t A[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00001100,
  0B00011110,
  0B00110011,
  0B00110011,
  0B00111111,
  0B00110011,
  0B00110011
};
#endif /* A_CHAR */

#ifndef B_CHAR
#define B_CHAR
uint8_t B[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111111,
  0B01100110,
  0B01100110,
  0B00111110,
  0B01100110,
  0B01100110,
  0B00111111
};
#endif /* B_CHAR */

#ifndef C_CHAR
#define C_CHAR
uint8_t C[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B00000011,
  0B00000011,
  0B00000011,
  0B01100110,
  0B00111100
};
#endif /* C_CHAR */

#ifndef D_CHAR
#define D_CHAR
uint8_t D[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00011111,
  0B00110110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00110110,
  0B00011111
};
#endif /* D_CHAR */

#ifndef E_CHAR
#define E_CHAR
uint8_t E[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111111,
  0B01000110,
  0B00010110,
  0B00011110,
  0B00010110,
  0B01000110,
  0B01111111
};
#endif /* E_CHAR */

#ifndef F_CHAR
#define F_CHAR
uint8_t F[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111111,
  0B01000110,
  0B00010110,
  0B00011110,
  0B00010110,
  0B00000110,
  0B00001111
};
#endif /* F_CHAR */

#ifndef G_CHAR
#define G_CHAR
uint8_t G[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B00000011,
  0B00000011,
  0B01110011,
  0B01100110,
  0B01111100
};
#endif /* G_CHAR */

#ifndef H_CHAR
#define H_CHAR
uint8_t H[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00110011,
  0B00110011,
  0B00110011,
  0B00111111,
  0B00110011,
  0B00110011,
  0B00110011
};
#endif /* H_CHAR */

#ifndef I_CHAR
#define I_CHAR
uint8_t I[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00011110,
  0B00001100,
  0B00001100,
  0B00001100,
  0B00001100,
  0B00001100,
  0B00011110
};
#endif /* I_CHAR */

#ifndef J_CHAR
#define J_CHAR
uint8_t J[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111000,
  0B00110000,
  0B00110000,
  0B00110000,
  0B00110011,
  0B00110011,
  0B00011110
};
#endif /* J_CHAR */

#ifndef K_CHAR
#define K_CHAR
uint8_t K[SYMBOL_LENGTH] =
{
  0B00000000,
  0B10110011,
  0B00110011,
  0B00011011,
  0B00001111,
  0B00011011,
  0B00110011,
  0B10110011
};
#endif /* K_CHAR */

#ifndef L_CHAR
#define L_CHAR
uint8_t L[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00001111,
  0B00000110,
  0B00000110,
  0B00000110,
  0B01000110,
  0B01100110,
  0B01111111
};
#endif /* L_CHAR */

#ifndef M_CHAR
#define M_CHAR
uint8_t M[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01100011,
  0B01110111,
  0B01111111,
  0B01111111,
  0B01101011,
  0B01100011,
  0B01100011
};
#endif /* M_CHAR */

#ifndef N_CHAR
#define N_CHAR
uint8_t N[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01100011,
  0B01100111,
  0B01101111,
  0B01111011,
  0B01110011,
  0B01100011,
  0B01100011
};
#endif /* N_CHAR */

#ifndef O_CHAR
#define O_CHAR
uint8_t O[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00011100,
  0B00110110,
  0B01100011,
  0B01100011,
  0B01100011,
  0B00110110,
  0B00011100
};
#endif /* O_CHAR */

#ifndef P_CHAR
#define P_CHAR
uint8_t P[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111111,
  0B01100110,
  0B01100110,
  0B00111110,
  0B00000110,
  0B00000110,
  0B00001111
};
#endif /* P_CHAR */

#ifndef Q_CHAR
#define Q_CHAR
uint8_t Q[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01110110,
  0B00111100,
  0B01110000
};
#endif /* Q_CHAR */

#ifndef R_CHAR
#define R_CHAR
uint8_t R[SYMBOL_LENGTH] =
{
  0B00000000,
  0B10011111,
  0B00110011,
  0B00110011,
  0B00011111,
  0B00011011,
  0B00110011,
  0B11110011
};
#endif /* R_CHAR */

#ifndef S_CHAR
#define S_CHAR
uint8_t S[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B00001110,
  0B00011100,
  0B01110000,
  0B01100110,
  0B00111100
};
#endif /* S_CHAR */

#ifndef T_CHAR
#define T_CHAR
uint8_t T[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111110,
  0B01011010,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00111100
};
#endif /* T_CHAR */

#ifndef U_CHAR
#define U_CHAR
uint8_t U[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01111110,
  0B01111110
};
#endif /* U_CHAR */

#ifndef V_CHAR
#define V_CHAR
uint8_t V[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B01100110,
  0B00111100,
  0B00011000
};
#endif /* V_CHAR */

#ifndef W_CHAR
#define W_CHAR
uint8_t W[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01100011,
  0B01100011,
  0B01100011,
  0B01101011,
  0B01111111,
  0B01110111,
  0B01100011
};
#endif /* W_CHAR */

#ifndef X_CHAR
#define X_CHAR
uint8_t X[SYMBOL_LENGTH] =
{
  0B01100011,
  0B01100011,
  0B00110110,
  0B00011100,
  0B00011100,
  0B00110110,
  0B01100011,
  0B01100011
};
#endif /* X_CHAR */

#ifndef Y_CHAR
#define Y_CHAR
uint8_t Y[SYMBOL_LENGTH] =
{
  0B00000000,
  0B11110011,
  0B00110011,
  0B00110011,
  0B00011110,
  0B00001100,
  0B00001100,
  0B00011110
};
#endif /* Y_CHAR */

#ifndef Z_CHAR
#define Z_CHAR
uint8_t Z[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111111,
  0B01100011,
  0B00110001,
  0B00011000,
  0B01001100,
  0B01100110,
  0B01111111
};
#endif /* Z_CHAR */

#ifndef ONE_N
#define ONE_N
uint8_t ONE[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00011000,
  0B00011100,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00011000,
  0B00111100
};
#endif /* ONE_N */

#ifndef TWO_N
#define TWO_N
uint8_t TWO[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B00111000,
  0B00001100,
  0B01100110,
  0B01111110
};
#endif /* TWO_N */

#ifndef THREE_N
#define THREE_N
uint8_t THREE[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100000,
  0B00111000,
  0B01100000,
  0B01100110,
  0B00111100
};
#endif /* THREE_N */

#ifndef FOUR_N
#define FOUR_N
uint8_t FOUR[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111000,
  0B00111100,
  0B00110110,
  0B00110011,
  0B01111111,
  0B00110000,
  0B01111000
};
#endif /* FOUR_N */

#ifndef FIVE_N
#define FIVE_N
uint8_t FIVE[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111110,
  0B00000110,
  0B00111110,
  0B01100000,
  0B01100000,
  0B01100110,
  0B00111100
};
#endif /* FIVE_N */

#ifndef SIX_N
#define SIX_N
uint8_t SIX[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111000,
  0B00001100,
  0B00000110,
  0B00111110,
  0B01100110,
  0B01100110,
  0B00111100
};
#endif /* SIX_N */


#ifndef SEVEN_N
#define SEVEN_N
uint8_t SEVEN[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111110,
  0B01100110,
  0B01100000,
  0B00110000,
  0B00011000,
  0B00011000,
  0B00011000
};
#endif /* SEVEN_N */

#ifndef EIGHT_N
#define EIGHT_N
uint8_t EIGHT[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B00111100,
  0B01100110,
  0B01100110,
  0B00111100
};
#endif /* EIGHT_N */

#ifndef NINE_N
#define NINE_N
uint8_t NINE[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111100,
  0B01100110,
  0B01100110,
  0B01111100,
  0B01100000,
  0B00110000,
  0B00011100
};
#endif /* NINE_N */

#ifndef ZERO_N
#define ZERO_N
uint8_t ZERO[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111110,
  0B01100011,
  0B01110011,
  0B01111011,
  0B01101111,
  0B01100111,
  0B00111110
};
#endif /* ZERO_N */

#ifndef SMILE_E
#define SMILE_E
uint8_t SMILE[SYMBOL_LENGTH] =
{
  0B00011110,
  0B00100001,
  0B11010010,
  0B11000000,
  0B11010010,
  0B11001100,
  0B00100001,
  0B00011110
};
#endif /* SMILE_E */

#ifndef FROWN_E
#define FROWN_E
uint8_t FROWN[SYMBOL_LENGTH] =
{
  0B00011110,
  0B00100001,
  0B11010010,
  0B11000000,
  0B11001100,
  0B11010010,
  0B00100001,
  0B00011110
};
#endif /* FROWN */

#ifndef SERIOUS_E
#define SERIOUS_E
uint8_t SERIOUS[SYMBOL_LENGTH] =
{
  0B00011110,
  0B00100001,
  0B11010010,
  0B11000000,
  0B11000000,
  0B11011110,
  0B00100001,
  0B00011110
};
#endif /* SERIOUS */

#ifndef HEART_E
#define HEART_E
uint8_t HEART[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00100010,
  0B01110111,
  0B01111111,
  0B01111111,
  0B00111110,
  0B00011100,
  0B00001000
};
#endif /* HEART_E */

#ifndef ARROW_E
#define ARROW_E
uint8_t ARROW[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00001000,
  0B00011100,
  0B00111110,
  0B01111111,
  0B00011100,
  0B00011100,
  0B00011100
};
#endif /* ARROW_E */

#ifndef DOLLAR_E
#define DOLLAR_E
uint8_t DOLLAR[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00001000,
  0B00111100,
  0B00000010,
  0B00011100,
  0B00100000,
  0B00011110,
  0B00001000
};
#endif /* DOLLAR_E */

#ifndef NOTE_E
#define NOTE_E
uint8_t NOTE[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00000000,
  0B00011000,
  0B00101000,
  0B00001000,
  0B00001100,
  0B00001110,
  0B00000110
};
#endif /* NOTE_E */

#ifndef MARS_E
#define MARS_E
uint8_t MARS[SYMBOL_LENGTH] =
{
  0B00000000,
  0B01111000,
  0B01100000,
  0B01010000,
  0B01001110,
  0B00001001,
  0B00001001,
  0B00000110
};
#endif /* MARS */

#ifndef VENUS_E
#define VENUS_E
uint8_t VENUS[SYMBOL_LENGTH] =
{
  0B00000000,
  0B00111000,
  0B01000100,
  0B01000100,
  0B00111000,
  0B00010000,
  0B00111000,
  0B00010000
};
#endif /* VENUS_E */

#ifndef NOMOUTH_E
#define NOMOUTH_E
uint8_t NOMOUTH[SYMBOL_LENGTH] =
{
  0B00011110,
  0B00100001,
  0B11010010,
  0B11000000,
  0B11000000,
  0B11000000,
  0B00100001,
  0B00011110
};
#endif /* NOMOUTH_E */

#ifndef CHAR_SET_LENGTH
#define CHAR_SET_LENGTH 46
#endif /* CHAR_SET_LENGTH */

#ifndef CHARACTERS
#define CHARACTERS
uint8_t * CHARS[CHAR_SET_LENGTH] =
{
  A, B, C, D, E, F, G, H, I ,J, K, L, M,
  N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
  ONE, TWO, THREE, FOUR, FIVE,
  SIX, SEVEN, EIGHT, NINE, ZERO,
  SMILE, FROWN, SERIOUS, HEART, ARROW,
  DOLLAR, NOTE, MARS, VENUS, NOMOUTH
};
#endif /* CHARACTERS */

char *
convert(uint8_t *a)
{
  int tmp = *a;
  char * result = calloc ( 1, 16 );

  sprintf ( result, "%d", tmp );
  printf ( "result is: %s\n", result );

  return result;
}

void
wait ( unsigned long milliseconds )
{
  unsigned long millisecs = milliseconds;
  struct timespec req = { 0 };
  time_t sec = (int)(millisecs / 1000);
  millisecs = millisecs - (sec * 1000);
  req.tv_sec = sec;
  req.tv_nsec = millisecs * 1000000L;
  nanosleep ( &req, &req );
}

void
write_byte ( FILE ** dev_fd, uint8_t data )
{
  uint8_t write_data = data;
  char * data_string = convert ( &write_data );
  fprintf ( *dev_fd, data_string );
  free ( data_string );
}

void
open_device ( FILE ** dev_fd, char * filename )
{
  FILE * led_mat_fd = 0;
  led_mat_fd = fopen ( filename, "w" );
  if ( !led_mat_fd )
    {
      printf ( "Failed to open the bus.\n" );
      exit ( EXIT_FAILURE );
    }
  *dev_fd = led_mat_fd;
}

void
close_device ( FILE ** dev_fd )
{
  if ( (fclose ( *dev_fd )) < 0 )
    {
      printf ( "Failed to close the bus.\n" );
      exit ( EXIT_FAILURE );
    }
}

void
display_symbol ( uint8_t * symbol_data, uint8_t length )
{
  FILE * led_mat_fd;

  int i;
  for ( i = 0 ; i < length ; i++ )
  {
    printf ( "led_mat_fd is :%p\n", led_mat_fd );
    printf ( "filename is:%s\n", FILENAMES[i] );
    open_device ( &led_mat_fd, FILENAMES[i] );
    printf ( "led_mat_fd is :%p\n", led_mat_fd );
    write_byte ( &led_mat_fd, symbol_data[i]);
    close_device ( &led_mat_fd );

    wait ( LED_ON_DELAY );
  }
}

void
clear_led_mat ( void )
{
  display_symbol ( CLEAR_LEDS, SYMBOL_LENGTH );
}

void
print_test ( void )
{
  int i;
  for ( i = 0; i < SYMBOL_LENGTH ; i++)
    {
      char * tmp = convert ( &A[i] );
      printf ( "row is:%d as a number\n", A[i] );
      printf ( "row is:%s as a number\n", tmp );
      free ( tmp );
    }
  for ( i = 0; i < 3 ; i++ )
    {
      display_symbol ( X, SYMBOL_LENGTH );
      clear_led_mat ();
    }
}

void
led_mat_print ( int argc, char ** argv )
{
  int start = 2;
  int end = argc;
  int i;

  printf ( "the message was:\n" );

  for ( i = start ; i < end ; i++ )
    {
      printf ( "%s ", argv[i] );
    }
  print_newline ();
}
