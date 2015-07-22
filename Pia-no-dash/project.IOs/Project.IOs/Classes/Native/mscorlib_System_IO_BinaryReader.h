#pragma once
#include <stdint.h>
// System.IO.Stream
struct Stream_t1080;
// System.Text.Encoding
struct Encoding_t338;
// System.Byte[]
struct ByteU5BU5D_t169;
// System.Text.Decoder
struct Decoder_t1493;
// System.Char[]
struct CharU5BU5D_t286;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.BinaryReader
struct  BinaryReader_t1494  : public Object_t
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1080 * ___m_stream_0;
	// System.Text.Encoding System.IO.BinaryReader::m_encoding
	Encoding_t338 * ___m_encoding_1;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t169* ___m_buffer_2;
	// System.Text.Decoder System.IO.BinaryReader::decoder
	Decoder_t1493 * ___decoder_3;
	// System.Char[] System.IO.BinaryReader::charBuffer
	CharU5BU5D_t286* ___charBuffer_4;
	// System.Boolean System.IO.BinaryReader::m_disposed
	bool ___m_disposed_5;
};
