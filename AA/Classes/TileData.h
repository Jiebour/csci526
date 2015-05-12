#ifndef __MyTowerDefense2D__TileData__
#define __MyTowerDefense2D__TileData__

#include "cocos2d.h"
typedef enum {
    kDown=0,
    kLeft=2,
    kUp=3,
    kRight=1,
    KUnKnow = 4
} HeroDirection;
class TileData : public cocos2d::CCObject {
public:
	//~TileData();
	bool initWithPosition(cocos2d::CCPoint pos);
    
	static TileData* create(cocos2d::CCPoint pos);
    
	int fScore();
    
	bool getIsThroughing();
	void setIsThroughing(bool var);
    
	CC_SYNTHESIZE(TileData*, parentTile, ParentTile);
    CC_SYNTHESIZE(cocos2d::CCPoint, startP, startP);
	CC_SYNTHESIZE(cocos2d::CCPoint, position, Position);
	CC_SYNTHESIZE(int, gScore, GScore);
	CC_SYNTHESIZE(int, hScore, HScore);
    CC_SYNTHESIZE(bool, isWay, isWay);
	CC_SYNTHESIZE(bool, isUsed, IsUsed);
    CC_SYNTHESIZE(HeroDirection, direction, Direction);
    
    CC_SYNTHESIZE(bool, isDonut, IsDonut);
    CC_SYNTHESIZE(bool, isLake, IsLake);
    
    bool isThroughing;
protected:
	
	int isThroughingCount;
    
	int _fScore;
    
};

#endif /* defined(__MyTowerDefense2D__TileData__) */
