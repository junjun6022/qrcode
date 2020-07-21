#include "qrcode.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zint.h>

#define QRCODE_FILE "qrcode.png"

int CreateQrCode(char * filename,const char * data)
{
    int error=0;
    if(data==NULL){
        return 0;
    }
    
	struct zint_symbol *my_symbol;
    my_symbol = ZBarcode_Create();
    my_symbol->symbology = BARCODE_QRCODE;
    strcpy(my_symbol->outfile,filename);
    
	error=ZBarcode_Encode_and_Print(my_symbol, (unsigned char*)data, 0, 0);
    if(error!=0){
        return -1;
    }
	
    ZBarcode_Delete(my_symbol);
	
    return 0;
}
