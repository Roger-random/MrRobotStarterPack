#include "RobotGFX.h" 
static uint8_t FROG[324] PROGMEM = {
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0xFF, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0xFF, 	0xFF, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00};
Bitmap FROG_bitmap(18,18,FROG,false);


static uint8_t SKULL[324] PROGMEM = {
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x23, 	0x44, 	0x42, 	0x41, 	0x41, 	0x3C, 	0x0B, 	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x2C, 	0x59, 	0x80, 	0xA3, 	0xA2, 	0xB6, 	0xC1, 	0xBF, 	0x6B, 	0x3F, 	0x02, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x2C, 	0x80, 	0x87, 	0x4A, 	0x1D, 	0x26, 	0x42, 	0x54, 	0x78, 	0xB8, 	0xB3, 	0x5A, 	0x02, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x28, 	0x81, 	0x34, 	0x10, 	0x25, 	0x32, 	0x36, 	0x34, 	0x36, 	0x43, 	0x57, 	0x8C, 	0xB2, 	0x6D, 	0x06, 	0x00, 
	0x00, 	0x3E, 	0xA1, 	0x46, 	0x23, 	0x41, 	0x57, 	0x40, 	0x35, 	0x33, 	0x17, 	0x14, 	0x4B, 	0x62, 	0x69, 	0xB2, 	0x69, 	0x00, 
	0x00, 	0x5C, 	0xC3, 	0x2E, 	0x79, 	0xBF, 	0xC0, 	0x77, 	0x38, 	0x1E, 	0x2F, 	0x97, 	0xC2, 	0xA5, 	0x65, 	0xA7, 	0x95, 	0x03, 
	0x32, 	0x8B, 	0x3E, 	0x7A, 	0xE3, 	0xFB, 	0xF9, 	0x92, 	0x48, 	0x39, 	0x55, 	0xEC, 	0xFE, 	0xEF, 	0xBC, 	0x87, 	0xAF, 	0x62, 
	0x43, 	0x99, 	0x38, 	0xE6, 	0xF7, 	0xFB, 	0xFA, 	0x9D, 	0x54, 	0x42, 	0x69, 	0xE8, 	0xFA, 	0xF4, 	0xF8, 	0xCA, 	0xBA, 	0x81, 
	0x43, 	0x99, 	0x31, 	0xD3, 	0xFB, 	0xFF, 	0xE4, 	0x83, 	0x51, 	0x48, 	0x5C, 	0xBC, 	0xF3, 	0xF6, 	0xEF, 	0xBA, 	0xBB, 	0x81, 
	0x42, 	0xA1, 	0x1F, 	0x5F, 	0xA8, 	0xB8, 	0x84, 	0x7B, 	0x9E, 	0xA1, 	0x8C, 	0x6A, 	0x97, 	0xB0, 	0x95, 	0x62, 	0xB7, 	0x81, 
	0x1D, 	0x91, 	0x86, 	0x38, 	0x40, 	0x4C, 	0x47, 	0x79, 	0xE2, 	0xF3, 	0xAA, 	0x61, 	0x40, 	0x48, 	0x4F, 	0x76, 	0xB0, 	0x41, 
	0x00, 	0x59, 	0xCA, 	0x41, 	0x3D, 	0x37, 	0x43, 	0x50, 	0xD2, 	0xF3, 	0x79, 	0x4A, 	0x42, 	0x39, 	0x52, 	0xA4, 	0x90, 	0x00, 
	0x00, 	0x20, 	0x70, 	0x75, 	0x2D, 	0x35, 	0x3D, 	0x47, 	0x8A, 	0x99, 	0x54, 	0x38, 	0x3B, 	0x48, 	0x89, 	0xAF, 	0x3C, 	0x00, 
	0x00, 	0x00, 	0x0F, 	0x67, 	0x63, 	0x2E, 	0x37, 	0x40, 	0x43, 	0x40, 	0x42, 	0x39, 	0x3F, 	0x8B, 	0xAD, 	0x35, 	0x01, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x0C, 	0x80, 	0x94, 	0x4B, 	0xA2, 	0x77, 	0x4E, 	0xAE, 	0x67, 	0x5F, 	0xAB, 	0x21, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x80, 	0xA8, 	0x63, 	0xC4, 	0x82, 	0x6E, 	0xCD, 	0x72, 	0x80, 	0xB0, 	0x08, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x51, 	0xAD, 	0xAE, 	0xB3, 	0xA4, 	0xB1, 	0xAF, 	0xA5, 	0xB6, 	0x7D, 	0x04, 	0x00, 	0x00, 	0x00, 
	0x00, 	0x00, 	0x00, 	0x00, 	0x00, 	0x76, 	0xC5, 	0x4A, 	0x96, 	0xB8, 	0x3E, 	0xAE, 	0xA6, 	0x10, 	0x00, 	0x00, 	0x00, 	0x00};
Bitmap SKULL_bitmap(18,18,SKULL,false);


static uint16_t total_bitmaps = 2;
static Bitmap* BITMAP_LIST[2] = {
	&FROG_bitmap,
	&SKULL_bitmap};
