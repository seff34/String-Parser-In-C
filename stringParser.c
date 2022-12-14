/**
 * @file      stringParser.c
 * @author    Sefa Eren AKDOGAN
 * @brief     String Parser
 * @version   1.0
 * @date      2022-07-20
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * @brief String Parser 
 * @param  [in]  input   Input Array
 * @param  [in]  header  Header of parse line
 * @param  [in]  start   Start Character
 * @param  [in]  end     Finish Character
 * @param  [out] output  Output Array
 * @return [int8_t]      Function Execute Result
 * @retval [0]           Success
 * @retval [1]           Fail
 */
int8_t parser(char* input,const char* header,const char* start,const char* end,char* output )
{
    if(strstr(input,header))
    {
        strcpy(output,strtok(input,start));
        strcpy(output,strtok(NULL,end));
        return EXIT_SUCCESS;
    }
    printf("Undefined Data\n");
    return EXIT_FAILURE; 
}


