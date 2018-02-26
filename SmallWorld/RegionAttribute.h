#pragma once

enum class RegionAttribute
{
	NONE,
	MINE,
	MAGIC,
	CAVERN
};

/*map<string, RegionAttribute> regionAttributeMap = { { "NONE", RegionAttribute::NONE },
											        { "MINE", RegionAttribute::MINE },
											        { "MAGIC", RegionAttribute::MAGIC },
											        { "CAVERN", RegionAttribute::CAVERN } };*/

//Make a class which maps all the enums I want to use. 
//Ex: EnumMapper enumMapper;
//    enumMapper.stringify(RegionType regionType)
//         has cases for each regionType and returns the corresponding string
//    enumMapper.enumify(RegionType.class, "FOREST")
//         has cases for each string and returns corresponding enum
