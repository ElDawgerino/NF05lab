#ifndef RIGHT133_PNG_H
#define RIGHT133_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char right133_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x03, 0x00, 0x00, 0x00, 0x44, 
	0xA4, 0x8A, 0xC6, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 
	0x54, 0x08, 0x08, 0x08, 0xDB, 0xE1, 0x4F, 0xE0, 0x00, 0x00, 
	0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0D, 0xD7, 
	0x00, 0x00, 0x0D, 0xD7, 0x01, 0x42, 0x28, 0x9B, 0x78, 0x00, 
	0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 
	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2E, 
	0x69, 0x6E, 0x6B, 0x73, 0x63, 0x61, 0x70, 0x65, 0x2E, 0x6F, 
	0x72, 0x67, 0x9B, 0xEE, 0x3C, 0x1A, 0x00, 0x00, 0x00, 0x96, 
	0x50, 0x4C, 0x54, 0x45, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x36, 0x25, 0xAB, 0x69, 0x00, 0x00, 
	0x00, 0x31, 0x74, 0x52, 0x4E, 0x53, 0x00, 0x02, 0x06, 0x07, 
	0x08, 0x0C, 0x14, 0x15, 0x18, 0x19, 0x1E, 0x24, 0x29, 0x2D, 
	0x41, 0x49, 0x4C, 0x53, 0x59, 0x5D, 0x6F, 0x72, 0x7D, 0x83, 
	0x84, 0x87, 0x97, 0x98, 0xAA, 0xAC, 0xBB, 0xC1, 0xC5, 0xC8, 
	0xCB, 0xD8, 0xD9, 0xDA, 0xE3, 0xE4, 0xE5, 0xEA, 0xF0, 0xF2, 
	0xF3, 0xF5, 0xF6, 0xFB, 0xFE, 0x0E, 0x3D, 0x0F, 0x1A, 0x00, 
	0x00, 0x00, 0xFF, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8D, 0x85, 
	0x93, 0xD9, 0x5A, 0x83, 0x50, 0x0C, 0x84, 0x47, 0x29, 0xB6, 
	0x88, 0x05, 0x8B, 0x1B, 0x8B, 0x88, 0x28, 0xA0, 0x14, 0x50, 
	0xFF, 0xF7, 0x7F, 0x39, 0x2F, 0xA4, 0x80, 0xAD, 0x7E, 0x99, 
	0xAB, 0x93, 0xE5, 0x24, 0x93, 0x4D, 0x9A, 0xE0, 0x84, 0x59, 
	0x51, 0xF7, 0x7D, 0x5D, 0x64, 0xA1, 0xA3, 0x53, 0x78, 0x69, 
	0xC7, 0x84, 0x2E, 0xF5, 0x8E, 0xCC, 0xAB, 0x78, 0xE0, 0x17, 
	0x86, 0x78, 0xB5, 0xB4, 0x6F, 0x4A, 0x80, 0x2A, 0x09, 0x7C, 
	0xD7, 0xF5, 0x83, 0xA4, 0x02, 0x28, 0x37, 0xB3, 0x7D, 0xDB, 
	0x00, 0xED, 0x6E, 0x56, 0xEC, 0x5A, 0xA0, 0xD9, 0x4E, 0xFF, 
	0x1B, 0x20, 0x5F, 0x2F, 0x43, 0xAE, 0x73, 0xA0, 0x19, 0x63, 
	0xAC, 0x4A, 0xD8, 0x47, 0xC7, 0xA4, 0xA3, 0x3D, 0x94, 0x3F, 
	0x3C, 0x62, 0xE0, 0xC4, 0x2E, 0x45, 0x40, 0x2C, 0x49, 0xDE, 
	0x00, 0xF9, 0x1F, 0x75, 0x2B, 0x87, 0xC1, 0x93, 0x94, 0x42, 
	0x3B, 0xE6, 0xBF, 0x7B, 0x4F, 0xCE, 0x16, 0x3C, 0x5A, 0x48, 
	0x25, 0xA7, 0x83, 0x03, 0xFF, 0x37, 0x78, 0x3C, 0x5F, 0xD4, 
	0x02, 0x9D, 0xA3, 0x10, 0xAA, 0x83, 0xE6, 0x1E, 0x78, 0x72, 
	0x67, 0x8F, 0x0A, 0x42, 0x65, 0x90, 0x4C, 0x9A, 0x07, 0xE0, 
	0xE5, 0x62, 0x12, 0x13, 0xC8, 0x54, 0x40, 0x30, 0xFF, 0xB9, 
	0xFD, 0x82, 0xD7, 0xCB, 0x83, 0x14, 0x40, 0xA1, 0x1A, 0xFC, 
	0x05, 0xF5, 0x9B, 0x4F, 0x68, 0xAE, 0x46, 0xC1, 0x87, 0x5A, 
	0x3D, 0x2C, 0xB2, 0x4A, 0xD7, 0x1F, 0xF0, 0x3C, 0xBE, 0x5D, 
	0xE8, 0x6D, 0x07, 0x33, 0x85, 0x49, 0xD2, 0x2C, 0xD3, 0x6C, 
	0x94, 0xD9, 0x6A, 0x73, 0x58, 0xF6, 0xB8, 0xCD, 0x85, 0xB1, 
	0x57, 0xCE, 0x5C, 0x5A, 0x7B, 0xED, 0xED, 0xC3, 0xB1, 0x4F, 
	0x4F, 0xE6, 0xF1, 0x4A, 0xFF, 0x9D, 0xFF, 0x37, 0x72, 0x55, 
	0x3E, 0x43, 0x8E, 0xFD, 0x58, 0x87, 0x00, 0x00, 0x00, 0x00, 
	0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& right133_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( right133_png, sizeof( right133_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //RIGHT133_PNG_H
