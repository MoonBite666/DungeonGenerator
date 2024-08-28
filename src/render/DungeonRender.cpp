#include "DungeonRender.h"

#include <iostream>

#include "easyx.h"
#include "graphics.h"

void helloworld() {
    initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
    circle(200, 200, 100);	// 画圆，圆心(200, 200)，半径 100
    int n;
    std::cin >> n;
    closegraph();			// 关闭绘图窗口
}
