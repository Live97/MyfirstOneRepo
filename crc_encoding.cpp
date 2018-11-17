#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string>
#define MAX_SIZE 32
#define POLY 0x1021
using namespace std;
uint16_t crc16( unsigned char *addr, int num, uint16_t crc );
int main()
{
    uint16_t crc = 0;
    string crc_d,crc_p;
    cin>>crc_d>>crc_p;
    int count = crc_p.length()-1;
    crc_d = crc_d.append(count,'0');
    unsigned char crc_data[32];
    unsigned char crc_poly[32];

    for( int i = 0; i < crc_d.length(); i++ )
        crc_data[i] = crc_d[i];
    cout.setf( ios::hex );
    cout<<hex<<crc16( crc_data,count,crc );
}
uint16_t crc16( unsigned char *addr, int num, uint16_t crc )
{
    int i;
    for( ; num > 0; num-- ){

        crc = crc ^ ( *addr++ << 8 );
        for( i = 0; i < 8; i++ ){

            if( crc & 0x8000 )
                crc = ( crc << 1) ^ POLY;
            else
                crc <<= 1;
        }
        crc &= 0xFFFF;
    }
    return crc;
}

