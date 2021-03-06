#ifndef LIST1_PNG_H
#define LIST1_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char list1_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x03, 0x00, 0x00, 0x00, 0x44, 
	0xA4, 0x8A, 0xC6, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 
	0x54, 0x08, 0x08, 0x08, 0xDB, 0xE1, 0x4F, 0xE0, 0x00, 0x00, 
	0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x00, 0xDD, 
	0x00, 0x00, 0x00, 0xDD, 0x01, 0x70, 0x53, 0xA2, 0x07, 0x00, 
	0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 
	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2E, 
	0x69, 0x6E, 0x6B, 0x73, 0x63, 0x61, 0x70, 0x65, 0x2E, 0x6F, 
	0x72, 0x67, 0x9B, 0xEE, 0x3C, 0x1A, 0x00, 0x00, 0x00, 0x51, 
	0x50, 0x4C, 0x54, 0x45, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2C, 0x88, 0xA6, 0x70, 0x00, 
	0x00, 0x00, 0x1A, 0x74, 0x52, 0x4E, 0x53, 0x00, 0x0C, 0x0E, 
	0x11, 0x13, 0x16, 0x1C, 0x20, 0x46, 0x4C, 0x55, 0x83, 0x84, 
	0x88, 0x89, 0x8C, 0x9B, 0xA0, 0xBA, 0xC2, 0xD5, 0xDD, 0xEB, 
	0xF0, 0xF4, 0xF6, 0x60, 0x81, 0x29, 0x86, 0x00, 0x00, 0x00, 
	0x5D, 0x49, 0x44, 0x41, 0x54, 0x38, 0xCB, 0xED, 0x91, 0x39, 
	0x12, 0x80, 0x30, 0x0C, 0x03, 0x05, 0x21, 0x09, 0xF7, 0x19, 
	0x2E, 0xFD, 0xFF, 0xA1, 0xB4, 0x4E, 0x13, 0x37, 0x69, 0x60, 
	0xD8, 0xD6, 0x3B, 0xB2, 0x3C, 0x06, 0xBE, 0x83, 0xE9, 0xC2, 
	0x50, 0xA1, 0x98, 0x17, 0xC9, 0x28, 0x84, 0x9E, 0xE4, 0x04, 
	0xCF, 0x88, 0x53, 0x08, 0x81, 0xE4, 0x9E, 0x12, 0xD4, 0x04, 
	0xB5, 0x43, 0x06, 0xCA, 0xD6, 0x00, 0x70, 0x5E, 0x62, 0xC5, 
	0xBC, 0xBE, 0x78, 0x37, 0x70, 0x71, 0xC9, 0x43, 0x08, 0x2B, 
	0xC9, 0x2D, 0x75, 0x85, 0x2A, 0xA8, 0x2B, 0xD4, 0x92, 0xFF, 
	0xBB, 0x5F, 0xC1, 0x03, 0xEE, 0xA6, 0x19, 0x37, 0xAE, 0x70, 
	0x76, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 
	0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& list1_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( list1_png, sizeof( list1_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //LIST1_PNG_H
