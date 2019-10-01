#ifndef __j1MAP_H__
#define __j1MAP_H__

#include "PugiXml/src/pugixml.hpp"
#include "p2List.h"
#include "p2Point.h"
#include "j1Module.h"

// TODO 2: Create a struct to hold information for a TileSet
// Ignore Terrain Types and Tile Types for now, but we want the image!

struct tileset
{
	unsigned int firstgrid = 0u;
	char source;
	char name;
	unsigned int tilewidth = 0u;
	unsigned int tileheight = 0u;
	unsigned int spacing = 0u;
	unsigned int margin = 0u;
	unsigned int tilecount = 0u;
	unsigned int columns = 0u;
};
// ----------------------------------------------------


// TODO 1: Create a struct needed to hold the information to Map node
struct mapInfo
{
	float marVersion;
	enum orientation
	{
		invalid,
		orthogonal,
		isometric,
		staggered,
		hexgonal
	};

	enum render_order
	{
		right_down,
		right_up,
		left_down,
		left_up

	};

	unsigned int width = 0u;
	unsigned int height = 0u;
	unsigned int tileWidth = 0u;
	unsigned int tileHeight = 0u;
	unsigned int nextObject = 0u;
};


// ----------------------------------------------------
class j1Map : public j1Module
{
public:

	j1Map();

	// Destructor
	virtual ~j1Map();

	// Called before render is available
	bool Awake(pugi::xml_node& conf);

	// Called each loop iteration
	void Draw();

	// Called before quitting
	bool CleanUp();

	// Load new map
	bool Load(const char* path);

private:


public:

	// TODO 1: Add your struct for map info as public for now
	

private:

	pugi::xml_document	map_file;
	p2SString			folder;
	bool				map_loaded;
};

#endif // __j1MAP_H__