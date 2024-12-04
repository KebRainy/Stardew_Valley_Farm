#pragma once
/****************************************************************
 * Project Name:  Stardew_Valley_Farm
 * File Name:     BackgroundTiledMap.h
 * File Function: MapBg��Ķ��� �����γ���Ƭ��ͼ
 * Author:        
 * Update Date:   2024/12/3
 ****************************************************************/

#include "cocos2d.h"

 /************
  * MapBg��
  * ��Scene�����д�����Ƭ��ͼ
 *
 *************/
class MapBg : public cocos2d::Sprite
{
public:
    bool init();
    static MapBg* create();
    //���ز��γ�TMX��Ƭ��ͼ map_name��Ҫ�������·��
    bool LoadTMXMap(std::string map_name);

};

