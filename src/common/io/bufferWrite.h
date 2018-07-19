/***********************************************************************************************************************************
Buffer IO Write
***********************************************************************************************************************************/
#ifndef COMMON_IO_BUFFERWRITE_H
#define COMMON_IO_BUFFERWRITE_H

/***********************************************************************************************************************************
Buffer write object
***********************************************************************************************************************************/
typedef struct IoBufferWrite IoBufferWrite;

#include "common/io/write.h"

/***********************************************************************************************************************************
Constructor
***********************************************************************************************************************************/
IoBufferWrite *ioBufferWriteNew(Buffer *buffer);

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
IoBufferWrite *ioBufferWriteMove(IoBufferWrite *this, MemContext *parentNew);

/***********************************************************************************************************************************
Getters
***********************************************************************************************************************************/
IoWrite *ioBufferWriteIo(const IoBufferWrite *this);

/***********************************************************************************************************************************
Destructor
***********************************************************************************************************************************/
void ioBufferWriteFree(IoBufferWrite *this);

/***********************************************************************************************************************************
Macros for function logging
***********************************************************************************************************************************/
#define FUNCTION_DEBUG_IO_BUFFER_WRITE_TYPE                                                                                        \
    IoBufferWrite *
#define FUNCTION_DEBUG_IO_BUFFER_WRITE_FORMAT(value, buffer, bufferSize)                                                           \
    objToLog(value, "IoBufferWrite", buffer, bufferSize)

#endif
